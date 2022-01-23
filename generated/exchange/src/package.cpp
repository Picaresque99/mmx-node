
// AUTO GENERATED by vnxcppcodegen

#include <mmx/exchange/ClientBase.hxx>
#include <mmx/exchange/Client_approve.hxx>
#include <mmx/exchange/Client_approve_return.hxx>
#include <mmx/exchange/ServerBase.hxx>
#include <mmx/exchange/Server_approve.hxx>
#include <mmx/exchange/Server_approve_return.hxx>
#include <mmx/exchange/Server_cancel.hxx>
#include <mmx/exchange/Server_cancel_return.hxx>
#include <mmx/exchange/Server_execute.hxx>
#include <mmx/exchange/Server_execute_return.hxx>
#include <mmx/exchange/Server_get_orders.hxx>
#include <mmx/exchange/Server_get_orders_return.hxx>
#include <mmx/exchange/Server_get_price.hxx>
#include <mmx/exchange/Server_get_price_return.hxx>
#include <mmx/exchange/Server_match.hxx>
#include <mmx/exchange/Server_match_return.hxx>
#include <mmx/exchange/Server_place.hxx>
#include <mmx/exchange/Server_place_return.hxx>
#include <mmx/exchange/Server_reject.hxx>
#include <mmx/exchange/Server_reject_return.hxx>
#include <mmx/exchange/amount_t.hxx>
#include <mmx/exchange/limit_order_t.hxx>
#include <mmx/exchange/order_t.hxx>
#include <mmx/exchange/order_type_e.hxx>
#include <mmx/exchange/trade_order_t.hxx>
#include <mmx/exchange/trade_pair_t.hxx>

#include <mmx/exchange/package.hxx>
#include <vnx/vnx.h>



namespace vnx {

const TypeCode* type<::mmx::exchange::Client_approve>::get_type_code() {
	return mmx::exchange::vnx_native_type_code_Client_approve;
}

void type<::mmx::exchange::Client_approve>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::mmx::exchange::Client_approve());
}

void type<::mmx::exchange::Client_approve>::create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::exchange::Client_approve& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::mmx::exchange::Client_approve_return>::get_type_code() {
	return mmx::exchange::vnx_native_type_code_Client_approve_return;
}

void type<::mmx::exchange::Client_approve_return>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::mmx::exchange::Client_approve_return());
}

void type<::mmx::exchange::Client_approve_return>::create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::exchange::Client_approve_return& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::mmx::exchange::Server_approve>::get_type_code() {
	return mmx::exchange::vnx_native_type_code_Server_approve;
}

void type<::mmx::exchange::Server_approve>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::mmx::exchange::Server_approve());
}

void type<::mmx::exchange::Server_approve>::create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::exchange::Server_approve& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::mmx::exchange::Server_approve_return>::get_type_code() {
	return mmx::exchange::vnx_native_type_code_Server_approve_return;
}

void type<::mmx::exchange::Server_approve_return>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::mmx::exchange::Server_approve_return());
}

void type<::mmx::exchange::Server_approve_return>::create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::exchange::Server_approve_return& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::mmx::exchange::Server_cancel>::get_type_code() {
	return mmx::exchange::vnx_native_type_code_Server_cancel;
}

void type<::mmx::exchange::Server_cancel>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::mmx::exchange::Server_cancel());
}

void type<::mmx::exchange::Server_cancel>::create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::exchange::Server_cancel& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::mmx::exchange::Server_cancel_return>::get_type_code() {
	return mmx::exchange::vnx_native_type_code_Server_cancel_return;
}

void type<::mmx::exchange::Server_cancel_return>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::mmx::exchange::Server_cancel_return());
}

void type<::mmx::exchange::Server_cancel_return>::create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::exchange::Server_cancel_return& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::mmx::exchange::Server_execute>::get_type_code() {
	return mmx::exchange::vnx_native_type_code_Server_execute;
}

void type<::mmx::exchange::Server_execute>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::mmx::exchange::Server_execute());
}

void type<::mmx::exchange::Server_execute>::create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::exchange::Server_execute& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::mmx::exchange::Server_execute_return>::get_type_code() {
	return mmx::exchange::vnx_native_type_code_Server_execute_return;
}

void type<::mmx::exchange::Server_execute_return>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::mmx::exchange::Server_execute_return());
}

void type<::mmx::exchange::Server_execute_return>::create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::exchange::Server_execute_return& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::mmx::exchange::Server_get_orders>::get_type_code() {
	return mmx::exchange::vnx_native_type_code_Server_get_orders;
}

void type<::mmx::exchange::Server_get_orders>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::mmx::exchange::Server_get_orders());
}

void type<::mmx::exchange::Server_get_orders>::create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::exchange::Server_get_orders& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::mmx::exchange::Server_get_orders_return>::get_type_code() {
	return mmx::exchange::vnx_native_type_code_Server_get_orders_return;
}

void type<::mmx::exchange::Server_get_orders_return>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::mmx::exchange::Server_get_orders_return());
}

void type<::mmx::exchange::Server_get_orders_return>::create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::exchange::Server_get_orders_return& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::mmx::exchange::Server_get_price>::get_type_code() {
	return mmx::exchange::vnx_native_type_code_Server_get_price;
}

void type<::mmx::exchange::Server_get_price>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::mmx::exchange::Server_get_price());
}

void type<::mmx::exchange::Server_get_price>::create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::exchange::Server_get_price& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::mmx::exchange::Server_get_price_return>::get_type_code() {
	return mmx::exchange::vnx_native_type_code_Server_get_price_return;
}

void type<::mmx::exchange::Server_get_price_return>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::mmx::exchange::Server_get_price_return());
}

void type<::mmx::exchange::Server_get_price_return>::create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::exchange::Server_get_price_return& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::mmx::exchange::Server_match>::get_type_code() {
	return mmx::exchange::vnx_native_type_code_Server_match;
}

void type<::mmx::exchange::Server_match>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::mmx::exchange::Server_match());
}

void type<::mmx::exchange::Server_match>::create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::exchange::Server_match& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::mmx::exchange::Server_match_return>::get_type_code() {
	return mmx::exchange::vnx_native_type_code_Server_match_return;
}

void type<::mmx::exchange::Server_match_return>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::mmx::exchange::Server_match_return());
}

void type<::mmx::exchange::Server_match_return>::create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::exchange::Server_match_return& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::mmx::exchange::Server_place>::get_type_code() {
	return mmx::exchange::vnx_native_type_code_Server_place;
}

void type<::mmx::exchange::Server_place>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::mmx::exchange::Server_place());
}

void type<::mmx::exchange::Server_place>::create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::exchange::Server_place& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::mmx::exchange::Server_place_return>::get_type_code() {
	return mmx::exchange::vnx_native_type_code_Server_place_return;
}

void type<::mmx::exchange::Server_place_return>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::mmx::exchange::Server_place_return());
}

void type<::mmx::exchange::Server_place_return>::create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::exchange::Server_place_return& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::mmx::exchange::Server_reject>::get_type_code() {
	return mmx::exchange::vnx_native_type_code_Server_reject;
}

void type<::mmx::exchange::Server_reject>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::mmx::exchange::Server_reject());
}

void type<::mmx::exchange::Server_reject>::create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::exchange::Server_reject& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::mmx::exchange::Server_reject_return>::get_type_code() {
	return mmx::exchange::vnx_native_type_code_Server_reject_return;
}

void type<::mmx::exchange::Server_reject_return>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::mmx::exchange::Server_reject_return());
}

void type<::mmx::exchange::Server_reject_return>::create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::exchange::Server_reject_return& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::mmx::exchange::amount_t>::get_type_code() {
	return mmx::exchange::vnx_native_type_code_amount_t;
}

void type<::mmx::exchange::amount_t>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::mmx::exchange::amount_t());
}

void type<::mmx::exchange::amount_t>::create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::exchange::amount_t& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::mmx::exchange::limit_order_t>::get_type_code() {
	return mmx::exchange::vnx_native_type_code_limit_order_t;
}

void type<::mmx::exchange::limit_order_t>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::mmx::exchange::limit_order_t());
}

void type<::mmx::exchange::limit_order_t>::create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::exchange::limit_order_t& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::mmx::exchange::order_t>::get_type_code() {
	return mmx::exchange::vnx_native_type_code_order_t;
}

void type<::mmx::exchange::order_t>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::mmx::exchange::order_t());
}

void type<::mmx::exchange::order_t>::create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::exchange::order_t& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::mmx::exchange::order_type_e>::get_type_code() {
	return mmx::exchange::vnx_native_type_code_order_type_e;
}

void type<::mmx::exchange::order_type_e>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::mmx::exchange::order_type_e());
}

void type<::mmx::exchange::order_type_e>::create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::exchange::order_type_e& value, bool special) {
	if(!special || value.is_valid()) {
		code.push_back(CODE_STRING);
	} else {
		code.push_back(CODE_UINT32);
	}
}

const TypeCode* type<::mmx::exchange::trade_order_t>::get_type_code() {
	return mmx::exchange::vnx_native_type_code_trade_order_t;
}

void type<::mmx::exchange::trade_order_t>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::mmx::exchange::trade_order_t());
}

void type<::mmx::exchange::trade_order_t>::create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::exchange::trade_order_t& value, bool special) {
	code.push_back(CODE_OBJECT);
}

const TypeCode* type<::mmx::exchange::trade_pair_t>::get_type_code() {
	return mmx::exchange::vnx_native_type_code_trade_pair_t;
}

void type<::mmx::exchange::trade_pair_t>::create_dynamic_code(std::vector<uint16_t>& code) {
	create_dynamic_code(code, ::mmx::exchange::trade_pair_t());
}

void type<::mmx::exchange::trade_pair_t>::create_dynamic_code(std::vector<uint16_t>& code, const ::mmx::exchange::trade_pair_t& value, bool special) {
	code.push_back(CODE_OBJECT);
}


} // namespace vnx


namespace mmx {
namespace exchange {


static void register_all_types() {
	vnx::register_type_code(::mmx::exchange::ClientBase::static_create_type_code());
	vnx::register_type_code(::mmx::exchange::Client_approve::static_create_type_code());
	vnx::register_type_code(::mmx::exchange::Client_approve_return::static_create_type_code());
	vnx::register_type_code(::mmx::exchange::ServerBase::static_create_type_code());
	vnx::register_type_code(::mmx::exchange::Server_approve::static_create_type_code());
	vnx::register_type_code(::mmx::exchange::Server_approve_return::static_create_type_code());
	vnx::register_type_code(::mmx::exchange::Server_cancel::static_create_type_code());
	vnx::register_type_code(::mmx::exchange::Server_cancel_return::static_create_type_code());
	vnx::register_type_code(::mmx::exchange::Server_execute::static_create_type_code());
	vnx::register_type_code(::mmx::exchange::Server_execute_return::static_create_type_code());
	vnx::register_type_code(::mmx::exchange::Server_get_orders::static_create_type_code());
	vnx::register_type_code(::mmx::exchange::Server_get_orders_return::static_create_type_code());
	vnx::register_type_code(::mmx::exchange::Server_get_price::static_create_type_code());
	vnx::register_type_code(::mmx::exchange::Server_get_price_return::static_create_type_code());
	vnx::register_type_code(::mmx::exchange::Server_match::static_create_type_code());
	vnx::register_type_code(::mmx::exchange::Server_match_return::static_create_type_code());
	vnx::register_type_code(::mmx::exchange::Server_place::static_create_type_code());
	vnx::register_type_code(::mmx::exchange::Server_place_return::static_create_type_code());
	vnx::register_type_code(::mmx::exchange::Server_reject::static_create_type_code());
	vnx::register_type_code(::mmx::exchange::Server_reject_return::static_create_type_code());
	vnx::register_type_code(::mmx::exchange::amount_t::static_create_type_code());
	vnx::register_type_code(::mmx::exchange::limit_order_t::static_create_type_code());
	vnx::register_type_code(::mmx::exchange::order_t::static_create_type_code());
	vnx::register_type_code(::mmx::exchange::order_type_e::static_create_type_code());
	vnx::register_type_code(::mmx::exchange::trade_order_t::static_create_type_code());
	vnx::register_type_code(::mmx::exchange::trade_pair_t::static_create_type_code());
}

static struct vnx_static_init {
	vnx_static_init() {
		register_all_types();
	}
} vnx_static_init_;

const vnx::TypeCode* const vnx_native_type_code_ClientBase = vnx::get_type_code(vnx::Hash64(0x7d13a60fec8eb7f6ull));
const vnx::TypeCode* const vnx_native_type_code_Client_approve = vnx::get_type_code(vnx::Hash64(0x2f7fd18fad9a3f09ull));
const vnx::TypeCode* const vnx_native_type_code_Client_approve_return = vnx::get_type_code(vnx::Hash64(0x5357dc99cc5dbc90ull));
const vnx::TypeCode* const vnx_native_type_code_ServerBase = vnx::get_type_code(vnx::Hash64(0x573a9f3b899c4e1dull));
const vnx::TypeCode* const vnx_native_type_code_Server_approve = vnx::get_type_code(vnx::Hash64(0xe2ce003c827b9aa9ull));
const vnx::TypeCode* const vnx_native_type_code_Server_approve_return = vnx::get_type_code(vnx::Hash64(0x50f02c0bce8f41d3ull));
const vnx::TypeCode* const vnx_native_type_code_Server_cancel = vnx::get_type_code(vnx::Hash64(0xeec8da2aee14c3e8ull));
const vnx::TypeCode* const vnx_native_type_code_Server_cancel_return = vnx::get_type_code(vnx::Hash64(0x9703d614207b52eull));
const vnx::TypeCode* const vnx_native_type_code_Server_execute = vnx::get_type_code(vnx::Hash64(0x6b320e624ad7fd0cull));
const vnx::TypeCode* const vnx_native_type_code_Server_execute_return = vnx::get_type_code(vnx::Hash64(0xde8fce6d83832749ull));
const vnx::TypeCode* const vnx_native_type_code_Server_get_orders = vnx::get_type_code(vnx::Hash64(0x75d1f7f88288f10cull));
const vnx::TypeCode* const vnx_native_type_code_Server_get_orders_return = vnx::get_type_code(vnx::Hash64(0x851cf26ce356eecaull));
const vnx::TypeCode* const vnx_native_type_code_Server_get_price = vnx::get_type_code(vnx::Hash64(0x97209facb005ead5ull));
const vnx::TypeCode* const vnx_native_type_code_Server_get_price_return = vnx::get_type_code(vnx::Hash64(0x9a4739cba195951full));
const vnx::TypeCode* const vnx_native_type_code_Server_match = vnx::get_type_code(vnx::Hash64(0x7d6b1feaf4d8a485ull));
const vnx::TypeCode* const vnx_native_type_code_Server_match_return = vnx::get_type_code(vnx::Hash64(0xdd7bd59f9bd2a773ull));
const vnx::TypeCode* const vnx_native_type_code_Server_place = vnx::get_type_code(vnx::Hash64(0x957913dc32e3d68cull));
const vnx::TypeCode* const vnx_native_type_code_Server_place_return = vnx::get_type_code(vnx::Hash64(0x49ad8d482195a986ull));
const vnx::TypeCode* const vnx_native_type_code_Server_reject = vnx::get_type_code(vnx::Hash64(0x29196637450834e9ull));
const vnx::TypeCode* const vnx_native_type_code_Server_reject_return = vnx::get_type_code(vnx::Hash64(0x39d67e1e7add1955ull));
const vnx::TypeCode* const vnx_native_type_code_amount_t = vnx::get_type_code(vnx::Hash64(0x8f650f3d1b457f84ull));
const vnx::TypeCode* const vnx_native_type_code_limit_order_t = vnx::get_type_code(vnx::Hash64(0x29221388863cc7c6ull));
const vnx::TypeCode* const vnx_native_type_code_order_t = vnx::get_type_code(vnx::Hash64(0x26c0ed85748d941dull));
const vnx::TypeCode* const vnx_native_type_code_order_type_e = vnx::get_type_code(vnx::Hash64(0x44a1e47e2c8a95f0ull));
const vnx::TypeCode* const vnx_native_type_code_trade_order_t = vnx::get_type_code(vnx::Hash64(0x96dc9b77e428e71ull));
const vnx::TypeCode* const vnx_native_type_code_trade_pair_t = vnx::get_type_code(vnx::Hash64(0xb905dc58e1616f03ull));

} // namespace mmx
} // namespace exchange