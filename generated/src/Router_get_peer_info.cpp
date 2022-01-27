
// AUTO GENERATED by vnxcppcodegen

#include <mmx/package.hxx>
#include <mmx/Router_get_peer_info.hxx>
#include <mmx/Router_get_peer_info_return.hxx>
#include <vnx/Value.h>

#include <vnx/vnx.h>


namespace mmx {


const vnx::Hash64 Router_get_peer_info::VNX_TYPE_HASH(0x520a467ef9324cb3ull);
const vnx::Hash64 Router_get_peer_info::VNX_CODE_HASH(0x5fb7af7adff5636eull);

vnx::Hash64 Router_get_peer_info::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string Router_get_peer_info::get_type_name() const {
	return "mmx.Router.get_peer_info";
}

const vnx::TypeCode* Router_get_peer_info::get_type_code() const {
	return mmx::vnx_native_type_code_Router_get_peer_info;
}

std::shared_ptr<Router_get_peer_info> Router_get_peer_info::create() {
	return std::make_shared<Router_get_peer_info>();
}

std::shared_ptr<vnx::Value> Router_get_peer_info::clone() const {
	return std::make_shared<Router_get_peer_info>(*this);
}

void Router_get_peer_info::read(vnx::TypeInput& _in, const vnx::TypeCode* _type_code, const uint16_t* _code) {
	vnx::read(_in, *this, _type_code, _code);
}

void Router_get_peer_info::write(vnx::TypeOutput& _out, const vnx::TypeCode* _type_code, const uint16_t* _code) const {
	vnx::write(_out, *this, _type_code, _code);
}

void Router_get_peer_info::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = mmx::vnx_native_type_code_Router_get_peer_info;
	_visitor.type_begin(*_type_code);
	_visitor.type_end(*_type_code);
}

void Router_get_peer_info::write(std::ostream& _out) const {
	_out << "{\"__type\": \"mmx.Router.get_peer_info\"";
	_out << "}";
}

void Router_get_peer_info::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object Router_get_peer_info::to_object() const {
	vnx::Object _object;
	_object["__type"] = "mmx.Router.get_peer_info";
	return _object;
}

void Router_get_peer_info::from_object(const vnx::Object& _object) {
}

vnx::Variant Router_get_peer_info::get_field(const std::string& _name) const {
	return vnx::Variant();
}

void Router_get_peer_info::set_field(const std::string& _name, const vnx::Variant& _value) {
}

/// \private
std::ostream& operator<<(std::ostream& _out, const Router_get_peer_info& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, Router_get_peer_info& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* Router_get_peer_info::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> Router_get_peer_info::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "mmx.Router.get_peer_info";
	type_code->type_hash = vnx::Hash64(0x520a467ef9324cb3ull);
	type_code->code_hash = vnx::Hash64(0x5fb7af7adff5636eull);
	type_code->is_native = true;
	type_code->is_class = true;
	type_code->is_method = true;
	type_code->native_size = sizeof(::mmx::Router_get_peer_info);
	type_code->create_value = []() -> std::shared_ptr<vnx::Value> { return std::make_shared<Router_get_peer_info>(); };
	type_code->is_const = true;
	type_code->return_type = ::mmx::Router_get_peer_info_return::static_get_type_code();
	type_code->build();
	return type_code;
}


} // namespace mmx


namespace vnx {

void read(TypeInput& in, ::mmx::Router_get_peer_info& value, const TypeCode* type_code, const uint16_t* code) {
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
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::mmx::Router_get_peer_info& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = mmx::vnx_native_type_code_Router_get_peer_info;
		out.write_type_code(type_code);
		vnx::write_class_header<::mmx::Router_get_peer_info>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
}

void read(std::istream& in, ::mmx::Router_get_peer_info& value) {
	value.read(in);
}

void write(std::ostream& out, const ::mmx::Router_get_peer_info& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::mmx::Router_get_peer_info& value) {
	value.accept(visitor);
}

} // vnx
