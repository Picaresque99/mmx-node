
// AUTO GENERATED by vnxcppcodegen

#include <mmx/contract/package.hxx>
#include <mmx/contract/PlotNFT.hxx>
#include <mmx/ChainParams.hxx>
#include <mmx/Contract_calc_cost.hxx>
#include <mmx/Contract_calc_cost_return.hxx>
#include <mmx/Contract_calc_hash.hxx>
#include <mmx/Contract_calc_hash_return.hxx>
#include <mmx/Contract_get_dependency.hxx>
#include <mmx/Contract_get_dependency_return.hxx>
#include <mmx/Contract_get_owner.hxx>
#include <mmx/Contract_get_owner_return.hxx>
#include <mmx/Contract_is_locked.hxx>
#include <mmx/Contract_is_locked_return.hxx>
#include <mmx/Contract_is_valid.hxx>
#include <mmx/Contract_is_valid_return.hxx>
#include <mmx/Contract_transfer.hxx>
#include <mmx/Contract_transfer_return.hxx>
#include <mmx/Contract_validate.hxx>
#include <mmx/Contract_validate_return.hxx>
#include <mmx/addr_t.hpp>
#include <mmx/contract/MutableRelay.hxx>
#include <mmx/contract/MutableRelay_calc_cost.hxx>
#include <mmx/contract/MutableRelay_calc_cost_return.hxx>
#include <mmx/contract/MutableRelay_calc_hash.hxx>
#include <mmx/contract/MutableRelay_calc_hash_return.hxx>
#include <mmx/contract/MutableRelay_get_dependency.hxx>
#include <mmx/contract/MutableRelay_get_dependency_return.hxx>
#include <mmx/contract/MutableRelay_get_owner.hxx>
#include <mmx/contract/MutableRelay_get_owner_return.hxx>
#include <mmx/contract/MutableRelay_is_locked.hxx>
#include <mmx/contract/MutableRelay_is_locked_return.hxx>
#include <mmx/contract/MutableRelay_is_valid.hxx>
#include <mmx/contract/MutableRelay_is_valid_return.hxx>
#include <mmx/contract/MutableRelay_lock.hxx>
#include <mmx/contract/MutableRelay_lock_return.hxx>
#include <mmx/contract/MutableRelay_transfer.hxx>
#include <mmx/contract/MutableRelay_transfer_return.hxx>
#include <mmx/contract/MutableRelay_unlock.hxx>
#include <mmx/contract/MutableRelay_unlock_return.hxx>
#include <mmx/contract/MutableRelay_validate.hxx>
#include <mmx/contract/MutableRelay_validate_return.hxx>
#include <mmx/contract/PlotNFT_calc_cost.hxx>
#include <mmx/contract/PlotNFT_calc_cost_return.hxx>
#include <mmx/contract/PlotNFT_calc_hash.hxx>
#include <mmx/contract/PlotNFT_calc_hash_return.hxx>
#include <mmx/contract/PlotNFT_is_valid.hxx>
#include <mmx/contract/PlotNFT_is_valid_return.hxx>
#include <mmx/contract/PlotNFT_lock.hxx>
#include <mmx/contract/PlotNFT_lock_return.hxx>
#include <mmx/contract/PlotNFT_lock_pool.hxx>
#include <mmx/contract/PlotNFT_lock_pool_return.hxx>
#include <mmx/hash_t.hpp>

#include <vnx/vnx.h>


namespace mmx {
namespace contract {

const uint32_t PlotNFT::MAX_UNLOCK_DELAY;

const vnx::Hash64 PlotNFT::VNX_TYPE_HASH(0x7705f4da286543dull);
const vnx::Hash64 PlotNFT::VNX_CODE_HASH(0x182490bd3ef9b843ull);

vnx::Hash64 PlotNFT::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string PlotNFT::get_type_name() const {
	return "mmx.contract.PlotNFT";
}

const vnx::TypeCode* PlotNFT::get_type_code() const {
	return mmx::contract::vnx_native_type_code_PlotNFT;
}

std::shared_ptr<PlotNFT> PlotNFT::create() {
	return std::make_shared<PlotNFT>();
}

std::shared_ptr<vnx::Value> PlotNFT::clone() const {
	return std::make_shared<PlotNFT>(*this);
}

void PlotNFT::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void PlotNFT::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void PlotNFT::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = mmx::contract::vnx_native_type_code_PlotNFT;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, version);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, owner);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, target);
	_visitor.type_field(_type_code->fields[3], 3); vnx::accept(_visitor, unlock_height);
	_visitor.type_field(_type_code->fields[4], 4); vnx::accept(_visitor, unlock_delay);
	_visitor.type_field(_type_code->fields[5], 5); vnx::accept(_visitor, name);
	_visitor.type_field(_type_code->fields[6], 6); vnx::accept(_visitor, server_url);
	_visitor.type_end(*_type_code);
}

void PlotNFT::write(std::ostream& _out) const {
	_out << "{\"__type\": \"mmx.contract.PlotNFT\"";
	_out << ", \"version\": "; vnx::write(_out, version);
	_out << ", \"owner\": "; vnx::write(_out, owner);
	_out << ", \"target\": "; vnx::write(_out, target);
	_out << ", \"unlock_height\": "; vnx::write(_out, unlock_height);
	_out << ", \"unlock_delay\": "; vnx::write(_out, unlock_delay);
	_out << ", \"name\": "; vnx::write(_out, name);
	_out << ", \"server_url\": "; vnx::write(_out, server_url);
	_out << "}";
}

void PlotNFT::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object PlotNFT::to_object() const {
	vnx::Object _object;
	_object["__type"] = "mmx.contract.PlotNFT";
	_object["version"] = version;
	_object["owner"] = owner;
	_object["target"] = target;
	_object["unlock_height"] = unlock_height;
	_object["unlock_delay"] = unlock_delay;
	_object["name"] = name;
	_object["server_url"] = server_url;
	return _object;
}

void PlotNFT::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "name") {
			_entry.second.to(name);
		} else if(_entry.first == "owner") {
			_entry.second.to(owner);
		} else if(_entry.first == "server_url") {
			_entry.second.to(server_url);
		} else if(_entry.first == "target") {
			_entry.second.to(target);
		} else if(_entry.first == "unlock_delay") {
			_entry.second.to(unlock_delay);
		} else if(_entry.first == "unlock_height") {
			_entry.second.to(unlock_height);
		} else if(_entry.first == "version") {
			_entry.second.to(version);
		}
	}
}

vnx::Variant PlotNFT::get_field(const std::string& _name) const {
	if(_name == "version") {
		return vnx::Variant(version);
	}
	if(_name == "owner") {
		return vnx::Variant(owner);
	}
	if(_name == "target") {
		return vnx::Variant(target);
	}
	if(_name == "unlock_height") {
		return vnx::Variant(unlock_height);
	}
	if(_name == "unlock_delay") {
		return vnx::Variant(unlock_delay);
	}
	if(_name == "name") {
		return vnx::Variant(name);
	}
	if(_name == "server_url") {
		return vnx::Variant(server_url);
	}
	return vnx::Variant();
}

void PlotNFT::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "version") {
		_value.to(version);
	} else if(_name == "owner") {
		_value.to(owner);
	} else if(_name == "target") {
		_value.to(target);
	} else if(_name == "unlock_height") {
		_value.to(unlock_height);
	} else if(_name == "unlock_delay") {
		_value.to(unlock_delay);
	} else if(_name == "name") {
		_value.to(name);
	} else if(_name == "server_url") {
		_value.to(server_url);
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const PlotNFT& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, PlotNFT& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* PlotNFT::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> PlotNFT::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "mmx.contract.PlotNFT";
	type_code->type_hash = vnx::Hash64(0x7705f4da286543dull);
	type_code->code_hash = vnx::Hash64(0x182490bd3ef9b843ull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->native_size = sizeof(::mmx::contract::PlotNFT);
	type_code->parents.resize(2);
	type_code->parents[0] = ::mmx::contract::MutableRelay::static_get_type_code();
	type_code->parents[1] = ::mmx::Contract::static_get_type_code();
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<PlotNFT>(); };
	type_code->methods.resize(23);
	type_code->methods[0] = ::mmx::Contract_calc_cost::static_get_type_code();
	type_code->methods[1] = ::mmx::Contract_calc_hash::static_get_type_code();
	type_code->methods[2] = ::mmx::Contract_get_dependency::static_get_type_code();
	type_code->methods[3] = ::mmx::Contract_get_owner::static_get_type_code();
	type_code->methods[4] = ::mmx::Contract_is_locked::static_get_type_code();
	type_code->methods[5] = ::mmx::Contract_is_valid::static_get_type_code();
	type_code->methods[6] = ::mmx::Contract_transfer::static_get_type_code();
	type_code->methods[7] = ::mmx::Contract_validate::static_get_type_code();
	type_code->methods[8] = ::mmx::contract::MutableRelay_calc_cost::static_get_type_code();
	type_code->methods[9] = ::mmx::contract::MutableRelay_calc_hash::static_get_type_code();
	type_code->methods[10] = ::mmx::contract::MutableRelay_get_dependency::static_get_type_code();
	type_code->methods[11] = ::mmx::contract::MutableRelay_get_owner::static_get_type_code();
	type_code->methods[12] = ::mmx::contract::MutableRelay_is_locked::static_get_type_code();
	type_code->methods[13] = ::mmx::contract::MutableRelay_is_valid::static_get_type_code();
	type_code->methods[14] = ::mmx::contract::MutableRelay_lock::static_get_type_code();
	type_code->methods[15] = ::mmx::contract::MutableRelay_transfer::static_get_type_code();
	type_code->methods[16] = ::mmx::contract::MutableRelay_unlock::static_get_type_code();
	type_code->methods[17] = ::mmx::contract::MutableRelay_validate::static_get_type_code();
	type_code->methods[18] = ::mmx::contract::PlotNFT_calc_cost::static_get_type_code();
	type_code->methods[19] = ::mmx::contract::PlotNFT_calc_hash::static_get_type_code();
	type_code->methods[20] = ::mmx::contract::PlotNFT_is_valid::static_get_type_code();
	type_code->methods[21] = ::mmx::contract::PlotNFT_lock::static_get_type_code();
	type_code->methods[22] = ::mmx::contract::PlotNFT_lock_pool::static_get_type_code();
	type_code->fields.resize(7);
	{
		auto& field = type_code->fields[0];
		field.data_size = 4;
		field.name = "version";
		field.code = {3};
	}
	{
		auto& field = type_code->fields[1];
		field.is_extended = true;
		field.name = "owner";
		field.code = {11, 32, 1};
	}
	{
		auto& field = type_code->fields[2];
		field.is_extended = true;
		field.name = "target";
		field.code = {33, 11, 32, 1};
	}
	{
		auto& field = type_code->fields[3];
		field.is_extended = true;
		field.name = "unlock_height";
		field.code = {33, 3};
	}
	{
		auto& field = type_code->fields[4];
		field.data_size = 4;
		field.name = "unlock_delay";
		field.value = vnx::to_string(100);
		field.code = {3};
	}
	{
		auto& field = type_code->fields[5];
		field.is_extended = true;
		field.name = "name";
		field.code = {32};
	}
	{
		auto& field = type_code->fields[6];
		field.is_extended = true;
		field.name = "server_url";
		field.code = {33, 32};
	}
	type_code->build();
	return type_code;
}

std::shared_ptr<vnx::Value> PlotNFT::vnx_call_switch(std::shared_ptr<const vnx::Value> _method) {
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
			_return_value->_ret_0 = calc_hash(_args->full_hash);
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
		case 0x9b7981d03b3aeab6ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Contract_is_locked>(_method);
			auto _return_value = ::mmx::Contract_is_locked_return::create();
			_return_value->_ret_0 = is_locked(_args->context);
			return _return_value;
		}
		case 0xe3adf9b29a723217ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Contract_is_valid>(_method);
			auto _return_value = ::mmx::Contract_is_valid_return::create();
			_return_value->_ret_0 = is_valid();
			return _return_value;
		}
		case 0xd41bec275faff1ffull: {
			auto _args = std::static_pointer_cast<const ::mmx::Contract_transfer>(_method);
			auto _return_value = ::mmx::Contract_transfer_return::create();
			transfer(_args->new_owner);
			return _return_value;
		}
		case 0xc2126a44901c8d52ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Contract_validate>(_method);
			auto _return_value = ::mmx::Contract_validate_return::create();
			_return_value->_ret_0 = validate(_args->operation, _args->context);
			return _return_value;
		}
		case 0x50f6cfe41aaf350bull: {
			auto _args = std::static_pointer_cast<const ::mmx::contract::MutableRelay_calc_cost>(_method);
			auto _return_value = ::mmx::contract::MutableRelay_calc_cost_return::create();
			_return_value->_ret_0 = calc_cost(_args->params);
			return _return_value;
		}
		case 0x80e404827f3d41f4ull: {
			auto _args = std::static_pointer_cast<const ::mmx::contract::MutableRelay_calc_hash>(_method);
			auto _return_value = ::mmx::contract::MutableRelay_calc_hash_return::create();
			_return_value->_ret_0 = calc_hash(_args->full_hash);
			return _return_value;
		}
		case 0xd8207bd6437f474cull: {
			auto _args = std::static_pointer_cast<const ::mmx::contract::MutableRelay_get_dependency>(_method);
			auto _return_value = ::mmx::contract::MutableRelay_get_dependency_return::create();
			_return_value->_ret_0 = get_dependency();
			return _return_value;
		}
		case 0x6d290dd119ab1599ull: {
			auto _args = std::static_pointer_cast<const ::mmx::contract::MutableRelay_get_owner>(_method);
			auto _return_value = ::mmx::contract::MutableRelay_get_owner_return::create();
			_return_value->_ret_0 = get_owner();
			return _return_value;
		}
		case 0x79b24a4efe1ef9afull: {
			auto _args = std::static_pointer_cast<const ::mmx::contract::MutableRelay_is_locked>(_method);
			auto _return_value = ::mmx::contract::MutableRelay_is_locked_return::create();
			_return_value->_ret_0 = is_locked(_args->context);
			return _return_value;
		}
		case 0x32aee56f284c5167ull: {
			auto _args = std::static_pointer_cast<const ::mmx::contract::MutableRelay_is_valid>(_method);
			auto _return_value = ::mmx::contract::MutableRelay_is_valid_return::create();
			_return_value->_ret_0 = is_valid();
			return _return_value;
		}
		case 0xff880885af6179ecull: {
			auto _args = std::static_pointer_cast<const ::mmx::contract::MutableRelay_lock>(_method);
			auto _return_value = ::mmx::contract::MutableRelay_lock_return::create();
			lock(_args->new_target, _args->new_unlock_delay);
			return _return_value;
		}
		case 0x518f0faed91928full: {
			auto _args = std::static_pointer_cast<const ::mmx::contract::MutableRelay_transfer>(_method);
			auto _return_value = ::mmx::contract::MutableRelay_transfer_return::create();
			transfer(_args->new_owner);
			return _return_value;
		}
		case 0x7253750bf00d6f4eull: {
			auto _args = std::static_pointer_cast<const ::mmx::contract::MutableRelay_unlock>(_method);
			auto _return_value = ::mmx::contract::MutableRelay_unlock_return::create();
			unlock(_args->height);
			return _return_value;
		}
		case 0x131176992222ee22ull: {
			auto _args = std::static_pointer_cast<const ::mmx::contract::MutableRelay_validate>(_method);
			auto _return_value = ::mmx::contract::MutableRelay_validate_return::create();
			_return_value->_ret_0 = validate(_args->operation, _args->context);
			return _return_value;
		}
		case 0xb8ed405cc3b49949ull: {
			auto _args = std::static_pointer_cast<const ::mmx::contract::PlotNFT_calc_cost>(_method);
			auto _return_value = ::mmx::contract::PlotNFT_calc_cost_return::create();
			_return_value->_ret_0 = calc_cost(_args->params);
			return _return_value;
		}
		case 0x68ff8b3aa626edb6ull: {
			auto _args = std::static_pointer_cast<const ::mmx::contract::PlotNFT_calc_hash>(_method);
			auto _return_value = ::mmx::contract::PlotNFT_calc_hash_return::create();
			_return_value->_ret_0 = calc_hash(_args->full_hash);
			return _return_value;
		}
		case 0xee4e1a5d6185e72bull: {
			auto _args = std::static_pointer_cast<const ::mmx::contract::PlotNFT_is_valid>(_method);
			auto _return_value = ::mmx::contract::PlotNFT_is_valid_return::create();
			_return_value->_ret_0 = is_valid();
			return _return_value;
		}
		case 0x760d22b52e9389a2ull: {
			auto _args = std::static_pointer_cast<const ::mmx::contract::PlotNFT_lock>(_method);
			auto _return_value = ::mmx::contract::PlotNFT_lock_return::create();
			lock(_args->new_target, _args->new_unlock_delay);
			return _return_value;
		}
		case 0xb607c281c752c61aull: {
			auto _args = std::static_pointer_cast<const ::mmx::contract::PlotNFT_lock_pool>(_method);
			auto _return_value = ::mmx::contract::PlotNFT_lock_pool_return::create();
			lock_pool(_args->new_target, _args->new_unlock_delay, _args->new_server_url);
			return _return_value;
		}
	}
	return nullptr;
}


} // namespace mmx
} // namespace contract


namespace vnx {

void read(TypeInput& in, ::mmx::contract::PlotNFT& value, const TypeCode* type_code, const uint16_t* code) {
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
		if(const auto* const _field = type_code->field_map[4]) {
			vnx::read_value(_buf + _field->offset, value.unlock_delay, _field->code.data());
		}
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 1: vnx::read(in, value.owner, type_code, _field->code.data()); break;
			case 2: vnx::read(in, value.target, type_code, _field->code.data()); break;
			case 3: vnx::read(in, value.unlock_height, type_code, _field->code.data()); break;
			case 5: vnx::read(in, value.name, type_code, _field->code.data()); break;
			case 6: vnx::read(in, value.server_url, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::mmx::contract::PlotNFT& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = mmx::contract::vnx_native_type_code_PlotNFT;
		out.write_type_code(type_code);
		vnx::write_class_header<::mmx::contract::PlotNFT>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(8);
	vnx::write_value(_buf + 0, value.version);
	vnx::write_value(_buf + 4, value.unlock_delay);
	vnx::write(out, value.owner, type_code, type_code->fields[1].code.data());
	vnx::write(out, value.target, type_code, type_code->fields[2].code.data());
	vnx::write(out, value.unlock_height, type_code, type_code->fields[3].code.data());
	vnx::write(out, value.name, type_code, type_code->fields[5].code.data());
	vnx::write(out, value.server_url, type_code, type_code->fields[6].code.data());
}

void read(std::istream& in, ::mmx::contract::PlotNFT& value) {
	value.read(in);
}

void write(std::ostream& out, const ::mmx::contract::PlotNFT& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::mmx::contract::PlotNFT& value) {
	value.accept(visitor);
}

} // vnx
