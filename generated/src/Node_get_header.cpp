
// AUTO GENERATED by vnxcppcodegen

#include <mmx/package.hxx>
#include <mmx/Node_get_header.hxx>
#include <mmx/Node_get_header_return.hxx>
#include <mmx/hash_t.hpp>
#include <vnx/Value.h>

#include <vnx/vnx.h>


namespace mmx {


const vnx::Hash64 Node_get_header::VNX_TYPE_HASH(0xf17a5d0c180db198ull);
const vnx::Hash64 Node_get_header::VNX_CODE_HASH(0x9cda80dd1421da61ull);

vnx::Hash64 Node_get_header::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string Node_get_header::get_type_name() const {
	return "mmx.Node.get_header";
}

const vnx::TypeCode* Node_get_header::get_type_code() const {
	return mmx::vnx_native_type_code_Node_get_header;
}

std::shared_ptr<Node_get_header> Node_get_header::create() {
	return std::make_shared<Node_get_header>();
}

std::shared_ptr<vnx::Value> Node_get_header::clone() const {
	return std::make_shared<Node_get_header>(*this);
}

void Node_get_header::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void Node_get_header::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void Node_get_header::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = mmx::vnx_native_type_code_Node_get_header;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, hash);
	_visitor.type_end(*_type_code);
}

void Node_get_header::write(std::ostream& _out) const {
	_out << "{\"__type\": \"mmx.Node.get_header\"";
	_out << ", \"hash\": "; vnx::write(_out, hash);
	_out << "}";
}

void Node_get_header::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object Node_get_header::to_object() const {
	vnx::Object _object;
	_object["__type"] = "mmx.Node.get_header";
	_object["hash"] = hash;
	return _object;
}

void Node_get_header::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "hash") {
			_entry.second.to(hash);
		}
	}
}

vnx::Variant Node_get_header::get_field(const std::string& _name) const {
	if(_name == "hash") {
		return vnx::Variant(hash);
	}
	return vnx::Variant();
}

void Node_get_header::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "hash") {
		_value.to(hash);
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const Node_get_header& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, Node_get_header& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* Node_get_header::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> Node_get_header::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "mmx.Node.get_header";
	type_code->type_hash = vnx::Hash64(0xf17a5d0c180db198ull);
	type_code->code_hash = vnx::Hash64(0x9cda80dd1421da61ull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->is_method = true;
	type_code->native_size = sizeof(::mmx::Node_get_header);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<Node_get_header>(); };
	type_code->is_const = true;
	type_code->return_type = ::mmx::Node_get_header_return::static_get_type_code();
	type_code->fields.resize(1);
	{
		auto& field = type_code->fields[0];
		field.is_extended = true;
		field.name = "hash";
		field.code = {11, 32, 1};
	}
	type_code->permission = "mmx.permission_e.PUBLIC";
	type_code->build();
	return type_code;
}


} // namespace mmx


namespace vnx {

void read(TypeInput& in, ::mmx::Node_get_header& value, const TypeCode* type_code, const uint16_t* code) {
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
	in.read(type_code->total_field_size);
	if(type_code->is_matched) {
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 0: vnx::read(in, value.hash, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::mmx::Node_get_header& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = mmx::vnx_native_type_code_Node_get_header;
		out.write_type_code(type_code);
		vnx::write_class_header<::mmx::Node_get_header>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	vnx::write(out, value.hash, type_code, type_code->fields[0].code.data());
}

void read(std::istream& in, ::mmx::Node_get_header& value) {
	value.read(in);
}

void write(std::ostream& out, const ::mmx::Node_get_header& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::mmx::Node_get_header& value) {
	value.accept(visitor);
}

} // vnx
