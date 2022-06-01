
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_mmx_contract_NFT_HXX_
#define INCLUDE_mmx_contract_NFT_HXX_

#include <mmx/contract/package.hxx>
#include <mmx/ChainParams.hxx>
#include <mmx/Contract.hxx>
#include <mmx/Solution.hxx>
#include <mmx/addr_t.hpp>
#include <mmx/hash_t.hpp>
#include <vnx/Object.hpp>


namespace mmx {
namespace contract {

class MMX_CONTRACT_EXPORT NFT : public ::mmx::Contract {
public:
	
	::mmx::addr_t creator;
	vnx::optional<::mmx::addr_t> parent;
	::vnx::Object data;
	std::shared_ptr<const ::mmx::Solution> solution;
	
	typedef ::mmx::Contract Super;
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0x7cb24b9888a47906ull;
	
	NFT() {}
	
	vnx::Hash64 get_type_hash() const override;
	std::string get_type_name() const override;
	const vnx::TypeCode* get_type_code() const override;
	
	virtual vnx::bool_t is_valid() const override;
	virtual ::mmx::hash_t calc_hash(const vnx::bool_t& full_hash = 0) const override;
	virtual uint64_t num_bytes() const;
	virtual uint64_t calc_cost(std::shared_ptr<const ::mmx::ChainParams> params = nullptr) const override;
	
	static std::shared_ptr<NFT> create();
	std::shared_ptr<vnx::Value> clone() const override;
	
	void read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) override;
	void write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const override;
	
	void read(std::istream& _in) override;
	void write(std::ostream& _out) const override;
	
	template<typename T>
	void accept_generic(T& _visitor) const;
	void accept(vnx::Visitor& _visitor) const override;
	
	vnx::Object to_object() const override;
	void from_object(const vnx::Object& object) override;
	
	vnx::Variant get_field(const std::string& name) const override;
	void set_field(const std::string& name, const vnx::Variant& value) override;
	
	friend std::ostream& operator<<(std::ostream& _out, const NFT& _value);
	friend std::istream& operator>>(std::istream& _in, NFT& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
protected:
	std::shared_ptr<vnx::Value> vnx_call_switch(std::shared_ptr<const vnx::Value> _method) override;
	
};

template<typename T>
void NFT::accept_generic(T& _visitor) const {
	_visitor.template type_begin<NFT>(5);
	_visitor.type_field("version", 0); _visitor.accept(version);
	_visitor.type_field("creator", 1); _visitor.accept(creator);
	_visitor.type_field("parent", 2); _visitor.accept(parent);
	_visitor.type_field("data", 3); _visitor.accept(data);
	_visitor.type_field("solution", 4); _visitor.accept(solution);
	_visitor.template type_end<NFT>(5);
}


} // namespace mmx
} // namespace contract


namespace vnx {

} // vnx

#endif // INCLUDE_mmx_contract_NFT_HXX_
