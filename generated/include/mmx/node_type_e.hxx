
// AUTO GENERATED by vnxcppcodegen

#ifndef INCLUDE_mmx_node_type_e_HXX_
#define INCLUDE_mmx_node_type_e_HXX_

#include <vnx/Type.h>
#include <mmx/package.hxx>


namespace mmx {

struct node_type_e {
	
	enum enum_t : uint32_t {
		API_CLIENT = 1802393446l,
		FULL_NODE = 2903686019l,
		LIGHT_NODE = 3477499945l,
	};
	
	::mmx::node_type_e::enum_t value = ::mmx::node_type_e::enum_t(0);
	
	static const vnx::Hash64 VNX_TYPE_HASH;
	static const vnx::Hash64 VNX_CODE_HASH;
	
	static constexpr uint64_t VNX_TYPE_ID = 0xa5de458f1ce5539aull;
	
	node_type_e() {}
	
	node_type_e(const enum_t& _value) { value = _value; }
	node_type_e(const ::mmx::node_type_e& _other) { value = _other.value; }
	
	vnx::Hash64 get_type_hash() const;
	std::string get_type_name() const;
	const vnx::TypeCode* get_type_code() const;
	
	operator enum_t() const { return value; }
	node_type_e& operator=(const enum_t& _value) { value = _value; return *this; }
	node_type_e& operator=(const ::mmx::node_type_e& _other) { value = _other.value; return *this; }
	
	static std::shared_ptr<node_type_e> create();
	std::shared_ptr<node_type_e> clone() const;
	
	void read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code);
	void write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const;
	
	void read(std::istream& _in);
	void write(std::ostream& _out) const;
	
	void accept(vnx::Visitor& _visitor) const;
	
	vnx::bool_t is_valid() const;
	std::string to_string() const;
	std::string to_string_value() const;
	std::string to_string_value_full() const;
	
	void from_string(const std::string& str);
	void from_string_value(const std::string& name);
	
	vnx::Object to_object() const;
	void from_object(const vnx::Object& object);
	
	vnx::Variant get_field(const std::string& name) const;
	void set_field(const std::string& name, const vnx::Variant& value);
	
	friend std::ostream& operator<<(std::ostream& _out, const node_type_e& _value);
	friend std::istream& operator>>(std::istream& _in, node_type_e& _value);
	
	static const vnx::TypeCode* static_get_type_code();
	static std::shared_ptr<vnx::TypeCode> static_create_type_code();
	
};


} // namespace mmx


namespace vnx {

void read(TypeInput& in, ::mmx::node_type_e::enum_t& value, const TypeCode* type_code, const uint16_t* code); ///< \private

void write(TypeOutput& out, const ::mmx::node_type_e::enum_t& value, const TypeCode* type_code, const uint16_t* code); ///< \private

template<>
std::string to_string(const ::mmx::node_type_e& _value); ///< \private

template<>
std::string to_string_value(const ::mmx::node_type_e& _value); ///< \private

template<>
std::string to_string_value_full(const ::mmx::node_type_e& _value); ///< \private

template<>
std::string to_string(const ::mmx::node_type_e::enum_t& _value); ///< \private

template<>
std::string to_string_value(const ::mmx::node_type_e::enum_t& _value); ///< \private

template<>
std::string to_string_value_full(const ::mmx::node_type_e::enum_t& _value); ///< \private

template<>
struct is_equivalent<::mmx::node_type_e> {
	bool operator()(const uint16_t* code, const TypeCode* type_code);
};

} // vnx

#endif // INCLUDE_mmx_node_type_e_HXX_