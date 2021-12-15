/*
 * Farmer.cpp
 *
 *  Created on: Dec 12, 2021
 *      Author: mad
 */

#include <mmx/Farmer.h>
#include <mmx/Transaction.hxx>
#include <mmx/WalletClient.hxx>


namespace mmx {

Farmer::Farmer(const std::string& _vnx_name)
	:	FarmerBase(_vnx_name)
{
}

void Farmer::init()
{
	vnx::open_pipe(vnx_name, this, 1000);
	vnx::open_pipe(vnx_get_id(), this, 1000);
}

void Farmer::main()
{
	WalletClient wallet(wallet_server);

	for(auto keys : wallet.get_all_farmer_keys()) {
		if(keys) {
			key_map[keys->farmer_public_key] = keys->farmer_private_key;
			log(INFO) << "Got farmer key: " << keys->farmer_public_key;
		}
	}

	if(!reward_addr) {
		reward_addr = wallet.get_address(0);
	}
	if(!reward_addr) {
		log(ERROR) << "No reward address set!";
		return;
	}
	log(INFO) << "Reward address: " << reward_addr->to_string();

	Super::main();
}

vnx::Hash64 Farmer::get_mac_addr() const
{
	return vnx_get_id();
}

std::pair<std::shared_ptr<const Transaction>, bls_signature_t>
Farmer::sign_block(std::shared_ptr<const BlockHeader> block, const uint64_t& reward_amount) const
{
	if(!block->proof) {
		throw std::logic_error("invalid proof");
	}
	auto iter = key_map.find(block->proof->farmer_key);
	if(iter == key_map.end()) {
		throw std::logic_error("unknown farmer key");
	}
	auto copy = vnx::clone(block);

	auto base = Transaction::create();
	auto amount_left = reward_amount;
	{
		tx_in_t in;
		in.prev.txid = hash_t(block->prev);
		base->inputs.push_back(in);
	}
	if(project_addr && amount_left > 0)
	{
		tx_out_t out;
		out.address = *project_addr;
		out.amount = double(amount_left) * devfee_ratio;
		if(out.amount > 0) {
			amount_left -= out.amount;
			base->outputs.push_back(out);
		}
	}
	if(reward_addr && amount_left > 0)
	{
		tx_out_t out;
		out.address = *reward_addr;
		out.amount = amount_left;
		amount_left -= out.amount;
		base->outputs.push_back(out);
	}
	base->finalize();

	copy->tx_base = base;
	copy->hash = copy->calc_hash();

	const auto signature = bls_signature_t::sign(iter->second, copy->hash);
	return std::make_pair(base, signature);
}


} // mmx