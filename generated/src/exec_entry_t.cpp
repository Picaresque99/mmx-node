
// AUTO GENERATED by vnxcppcodegen

#include <mmx/package.hxx>
#include <mmx/exec_entry_t.hxx>
#include <mmx/addr_t.hpp>
#include <mmx/hash_t.hpp>
#include <vnx/Variant.hpp>

#include <vnx/vnx.h>


namespace mmx {


const vnx::Hash64 exec_entry_t::VNX_TYPE_HASH(0xd30282844b1862a4ull);
const vnx::Hash64 exec_entry_t::VNX_CODE_HASH(0x80f51ee4873e58a5ull);

vnx::Hash64 exec_entry_t::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string exec_entry_t::get_type_name() const {
	return "mmx.exec_entry_t";
}

const vnx::TypeCode* exec_entry_t::get_type_code() const {
	return mmx::vnx_native_type_code_exec_entry_t;
}

std::shared_ptr<exec_entry_t> exec_entry_t::create() {
	return std::make_shared<exec_entry_t>();
}

std::shared_ptr<exec_entry_t> exec_entry_t::clone() const {
	return std::make_shared<exec_entry_t>(*this);
}

void exec_entry_t::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void exec_entry_t::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void exec_entry_t::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = mmx::vnx_native_type_code_exec_entry_t;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, height);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, txid);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, method);
	_visitor.type_field(_type_code->fields[3], 3); vnx::accept(_visitor, args);
	_visitor.type_field(_type_code->fields[4], 4); vnx::accept(_visitor, deposit);
	_visitor.type_end(*_type_code);
}

void exec_entry_t::write(std::ostream& _out) const {
	_out << "{";
	_out << "\"height\": "; vnx::write(_out, height);
	_out << ", \"txid\": "; vnx::write(_out, txid);
	_out << ", \"method\": "; vnx::write(_out, method);
	_out << ", \"args\": "; vnx::write(_out, args);
	_out << ", \"deposit\": "; vnx::write(_out, deposit);
	_out << "}";
}

void exec_entry_t::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object exec_entry_t::to_object() const {
	vnx::Object _object;
	_object["__type"] = "mmx.exec_entry_t";
	_object["height"] = height;
	_object["txid"] = txid;
	_object["method"] = method;
	_object["args"] = args;
	_object["deposit"] = deposit;
	return _object;
}

void exec_entry_t::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "args") {
			_entry.second.to(args);
		} else if(_entry.first == "deposit") {
			_entry.second.to(deposit);
		} else if(_entry.first == "height") {
			_entry.second.to(height);
		} else if(_entry.first == "method") {
			_entry.second.to(method);
		} else if(_entry.first == "txid") {
			_entry.second.to(txid);
		}
	}
}

vnx::Variant exec_entry_t::get_field(const std::string& _name) const {
	if(_name == "height") {
		return vnx::Variant(height);
	}
	if(_name == "txid") {
		return vnx::Variant(txid);
	}
	if(_name == "method") {
		return vnx::Variant(method);
	}
	if(_name == "args") {
		return vnx::Variant(args);
	}
	if(_name == "deposit") {
		return vnx::Variant(deposit);
	}
	return vnx::Variant();
}

void exec_entry_t::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "height") {
		_value.to(height);
	} else if(_name == "txid") {
		_value.to(txid);
	} else if(_name == "method") {
		_value.to(method);
	} else if(_name == "args") {
		_value.to(args);
	} else if(_name == "deposit") {
		_value.to(deposit);
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const exec_entry_t& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, exec_entry_t& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* exec_entry_t::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> exec_entry_t::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "mmx.exec_entry_t";
	type_code->type_hash = vnx::Hash64(0xd30282844b1862a4ull);
	type_code->code_hash = vnx::Hash64(0x80f51ee4873e58a5ull);
	type_code->is_native = true;
	type_code->native_size = sizeof(::mmx::exec_entry_t);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<vnx::Struct<exec_entry_t>>(); };
	type_code->fields.resize(5);
	{
		auto& field = type_code->fields[0];
		field.data_size = 4;
		field.name = "height";
		field.code = {3};
	}
	{
		auto& field = type_code->fields[1];
		field.is_extended = true;
		field.name = "txid";
		field.code = {11, 32, 1};
	}
	{
		auto& field = type_code->fields[2];
		field.is_extended = true;
		field.name = "method";
		field.code = {32};
	}
	{
		auto& field = type_code->fields[3];
		field.is_extended = true;
		field.name = "args";
		field.code = {12, 17};
	}
	{
		auto& field = type_code->fields[4];
		field.is_extended = true;
		field.name = "deposit";
		field.code = {33, 23, 2, 4, 7, 11, 32, 1, 4};
	}
	type_code->build();
	return type_code;
}


} // namespace mmx


namespace vnx {

void read(TypeInput& in, ::mmx::exec_entry_t& value, const TypeCode* type_code, const uint16_t* code) {
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
			vnx::read_value(_buf + _field->offset, value.height, _field->code.data());
		}
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 1: vnx::read(in, value.txid, type_code, _field->code.data()); break;
			case 2: vnx::read(in, value.method, type_code, _field->code.data()); break;
			case 3: vnx::read(in, value.args, type_code, _field->code.data()); break;
			case 4: vnx::read(in, value.deposit, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::mmx::exec_entry_t& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = mmx::vnx_native_type_code_exec_entry_t;
		out.write_type_code(type_code);
		vnx::write_class_header<::mmx::exec_entry_t>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(4);
	vnx::write_value(_buf + 0, value.height);
	vnx::write(out, value.txid, type_code, type_code->fields[1].code.data());
	vnx::write(out, value.method, type_code, type_code->fields[2].code.data());
	vnx::write(out, value.args, type_code, type_code->fields[3].code.data());
	vnx::write(out, value.deposit, type_code, type_code->fields[4].code.data());
}

void read(std::istream& in, ::mmx::exec_entry_t& value) {
	value.read(in);
}

void write(std::ostream& out, const ::mmx::exec_entry_t& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::mmx::exec_entry_t& value) {
	value.accept(visitor);
}

bool is_equivalent<::mmx::exec_entry_t>::operator()(const uint16_t* code, const TypeCode* type_code) {
	if(code[0] != CODE_STRUCT || !type_code) {
		return false;
	}
	type_code = type_code->depends[code[1]];
	return type_code->type_hash == ::mmx::exec_entry_t::VNX_TYPE_HASH && type_code->is_equivalent;
}

} // vnx
