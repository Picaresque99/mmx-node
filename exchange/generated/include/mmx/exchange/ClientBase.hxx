
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_mmx_exchange_ClientBase_HXX_
#define INCLUDE_mmx_exchange_ClientBase_HXX_

#include <mmx/exchange/package.hxx>
#include <mmx/Block.hxx>
#include <mmx/Transaction.hxx>
#include <mmx/addr_t.hpp>
#include <mmx/exchange/OrderBundle.hxx>
#include <mmx/exchange/amount_t.hxx>
#include <mmx/exchange/matched_order_t.hxx>
#include <mmx/exchange/open_order_t.hxx>
#include <mmx/exchange/order_t.hxx>
#include <mmx/exchange/trade_order_t.hxx>
#include <mmx/exchange/trade_pair_t.hxx>
#include <mmx/hash_t.hpp>
#include <mmx/txio_key_t.hxx>
#include <mmx/ulong_fraction_t.hxx>
#include <vnx/TopicPtr.hpp>
#include <vnx/addons/MsgServer.h>


namespace mmx {
namespace exchange {

class ClientBase : public ::vnx::addons::MsgServer {
public:
	
	::vnx::TopicPtr input_blocks = "node.verified_blocks";
	std::string node_server = "Node";
	std::string wallet_server = "Wallet";
	std::map<std::string, std::string> server_map;
	
	typedef ::vnx::addons::MsgServer Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0x7d13a60fec8eb7f6ull;
	
	ClientBase(const std::string& _vnx_name);
	
	vnx::Hash64 get_type_hash() const override;
	std::string get_type_name() const override;
	const vnx::TypeCode* get_type_code() const override;
	
	void read(std::istream& _in) override;
	void write(std::ostream& _out) const override;
	
	template<typename T>
	void accept_generic(T& _visitor) const;
	void accept(vnx::Visitor& _visitor) const override;
	
	vnx::Object to_object() const override;
	void from_object(const vnx::Object& object) override;
	
	vnx::Variant get_field(const std::string& name) const override;
	void set_field(const std::string& name, const vnx::Variant& value) override;
	
	friend std::ostream& operator<<(std::ostream& _out, const ClientBase& _value);
	friend std::istream& operator>>(std::istream& _in, ClientBase& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
protected:
	using Super::handle;
	
	virtual std::vector<std::string> get_servers() const = 0;
	virtual void execute_async(const std::string& server, const uint32_t& wallet, const ::mmx::exchange::matched_order_t& order, const vnx::request_id_t& _request_id) const = 0;
	void execute_async_return(const vnx::request_id_t& _request_id, const ::mmx::hash_t& _ret_0) const;
	virtual void match_async(const std::string& server, const ::mmx::exchange::trade_pair_t& pair, const std::vector<::mmx::exchange::trade_order_t>& orders, const vnx::request_id_t& _request_id) const = 0;
	void match_async_return(const vnx::request_id_t& _request_id, const std::vector<::mmx::exchange::matched_order_t>& _ret_0) const;
	virtual void get_orders_async(const std::string& server, const ::mmx::exchange::trade_pair_t& pair, const vnx::request_id_t& _request_id) const = 0;
	void get_orders_async_return(const vnx::request_id_t& _request_id, const std::vector<::mmx::exchange::order_t>& _ret_0) const;
	virtual void get_price_async(const std::string& server, const ::mmx::addr_t& want, const ::mmx::exchange::amount_t& have, const vnx::request_id_t& _request_id) const = 0;
	void get_price_async_return(const vnx::request_id_t& _request_id, const ::mmx::ulong_fraction_t& _ret_0) const;
	virtual vnx::optional<::mmx::exchange::open_order_t> get_order(const ::mmx::txio_key_t& key) const = 0;
	virtual std::shared_ptr<const ::mmx::exchange::OrderBundle> get_offer(const uint64_t& id) const = 0;
	virtual std::vector<std::shared_ptr<const ::mmx::exchange::OrderBundle>> get_all_offers() const = 0;
	virtual void cancel_offer(const uint64_t& id) = 0;
	virtual void cancel_all() = 0;
	virtual std::shared_ptr<const ::mmx::exchange::OrderBundle> make_offer(const uint32_t& wallet, const ::mmx::exchange::trade_pair_t& pair, const uint64_t& bid, const uint64_t& ask) const = 0;
	virtual std::vector<::mmx::exchange::trade_order_t> make_trade(const uint32_t& wallet, const ::mmx::exchange::trade_pair_t& pair, const uint64_t& bid, const vnx::optional<uint64_t>& ask) const = 0;
	virtual void place(std::shared_ptr<const ::mmx::exchange::OrderBundle> offer) = 0;
	virtual std::shared_ptr<const ::mmx::Transaction> approve(std::shared_ptr<const ::mmx::Transaction> tx) const = 0;
	virtual void handle(std::shared_ptr<const ::mmx::Block> _value) {}
	
	void vnx_handle_switch(std::shared_ptr<const vnx::Value> _value) override;
	std::shared_ptr<vnx::Value> vnx_call_switch(std::shared_ptr<const vnx::Value> _method, const vnx::request_id_t& _request_id) override;
	
};

template<typename T>
void ClientBase::accept_generic(T& _visitor) const {
	_visitor.template type_begin<ClientBase>(16);
	_visitor.type_field("port", 0); _visitor.accept(port);
	_visitor.type_field("host", 1); _visitor.accept(host);
	_visitor.type_field("max_connections", 2); _visitor.accept(max_connections);
	_visitor.type_field("listen_queue_size", 3); _visitor.accept(listen_queue_size);
	_visitor.type_field("stats_interval_ms", 4); _visitor.accept(stats_interval_ms);
	_visitor.type_field("connection_timeout_ms", 5); _visitor.accept(connection_timeout_ms);
	_visitor.type_field("send_buffer_size", 6); _visitor.accept(send_buffer_size);
	_visitor.type_field("receive_buffer_size", 7); _visitor.accept(receive_buffer_size);
	_visitor.type_field("tcp_no_delay", 8); _visitor.accept(tcp_no_delay);
	_visitor.type_field("tcp_keepalive", 9); _visitor.accept(tcp_keepalive);
	_visitor.type_field("show_warnings", 10); _visitor.accept(show_warnings);
	_visitor.type_field("max_msg_size", 11); _visitor.accept(max_msg_size);
	_visitor.type_field("input_blocks", 12); _visitor.accept(input_blocks);
	_visitor.type_field("node_server", 13); _visitor.accept(node_server);
	_visitor.type_field("wallet_server", 14); _visitor.accept(wallet_server);
	_visitor.type_field("server_map", 15); _visitor.accept(server_map);
	_visitor.template type_end<ClientBase>(16);
}


} // namespace mmx
} // namespace exchange


namespace vnx {

} // vnx

#endif // INCLUDE_mmx_exchange_ClientBase_HXX_
