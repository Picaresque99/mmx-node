
// AUTO GENERATED by vnxcppcodegen

#include <mmx/operation/package.hxx>
#include <mmx/operation/Mutate.hxx>
#include <mmx/ChainParams.hxx>
#include <mmx/Operation.hxx>
#include <mmx/Operation_calc_cost.hxx>
#include <mmx/Operation_calc_cost_return.hxx>
#include <mmx/Operation_calc_hash.hxx>
#include <mmx/Operation_calc_hash_return.hxx>
#include <mmx/Operation_is_valid.hxx>
#include <mmx/Operation_is_valid_return.hxx>
#include <mmx/hash_t.hpp>
#include <mmx/operation/Mutate_calc_cost.hxx>
#include <mmx/operation/Mutate_calc_cost_return.hxx>
#include <mmx/operation/Mutate_calc_hash.hxx>
#include <mmx/operation/Mutate_calc_hash_return.hxx>
#include <vnx/Object.hpp>

#include <vnx/vnx.h>


namespace mmx {
namespace operation {


const vnx::Hash64 Mutate::VNX_TYPE_HASH(0x174cf0ec53db63efull);
const vnx::Hash64 Mutate::VNX_CODE_HASH(0x23c98cff500c5353ull);

vnx::Hash64 Mutate::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string Mutate::get_type_name() const {
	return "mmx.operation.Mutate";
}

const vnx::TypeCode* Mutate::get_type_code() const {
	return mmx::operation::vnx_native_type_code_Mutate;
}

std::shared_ptr<Mutate> Mutate::create() {
	return std::make_shared<Mutate>();
}

std::shared_ptr<vnx::Value> Mutate::clone() const {
	return std::make_shared<Mutate>(*this);
}

void Mutate::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void Mutate::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void Mutate::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = mmx::operation::vnx_native_type_code_Mutate;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, version);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, address);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, solution);
	_visitor.type_field(_type_code->fields[3], 3); vnx::accept(_visitor, method);
	_visitor.type_end(*_type_code);
}

void Mutate::write(std::ostream& _out) const {
	_out << "{\"__type\": \"mmx.operation.Mutate\"";
	_out << ", \"version\": "; vnx::write(_out, version);
	_out << ", \"address\": "; vnx::write(_out, address);
	_out << ", \"solution\": "; vnx::write(_out, solution);
	_out << ", \"method\": "; vnx::write(_out, method);
	_out << "}";
}

void Mutate::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object Mutate::to_object() const {
	vnx::Object _object;
	_object["__type"] = "mmx.operation.Mutate";
	_object["version"] = version;
	_object["address"] = address;
	_object["solution"] = solution;
	_object["method"] = method;
	return _object;
}

void Mutate::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "address") {
			_entry.second.to(address);
		} else if(_entry.first == "method") {
			_entry.second.to(method);
		} else if(_entry.first == "solution") {
			_entry.second.to(solution);
		} else if(_entry.first == "version") {
			_entry.second.to(version);
		}
	}
}

vnx::Variant Mutate::get_field(const std::string& _name) const {
	if(_name == "version") {
		return vnx::Variant(version);
	}
	if(_name == "address") {
		return vnx::Variant(address);
	}
	if(_name == "solution") {
		return vnx::Variant(solution);
	}
	if(_name == "method") {
		return vnx::Variant(method);
	}
	return vnx::Variant();
}

void Mutate::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "version") {
		_value.to(version);
	} else if(_name == "address") {
		_value.to(address);
	} else if(_name == "solution") {
		_value.to(solution);
	} else if(_name == "method") {
		_value.to(method);
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const Mutate& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, Mutate& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* Mutate::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> Mutate::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "mmx.operation.Mutate";
	type_code->type_hash = vnx::Hash64(0x174cf0ec53db63efull);
	type_code->code_hash = vnx::Hash64(0x23c98cff500c5353ull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->native_size = sizeof(::mmx::operation::Mutate);
	type_code->parents.resize(1);
	type_code->parents[0] = ::mmx::Operation::static_get_type_code();
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<Mutate>(); };
	type_code->methods.resize(5);
	type_code->methods[0] = ::mmx::Operation_calc_cost::static_get_type_code();
	type_code->methods[1] = ::mmx::Operation_calc_hash::static_get_type_code();
	type_code->methods[2] = ::mmx::Operation_is_valid::static_get_type_code();
	type_code->methods[3] = ::mmx::operation::Mutate_calc_cost::static_get_type_code();
	type_code->methods[4] = ::mmx::operation::Mutate_calc_hash::static_get_type_code();
	type_code->fields.resize(4);
	{
		auto& field = type_code->fields[0];
		field.data_size = 4;
		field.name = "version";
		field.code = {3};
	}
	{
		auto& field = type_code->fields[1];
		field.is_extended = true;
		field.name = "address";
		field.code = {11, 32, 1};
	}
	{
		auto& field = type_code->fields[2];
		field.is_extended = true;
		field.name = "solution";
		field.code = {16};
	}
	{
		auto& field = type_code->fields[3];
		field.is_extended = true;
		field.name = "method";
		field.code = {24};
	}
	type_code->build();
	return type_code;
}

std::shared_ptr<vnx::Value> Mutate::vnx_call_switch(std::shared_ptr<const vnx::Value> _method) {
	switch(_method->get_type_hash()) {
		case 0x5907595c31b44526ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Operation_calc_cost>(_method);
			auto _return_value = ::mmx::Operation_calc_cost_return::create();
			_return_value->_ret_0 = calc_cost(_args->params);
			return _return_value;
		}
		case 0x8915923a542631d9ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Operation_calc_hash>(_method);
			auto _return_value = ::mmx::Operation_calc_hash_return::create();
			_return_value->_ret_0 = calc_hash(_args->full_hash);
			return _return_value;
		}
		case 0x3b2ec6e0a968cf51ull: {
			auto _args = std::static_pointer_cast<const ::mmx::Operation_is_valid>(_method);
			auto _return_value = ::mmx::Operation_is_valid_return::create();
			_return_value->_ret_0 = is_valid();
			return _return_value;
		}
		case 0xa7f607314b586b09ull: {
			auto _args = std::static_pointer_cast<const ::mmx::operation::Mutate_calc_cost>(_method);
			auto _return_value = ::mmx::operation::Mutate_calc_cost_return::create();
			_return_value->_ret_0 = calc_cost(_args->params);
			return _return_value;
		}
		case 0x77e4cc572eca1ff6ull: {
			auto _args = std::static_pointer_cast<const ::mmx::operation::Mutate_calc_hash>(_method);
			auto _return_value = ::mmx::operation::Mutate_calc_hash_return::create();
			_return_value->_ret_0 = calc_hash(_args->full_hash);
			return _return_value;
		}
	}
	return nullptr;
}


} // namespace mmx
} // namespace operation


namespace vnx {

void read(TypeInput& in, ::mmx::operation::Mutate& value, const TypeCode* type_code, const uint16_t* code) {
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
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 1: vnx::read(in, value.address, type_code, _field->code.data()); break;
			case 2: vnx::read(in, value.solution, type_code, _field->code.data()); break;
			case 3: vnx::read(in, value.method, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::mmx::operation::Mutate& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = mmx::operation::vnx_native_type_code_Mutate;
		out.write_type_code(type_code);
		vnx::write_class_header<::mmx::operation::Mutate>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(4);
	vnx::write_value(_buf + 0, value.version);
	vnx::write(out, value.address, type_code, type_code->fields[1].code.data());
	vnx::write(out, value.solution, type_code, type_code->fields[2].code.data());
	vnx::write(out, value.method, type_code, type_code->fields[3].code.data());
}

void read(std::istream& in, ::mmx::operation::Mutate& value) {
	value.read(in);
}

void write(std::ostream& out, const ::mmx::operation::Mutate& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::mmx::operation::Mutate& value) {
	value.accept(visitor);
}

} // vnx
