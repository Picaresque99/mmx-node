
// AUTO GENERATED by vnxcppcodegen

#include <mmx/contract/package.hxx>
#include <mmx/contract/Token.hxx>
#include <mmx/ChainParams.hxx>
#include <mmx/Context.hxx>
#include <mmx/Contract.hxx>
#include <mmx/Contract_calc_cost.hxx>
#include <mmx/Contract_calc_cost_return.hxx>
#include <mmx/Contract_calc_hash.hxx>
#include <mmx/Contract_calc_hash_return.hxx>
#include <mmx/Contract_get_dependency.hxx>
#include <mmx/Contract_get_dependency_return.hxx>
#include <mmx/Contract_get_owner.hxx>
#include <mmx/Contract_get_owner_return.hxx>
#include <mmx/Contract_get_parties.hxx>
#include <mmx/Contract_get_parties_return.hxx>
#include <mmx/Contract_is_valid.hxx>
#include <mmx/Contract_is_valid_return.hxx>
#include <mmx/Contract_validate.hxx>
#include <mmx/Contract_validate_return.hxx>
#include <mmx/Operation.hxx>
#include <mmx/Solution.hxx>
#include <mmx/addr_t.hpp>
#include <mmx/contract/Token_calc_cost.hxx>
#include <mmx/contract/Token_calc_cost_return.hxx>
#include <mmx/contract/Token_calc_hash.hxx>
#include <mmx/contract/Token_calc_hash_return.hxx>
#include <mmx/contract/Token_get_dependency.hxx>
#include <mmx/contract/Token_get_dependency_return.hxx>
#include <mmx/contract/Token_get_owner.hxx>
#include <mmx/contract/Token_get_owner_return.hxx>
#include <mmx/contract/Token_get_parties.hxx>
#include <mmx/contract/Token_get_parties_return.hxx>
#include <mmx/contract/Token_is_valid.hxx>
#include <mmx/contract/Token_is_valid_return.hxx>
#include <mmx/contract/Token_transfer.hxx>
#include <mmx/contract/Token_transfer_return.hxx>
#include <mmx/contract/Token_validate.hxx>
#include <mmx/contract/Token_validate_return.hxx>
#include <mmx/hash_t.hpp>
#include <mmx/tx_out_t.hxx>
#include <mmx/ulong_fraction_t.hxx>

#include <vnx/vnx.h>


namespace mmx {
namespace contract {


const vnx::Hash64 Token::VNX_TYPE_HASH(0x2d8835d6429431b2ull);
const vnx::Hash64 Token::VNX_CODE_HASH(0x1735edd37a945a2bull);

vnx::Hash64 Token::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string Token::get_type_name() const {
	return "mmx.contract.Token";
}

const vnx::TypeCode* Token::get_type_code() const {
	return mmx::contract::vnx_native_type_code_Token;
}

std::shared_ptr<Token> Token::create() {
	return std::make_shared<Token>();
}

std::shared_ptr<vnx::Value> Token::clone() const {
	return std::make_shared<Token>(*this);
}

void Token::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void Token::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void Token::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = mmx::contract::vnx_native_type_code_Token;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, version);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, name);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, symbol);
	_visitor.type_field(_type_code->fields[3], 3); vnx::accept(_visitor, web_url);
	_visitor.type_field(_type_code->fields[4], 4); vnx::accept(_visitor, icon_url);
	_visitor.type_field(_type_code->fields[5], 5); vnx::accept(_visitor, decimals);
	_visitor.type_field(_type_code->fields[6], 6); vnx::accept(_visitor, owner);
	_visitor.type_field(_type_code->fields[7], 7); vnx::accept(_visitor, time_factor);
	_visitor.type_field(_type_code->fields[8], 8); vnx::accept(_visitor, stake_factors);
	_visitor.type_end(*_type_code);
}

void Token::write(std::ostream& _out) const {
	_out << "{\"__type\": \"mmx.contract.Token\"";
	_out << ", \"version\": "; vnx::write(_out, version);
	_out << ", \"name\": "; vnx::write(_out, name);
	_out << ", \"symbol\": "; vnx::write(_out, symbol);
	_out << ", \"web_url\": "; vnx::write(_out, web_url);
	_out << ", \"icon_url\": "; vnx::write(_out, icon_url);
	_out << ", \"decimals\": "; vnx::write(_out, decimals);
	_out << ", \"owner\": "; vnx::write(_out, owner);
	_out << ", \"time_factor\": "; vnx::write(_out, time_factor);
	_out << ", \"stake_factors\": "; vnx::write(_out, stake_factors);
	_out << "}";
}

void Token::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object Token::to_object() const {
	vnx::Object _object;
	_object["__type"] = "mmx.contract.Token";
	_object["version"] = version;
	_object["name"] = name;
	_object["symbol"] = symbol;
	_object["web_url"] = web_url;
	_object["icon_url"] = icon_url;
	_object["decimals"] = decimals;
	_object["owner"] = owner;
	_object["time_factor"] = time_factor;
	_object["stake_factors"] = stake_factors;
	return _object;
}

void Token::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "decimals") {
			_entry.second.to(decimals);
		} else if(_entry.first == "icon_url") {
			_entry.second.to(icon_url);
		} else if(_entry.first == "name") {
			_entry.second.to(name);
		} else if(_entry.first == "owner") {
			_entry.second.to(owner);
		} else if(_entry.first == "stake_factors") {
			_entry.second.to(stake_factors);
		} else if(_entry.first == "symbol") {
			_entry.second.to(symbol);
		} else if(_entry.first == "time_factor") {
			_entry.second.to(time_factor);
		} else if(_entry.first == "version") {
			_entry.second.to(version);
		} else if(_entry.first == "web_url") {
			_entry.second.to(web_url);
		}
	}
}

vnx::Variant Token::get_field(const std::string& _name) const {
	if(_name == "version") {
		return vnx::Variant(version);
	}
	if(_name == "name") {
		return vnx::Variant(name);
	}
	if(_name == "symbol") {
		return vnx::Variant(symbol);
	}
	if(_name == "web_url") {
		return vnx::Variant(web_url);
	}
	if(_name == "icon_url") {
		return vnx::Variant(icon_url);
	}
	if(_name == "decimals") {
		return vnx::Variant(decimals);
	}
	if(_name == "owner") {
		return vnx::Variant(owner);
	}
	if(_name == "time_factor") {
		return vnx::Variant(time_factor);
	}
	if(_name == "stake_factors") {
		return vnx::Variant(stake_factors);
	}
	return vnx::Variant();
}

void Token::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "version") {
		_value.to(version);
	} else if(_name == "name") {
		_value.to(name);
	} else if(_name == "symbol") {
		_value.to(symbol);
	} else if(_name == "web_url") {
		_value.to(web_url);
	} else if(_name == "icon_url") {
		_value.to(icon_url);
	} else if(_name == "decimals") {
		_value.to(decimals);
	} else if(_name == "owner") {
		_value.to(owner);
	} else if(_name == "time_factor") {
		_value.to(time_factor);
	} else if(_name == "stake_factors") {
		_value.to(stake_factors);
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const Token& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, Token& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* Token::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> Token::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "mmx.contract.Token";
	type_code->type_hash = vnx::Hash64(0x2d8835d6429431b2ull);
	type_code->code_hash = vnx::Hash64(0x1735edd37a945a2bull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->native_size = sizeof(::mmx::contract::Token);
	type_code->parents.resize(1);
	type_code->parents[0] = ::mmx::Contract::static_get_type_code();
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<Token>(); };
	type_code->depends.resize(1);
	type_code->depends[0] = ::mmx::ulong_fraction_t::static_get_type_code();
	type_code->methods.resize(15);
	type_code->methods[0] = ::mmx::Contract_calc_cost::static_get_type_code();
	type_code->methods[1] = ::mmx::Contract_calc_hash::static_get_type_code();
	type_code->methods[2] = ::mmx::Contract_get_dependency::static_get_type_code();
	type_code->methods[3] = ::mmx::Contract_get_owner::static_get_type_code();
	type_code->methods[4] = ::mmx::Contract_get_parties::static_get_type_code();
	type_code->methods[5] = ::mmx::Contract_is_valid::static_get_type_code();
	type_code->methods[6] = ::mmx::Contract_validate::static_get_type_code();
	type_code->methods[7] = ::mmx::contract::Token_calc_cost::static_get_type_code();
	type_code->methods[8] = ::mmx::contract::Token_calc_hash::static_get_type_code();
	type_code->methods[9] = ::mmx::contract::Token_get_dependency::static_get_type_code();
	type_code->methods[10] = ::mmx::contract::Token_get_owner::static_get_type_code();
	type_code->methods[11] = ::mmx::contract::Token_get_parties::static_get_type_code();
	type_code->methods[12] = ::mmx::contract::Token_is_valid::static_get_type_code();
	type_code->methods[13] = ::mmx::contract::Token_transfer::static_get_type_code();
	type_code->methods[14] = ::mmx::contract::Token_validate::static_get_type_code();
	type_code->fields.resize(9);
	{
		auto& field = type_code->fields[0];
		field.data_size = 4;
		field.name = "version";
		field.code = {3};
	}
	{
		auto& field = type_code->fields[1];
		field.is_extended = true;
		field.name = "name";
		field.code = {32};
	}
	{
		auto& field = type_code->fields[2];
		field.is_extended = true;
		field.name = "symbol";
		field.code = {32};
	}
	{
		auto& field = type_code->fields[3];
		field.is_extended = true;
		field.name = "web_url";
		field.code = {32};
	}
	{
		auto& field = type_code->fields[4];
		field.is_extended = true;
		field.name = "icon_url";
		field.code = {32};
	}
	{
		auto& field = type_code->fields[5];
		field.data_size = 4;
		field.name = "decimals";
		field.code = {3};
	}
	{
		auto& field = type_code->fields[6];
		field.is_extended = true;
		field.name = "owner";
		field.code = {33, 11, 32, 1};
	}
	{
		auto& field = type_code->fields[7];
		field.is_extended = true;
		field.name = "time_factor";
		field.code = {33, 19, 0};
	}
	{
		auto& field = type_code->fields[8];
		field.is_extended = true;
		field.name = "stake_factors";
		field.code = {13, 5, 11, 32, 1, 19, 0};
	}
	type_code->build();
	return type_code;
}

std::shared_ptr<vnx::Value> Token::vnx_call_switch(std::shared_ptr<const vnx::Value> _method) {
	switch(_method->get_type_hash()) {
		case 0xb23d047adf8b2612ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Contract_calc_cost>(_method);
			auto _return_value = ::mmx::Contract_calc_cost_return::create();
			_return_value->_ret_0 = calc_cost(_args->params);
			return _return_value;
		}
		case 0x622fcf1cba1952edull: {
			auto _args = std::static_pointer_cast<const ::mmx::Contract_calc_hash>(_method);
			auto _return_value = ::mmx::Contract_calc_hash_return::create();
			_return_value->_ret_0 = calc_hash();
			return _return_value;
		}
		case 0x989dd3da956ebbd0ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Contract_get_dependency>(_method);
			auto _return_value = ::mmx::Contract_get_dependency_return::create();
			_return_value->_ret_0 = get_dependency();
			return _return_value;
		}
		case 0x8fe2c64fdc8f0680ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Contract_get_owner>(_method);
			auto _return_value = ::mmx::Contract_get_owner_return::create();
			_return_value->_ret_0 = get_owner();
			return _return_value;
		}
		case 0x6f7a46e940a18a57ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Contract_get_parties>(_method);
			auto _return_value = ::mmx::Contract_get_parties_return::create();
			_return_value->_ret_0 = get_parties();
			return _return_value;
		}
		case 0xe3adf9b29a723217ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Contract_is_valid>(_method);
			auto _return_value = ::mmx::Contract_is_valid_return::create();
			_return_value->_ret_0 = is_valid();
			return _return_value;
		}
		case 0xc2126a44901c8d52ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Contract_validate>(_method);
			auto _return_value = ::mmx::Contract_validate_return::create();
			_return_value->_ret_0 = validate(_args->operation, _args->context);
			return _return_value;
		}
		case 0xbf384ca6ba587f13ull: {
			auto _args = std::static_pointer_cast<const ::mmx::contract::Token_calc_cost>(_method);
			auto _return_value = ::mmx::contract::Token_calc_cost_return::create();
			_return_value->_ret_0 = calc_cost(_args->params);
			return _return_value;
		}
		case 0x6f2a87c0dfca0becull: {
			auto _args = std::static_pointer_cast<const ::mmx::contract::Token_calc_hash>(_method);
			auto _return_value = ::mmx::contract::Token_calc_hash_return::create();
			_return_value->_ret_0 = calc_hash();
			return _return_value;
		}
		case 0xd6b8b4d0f1a86d08ull: {
			auto _args = std::static_pointer_cast<const ::mmx::contract::Token_get_dependency>(_method);
			auto _return_value = ::mmx::contract::Token_get_dependency_return::create();
			_return_value->_ret_0 = get_dependency();
			return _return_value;
		}
		case 0x82e78e93b95c5f81ull: {
			auto _args = std::static_pointer_cast<const ::mmx::contract::Token_get_owner>(_method);
			auto _return_value = ::mmx::contract::Token_get_owner_return::create();
			_return_value->_ret_0 = get_owner();
			return _return_value;
		}
		case 0x6631733b12e41c68ull: {
			auto _args = std::static_pointer_cast<const ::mmx::contract::Token_get_parties>(_method);
			auto _return_value = ::mmx::contract::Token_get_parties_return::create();
			_return_value->_ret_0 = get_parties();
			return _return_value;
		}
		case 0xe2f8f3a19e55d9baull: {
			auto _args = std::static_pointer_cast<const ::mmx::contract::Token_is_valid>(_method);
			auto _return_value = ::mmx::contract::Token_is_valid_return::create();
			_return_value->_ret_0 = is_valid();
			return _return_value;
		}
		case 0xd54ee6345b881a52ull: {
			auto _args = std::static_pointer_cast<const ::mmx::contract::Token_transfer>(_method);
			auto _return_value = ::mmx::contract::Token_transfer_return::create();
			transfer(_args->new_owner);
			return _return_value;
		}
		case 0xc3476057943b66ffull: {
			auto _args = std::static_pointer_cast<const ::mmx::contract::Token_validate>(_method);
			auto _return_value = ::mmx::contract::Token_validate_return::create();
			_return_value->_ret_0 = validate(_args->operation, _args->context);
			return _return_value;
		}
	}
	return nullptr;
}


} // namespace mmx
} // namespace contract


namespace vnx {

void read(TypeInput& in, ::mmx::contract::Token& value, const TypeCode* type_code, const uint16_t* code) {
	if(code) {
		switch(code[0]) {
			case CODE_OBJECT:
			case CODE_ALT_OBJECT: {
				Object tmp;
				vnx::read(in, tmp, type_code, code);
				value.from_object(tmp);
				return;
			}
			case CODE_DYNAMIC:
			case CODE_ALT_DYNAMIC:
				vnx::read_dynamic(in, value);
				return;
		}
	}
	if(!type_code) {
		vnx::skip(in, type_code, code);
		return;
	}
	if(code) {
		switch(code[0]) {
			case CODE_STRUCT: type_code = type_code->depends[code[1]]; break;
			case CODE_ALT_STRUCT: type_code = type_code->depends[vnx::flip_bytes(code[1])]; break;
			default: {
				vnx::skip(in, type_code, code);
				return;
			}
		}
	}
	const char* const _buf = in.read(type_code->total_field_size);
	if(type_code->is_matched) {
		if(const auto* const _field = type_code->field_map[0]) {
			vnx::read_value(_buf + _field->offset, value.version, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[5]) {
			vnx::read_value(_buf + _field->offset, value.decimals, _field->code.data());
		}
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 1: vnx::read(in, value.name, type_code, _field->code.data()); break;
			case 2: vnx::read(in, value.symbol, type_code, _field->code.data()); break;
			case 3: vnx::read(in, value.web_url, type_code, _field->code.data()); break;
			case 4: vnx::read(in, value.icon_url, type_code, _field->code.data()); break;
			case 6: vnx::read(in, value.owner, type_code, _field->code.data()); break;
			case 7: vnx::read(in, value.time_factor, type_code, _field->code.data()); break;
			case 8: vnx::read(in, value.stake_factors, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::mmx::contract::Token& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = mmx::contract::vnx_native_type_code_Token;
		out.write_type_code(type_code);
		vnx::write_class_header<::mmx::contract::Token>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(8);
	vnx::write_value(_buf + 0, value.version);
	vnx::write_value(_buf + 4, value.decimals);
	vnx::write(out, value.name, type_code, type_code->fields[1].code.data());
	vnx::write(out, value.symbol, type_code, type_code->fields[2].code.data());
	vnx::write(out, value.web_url, type_code, type_code->fields[3].code.data());
	vnx::write(out, value.icon_url, type_code, type_code->fields[4].code.data());
	vnx::write(out, value.owner, type_code, type_code->fields[6].code.data());
	vnx::write(out, value.time_factor, type_code, type_code->fields[7].code.data());
	vnx::write(out, value.stake_factors, type_code, type_code->fields[8].code.data());
}

void read(std::istream& in, ::mmx::contract::Token& value) {
	value.read(in);
}

void write(std::ostream& out, const ::mmx::contract::Token& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::mmx::contract::Token& value) {
	value.accept(visitor);
}

} // vnx
