
// AUTO GENERATED by vnxcppcodegen

#include <mmx/exchange/package.hxx>
#include <mmx/exchange/ClientBase.hxx>
#include <vnx/NoSuchMethod.hxx>
#include <mmx/Block.hxx>
#include <mmx/Transaction.hxx>
#include <mmx/addr_t.hpp>
#include <mmx/exchange/Client_approve.hxx>
#include <mmx/exchange/Client_approve_return.hxx>
#include <mmx/exchange/Client_cancel_all.hxx>
#include <mmx/exchange/Client_cancel_all_return.hxx>
#include <mmx/exchange/Client_cancel_offer.hxx>
#include <mmx/exchange/Client_cancel_offer_return.hxx>
#include <mmx/exchange/Client_execute.hxx>
#include <mmx/exchange/Client_execute_return.hxx>
#include <mmx/exchange/Client_get_all_offers.hxx>
#include <mmx/exchange/Client_get_all_offers_return.hxx>
#include <mmx/exchange/Client_get_local_history.hxx>
#include <mmx/exchange/Client_get_local_history_return.hxx>
#include <mmx/exchange/Client_get_min_trade.hxx>
#include <mmx/exchange/Client_get_min_trade_return.hxx>
#include <mmx/exchange/Client_get_offer.hxx>
#include <mmx/exchange/Client_get_offer_return.hxx>
#include <mmx/exchange/Client_get_order.hxx>
#include <mmx/exchange/Client_get_order_return.hxx>
#include <mmx/exchange/Client_get_orders.hxx>
#include <mmx/exchange/Client_get_orders_return.hxx>
#include <mmx/exchange/Client_get_price.hxx>
#include <mmx/exchange/Client_get_price_return.hxx>
#include <mmx/exchange/Client_get_servers.hxx>
#include <mmx/exchange/Client_get_servers_return.hxx>
#include <mmx/exchange/Client_get_trade_history.hxx>
#include <mmx/exchange/Client_get_trade_history_return.hxx>
#include <mmx/exchange/Client_get_trade_pairs.hxx>
#include <mmx/exchange/Client_get_trade_pairs_return.hxx>
#include <mmx/exchange/Client_make_offer.hxx>
#include <mmx/exchange/Client_make_offer_return.hxx>
#include <mmx/exchange/Client_make_trade.hxx>
#include <mmx/exchange/Client_make_trade_return.hxx>
#include <mmx/exchange/Client_match.hxx>
#include <mmx/exchange/Client_match_return.hxx>
#include <mmx/exchange/Client_place.hxx>
#include <mmx/exchange/Client_place_return.hxx>
#include <mmx/exchange/LocalTrade.hxx>
#include <mmx/exchange/OfferBundle.hxx>
#include <mmx/exchange/amount_t.hxx>
#include <mmx/exchange/matched_order_t.hxx>
#include <mmx/exchange/open_order_t.hxx>
#include <mmx/exchange/order_t.hxx>
#include <mmx/exchange/trade_entry_t.hxx>
#include <mmx/exchange/trade_order_t.hxx>
#include <mmx/exchange/trade_pair_t.hxx>
#include <mmx/hash_t.hpp>
#include <mmx/txio_key_t.hxx>
#include <mmx/ulong_fraction_t.hxx>
#include <vnx/ModuleInterface_vnx_get_config.hxx>
#include <vnx/ModuleInterface_vnx_get_config_return.hxx>
#include <vnx/ModuleInterface_vnx_get_config_object.hxx>
#include <vnx/ModuleInterface_vnx_get_config_object_return.hxx>
#include <vnx/ModuleInterface_vnx_get_module_info.hxx>
#include <vnx/ModuleInterface_vnx_get_module_info_return.hxx>
#include <vnx/ModuleInterface_vnx_get_type_code.hxx>
#include <vnx/ModuleInterface_vnx_get_type_code_return.hxx>
#include <vnx/ModuleInterface_vnx_restart.hxx>
#include <vnx/ModuleInterface_vnx_restart_return.hxx>
#include <vnx/ModuleInterface_vnx_self_test.hxx>
#include <vnx/ModuleInterface_vnx_self_test_return.hxx>
#include <vnx/ModuleInterface_vnx_set_config.hxx>
#include <vnx/ModuleInterface_vnx_set_config_return.hxx>
#include <vnx/ModuleInterface_vnx_set_config_object.hxx>
#include <vnx/ModuleInterface_vnx_set_config_object_return.hxx>
#include <vnx/ModuleInterface_vnx_stop.hxx>
#include <vnx/ModuleInterface_vnx_stop_return.hxx>
#include <vnx/TopicPtr.hpp>
#include <vnx/addons/HttpComponent_http_request.hxx>
#include <vnx/addons/HttpComponent_http_request_return.hxx>
#include <vnx/addons/HttpComponent_http_request_chunk.hxx>
#include <vnx/addons/HttpComponent_http_request_chunk_return.hxx>
#include <vnx/addons/HttpData.hxx>
#include <vnx/addons/HttpRequest.hxx>
#include <vnx/addons/HttpResponse.hxx>
#include <vnx/addons/MsgServer.h>

#include <vnx/vnx.h>


namespace mmx {
namespace exchange {


const vnx::Hash64 ClientBase::VNX_TYPE_HASH(0x7d13a60fec8eb7f6ull);
const vnx::Hash64 ClientBase::VNX_CODE_HASH(0xe8622dafc3b2e8b8ull);

ClientBase::ClientBase(const std::string& _vnx_name)
	:	MsgServer::MsgServer(_vnx_name)
{
	vnx::read_config(vnx_name + ".input_blocks", input_blocks);
	vnx::read_config(vnx_name + ".node_server", node_server);
	vnx::read_config(vnx_name + ".wallet_server", wallet_server);
	vnx::read_config(vnx_name + ".server_map", server_map);
	vnx::read_config(vnx_name + ".storage_path", storage_path);
	vnx::read_config(vnx_name + ".post_interval", post_interval);
	vnx::read_config(vnx_name + ".min_confirm", min_confirm);
	vnx::read_config(vnx_name + ".max_trade_history", max_trade_history);
}

vnx::Hash64 ClientBase::get_type_hash() const {
	return VNX_TYPE_HASH;
}

std::string ClientBase::get_type_name() const {
	return "mmx.exchange.Client";
}

const vnx::TypeCode* ClientBase::get_type_code() const {
	return mmx::exchange::vnx_native_type_code_ClientBase;
}

void ClientBase::accept(vnx::Visitor& _visitor) const {
	const vnx::TypeCode* _type_code = mmx::exchange::vnx_native_type_code_ClientBase;
	_visitor.type_begin(*_type_code);
	_visitor.type_field(_type_code->fields[0], 0); vnx::accept(_visitor, port);
	_visitor.type_field(_type_code->fields[1], 1); vnx::accept(_visitor, host);
	_visitor.type_field(_type_code->fields[2], 2); vnx::accept(_visitor, max_connections);
	_visitor.type_field(_type_code->fields[3], 3); vnx::accept(_visitor, listen_queue_size);
	_visitor.type_field(_type_code->fields[4], 4); vnx::accept(_visitor, stats_interval_ms);
	_visitor.type_field(_type_code->fields[5], 5); vnx::accept(_visitor, connection_timeout_ms);
	_visitor.type_field(_type_code->fields[6], 6); vnx::accept(_visitor, send_buffer_size);
	_visitor.type_field(_type_code->fields[7], 7); vnx::accept(_visitor, receive_buffer_size);
	_visitor.type_field(_type_code->fields[8], 8); vnx::accept(_visitor, tcp_no_delay);
	_visitor.type_field(_type_code->fields[9], 9); vnx::accept(_visitor, tcp_keepalive);
	_visitor.type_field(_type_code->fields[10], 10); vnx::accept(_visitor, show_warnings);
	_visitor.type_field(_type_code->fields[11], 11); vnx::accept(_visitor, max_msg_size);
	_visitor.type_field(_type_code->fields[12], 12); vnx::accept(_visitor, input_blocks);
	_visitor.type_field(_type_code->fields[13], 13); vnx::accept(_visitor, node_server);
	_visitor.type_field(_type_code->fields[14], 14); vnx::accept(_visitor, wallet_server);
	_visitor.type_field(_type_code->fields[15], 15); vnx::accept(_visitor, server_map);
	_visitor.type_field(_type_code->fields[16], 16); vnx::accept(_visitor, storage_path);
	_visitor.type_field(_type_code->fields[17], 17); vnx::accept(_visitor, post_interval);
	_visitor.type_field(_type_code->fields[18], 18); vnx::accept(_visitor, min_confirm);
	_visitor.type_field(_type_code->fields[19], 19); vnx::accept(_visitor, max_trade_history);
	_visitor.type_end(*_type_code);
}

void ClientBase::write(std::ostream& _out) const {
	_out << "{";
	_out << "\"port\": "; vnx::write(_out, port);
	_out << ", \"host\": "; vnx::write(_out, host);
	_out << ", \"max_connections\": "; vnx::write(_out, max_connections);
	_out << ", \"listen_queue_size\": "; vnx::write(_out, listen_queue_size);
	_out << ", \"stats_interval_ms\": "; vnx::write(_out, stats_interval_ms);
	_out << ", \"connection_timeout_ms\": "; vnx::write(_out, connection_timeout_ms);
	_out << ", \"send_buffer_size\": "; vnx::write(_out, send_buffer_size);
	_out << ", \"receive_buffer_size\": "; vnx::write(_out, receive_buffer_size);
	_out << ", \"tcp_no_delay\": "; vnx::write(_out, tcp_no_delay);
	_out << ", \"tcp_keepalive\": "; vnx::write(_out, tcp_keepalive);
	_out << ", \"show_warnings\": "; vnx::write(_out, show_warnings);
	_out << ", \"max_msg_size\": "; vnx::write(_out, max_msg_size);
	_out << ", \"input_blocks\": "; vnx::write(_out, input_blocks);
	_out << ", \"node_server\": "; vnx::write(_out, node_server);
	_out << ", \"wallet_server\": "; vnx::write(_out, wallet_server);
	_out << ", \"server_map\": "; vnx::write(_out, server_map);
	_out << ", \"storage_path\": "; vnx::write(_out, storage_path);
	_out << ", \"post_interval\": "; vnx::write(_out, post_interval);
	_out << ", \"min_confirm\": "; vnx::write(_out, min_confirm);
	_out << ", \"max_trade_history\": "; vnx::write(_out, max_trade_history);
	_out << "}";
}

void ClientBase::read(std::istream& _in) {
	if(auto _json = vnx::read_json(_in)) {
		from_object(_json->to_object());
	}
}

vnx::Object ClientBase::to_object() const {
	vnx::Object _object;
	_object["__type"] = "mmx.exchange.Client";
	_object["port"] = port;
	_object["host"] = host;
	_object["max_connections"] = max_connections;
	_object["listen_queue_size"] = listen_queue_size;
	_object["stats_interval_ms"] = stats_interval_ms;
	_object["connection_timeout_ms"] = connection_timeout_ms;
	_object["send_buffer_size"] = send_buffer_size;
	_object["receive_buffer_size"] = receive_buffer_size;
	_object["tcp_no_delay"] = tcp_no_delay;
	_object["tcp_keepalive"] = tcp_keepalive;
	_object["show_warnings"] = show_warnings;
	_object["max_msg_size"] = max_msg_size;
	_object["input_blocks"] = input_blocks;
	_object["node_server"] = node_server;
	_object["wallet_server"] = wallet_server;
	_object["server_map"] = server_map;
	_object["storage_path"] = storage_path;
	_object["post_interval"] = post_interval;
	_object["min_confirm"] = min_confirm;
	_object["max_trade_history"] = max_trade_history;
	return _object;
}

void ClientBase::from_object(const vnx::Object& _object) {
	for(const auto& _entry : _object.field) {
		if(_entry.first == "connection_timeout_ms") {
			_entry.second.to(connection_timeout_ms);
		} else if(_entry.first == "host") {
			_entry.second.to(host);
		} else if(_entry.first == "input_blocks") {
			_entry.second.to(input_blocks);
		} else if(_entry.first == "listen_queue_size") {
			_entry.second.to(listen_queue_size);
		} else if(_entry.first == "max_connections") {
			_entry.second.to(max_connections);
		} else if(_entry.first == "max_msg_size") {
			_entry.second.to(max_msg_size);
		} else if(_entry.first == "max_trade_history") {
			_entry.second.to(max_trade_history);
		} else if(_entry.first == "min_confirm") {
			_entry.second.to(min_confirm);
		} else if(_entry.first == "node_server") {
			_entry.second.to(node_server);
		} else if(_entry.first == "port") {
			_entry.second.to(port);
		} else if(_entry.first == "post_interval") {
			_entry.second.to(post_interval);
		} else if(_entry.first == "receive_buffer_size") {
			_entry.second.to(receive_buffer_size);
		} else if(_entry.first == "send_buffer_size") {
			_entry.second.to(send_buffer_size);
		} else if(_entry.first == "server_map") {
			_entry.second.to(server_map);
		} else if(_entry.first == "show_warnings") {
			_entry.second.to(show_warnings);
		} else if(_entry.first == "stats_interval_ms") {
			_entry.second.to(stats_interval_ms);
		} else if(_entry.first == "storage_path") {
			_entry.second.to(storage_path);
		} else if(_entry.first == "tcp_keepalive") {
			_entry.second.to(tcp_keepalive);
		} else if(_entry.first == "tcp_no_delay") {
			_entry.second.to(tcp_no_delay);
		} else if(_entry.first == "wallet_server") {
			_entry.second.to(wallet_server);
		}
	}
}

vnx::Variant ClientBase::get_field(const std::string& _name) const {
	if(_name == "port") {
		return vnx::Variant(port);
	}
	if(_name == "host") {
		return vnx::Variant(host);
	}
	if(_name == "max_connections") {
		return vnx::Variant(max_connections);
	}
	if(_name == "listen_queue_size") {
		return vnx::Variant(listen_queue_size);
	}
	if(_name == "stats_interval_ms") {
		return vnx::Variant(stats_interval_ms);
	}
	if(_name == "connection_timeout_ms") {
		return vnx::Variant(connection_timeout_ms);
	}
	if(_name == "send_buffer_size") {
		return vnx::Variant(send_buffer_size);
	}
	if(_name == "receive_buffer_size") {
		return vnx::Variant(receive_buffer_size);
	}
	if(_name == "tcp_no_delay") {
		return vnx::Variant(tcp_no_delay);
	}
	if(_name == "tcp_keepalive") {
		return vnx::Variant(tcp_keepalive);
	}
	if(_name == "show_warnings") {
		return vnx::Variant(show_warnings);
	}
	if(_name == "max_msg_size") {
		return vnx::Variant(max_msg_size);
	}
	if(_name == "input_blocks") {
		return vnx::Variant(input_blocks);
	}
	if(_name == "node_server") {
		return vnx::Variant(node_server);
	}
	if(_name == "wallet_server") {
		return vnx::Variant(wallet_server);
	}
	if(_name == "server_map") {
		return vnx::Variant(server_map);
	}
	if(_name == "storage_path") {
		return vnx::Variant(storage_path);
	}
	if(_name == "post_interval") {
		return vnx::Variant(post_interval);
	}
	if(_name == "min_confirm") {
		return vnx::Variant(min_confirm);
	}
	if(_name == "max_trade_history") {
		return vnx::Variant(max_trade_history);
	}
	return vnx::Variant();
}

void ClientBase::set_field(const std::string& _name, const vnx::Variant& _value) {
	if(_name == "port") {
		_value.to(port);
	} else if(_name == "host") {
		_value.to(host);
	} else if(_name == "max_connections") {
		_value.to(max_connections);
	} else if(_name == "listen_queue_size") {
		_value.to(listen_queue_size);
	} else if(_name == "stats_interval_ms") {
		_value.to(stats_interval_ms);
	} else if(_name == "connection_timeout_ms") {
		_value.to(connection_timeout_ms);
	} else if(_name == "send_buffer_size") {
		_value.to(send_buffer_size);
	} else if(_name == "receive_buffer_size") {
		_value.to(receive_buffer_size);
	} else if(_name == "tcp_no_delay") {
		_value.to(tcp_no_delay);
	} else if(_name == "tcp_keepalive") {
		_value.to(tcp_keepalive);
	} else if(_name == "show_warnings") {
		_value.to(show_warnings);
	} else if(_name == "max_msg_size") {
		_value.to(max_msg_size);
	} else if(_name == "input_blocks") {
		_value.to(input_blocks);
	} else if(_name == "node_server") {
		_value.to(node_server);
	} else if(_name == "wallet_server") {
		_value.to(wallet_server);
	} else if(_name == "server_map") {
		_value.to(server_map);
	} else if(_name == "storage_path") {
		_value.to(storage_path);
	} else if(_name == "post_interval") {
		_value.to(post_interval);
	} else if(_name == "min_confirm") {
		_value.to(min_confirm);
	} else if(_name == "max_trade_history") {
		_value.to(max_trade_history);
	}
}

/// \private
std::ostream& operator<<(std::ostream& _out, const ClientBase& _value) {
	_value.write(_out);
	return _out;
}

/// \private
std::istream& operator>>(std::istream& _in, ClientBase& _value) {
	_value.read(_in);
	return _in;
}

const vnx::TypeCode* ClientBase::static_get_type_code() {
	const vnx::TypeCode* type_code = vnx::get_type_code(VNX_TYPE_HASH);
	if(!type_code) {
		type_code = vnx::register_type_code(static_create_type_code());
	}
	return type_code;
}

std::shared_ptr<vnx::TypeCode> ClientBase::static_create_type_code() {
	auto type_code = std::make_shared<vnx::TypeCode>();
	type_code->name = "mmx.exchange.Client";
	type_code->type_hash = vnx::Hash64(0x7d13a60fec8eb7f6ull);
	type_code->code_hash = vnx::Hash64(0xe8622dafc3b2e8b8ull);
	type_code->is_native = true;
	type_code->native_size = sizeof(::mmx::exchange::ClientBase);
	type_code->parents.resize(2);
	type_code->parents[0] = ::vnx::addons::MsgServerBase::static_get_type_code();
	type_code->parents[1] = ::vnx::addons::TcpServerBase::static_get_type_code();
	type_code->methods.resize(29);
	type_code->methods[0] = ::vnx::ModuleInterface_vnx_get_config_object::static_get_type_code();
	type_code->methods[1] = ::vnx::ModuleInterface_vnx_get_config::static_get_type_code();
	type_code->methods[2] = ::vnx::ModuleInterface_vnx_set_config_object::static_get_type_code();
	type_code->methods[3] = ::vnx::ModuleInterface_vnx_set_config::static_get_type_code();
	type_code->methods[4] = ::vnx::ModuleInterface_vnx_get_type_code::static_get_type_code();
	type_code->methods[5] = ::vnx::ModuleInterface_vnx_get_module_info::static_get_type_code();
	type_code->methods[6] = ::vnx::ModuleInterface_vnx_restart::static_get_type_code();
	type_code->methods[7] = ::vnx::ModuleInterface_vnx_stop::static_get_type_code();
	type_code->methods[8] = ::vnx::ModuleInterface_vnx_self_test::static_get_type_code();
	type_code->methods[9] = ::mmx::exchange::Client_get_servers::static_get_type_code();
	type_code->methods[10] = ::mmx::exchange::Client_execute::static_get_type_code();
	type_code->methods[11] = ::mmx::exchange::Client_match::static_get_type_code();
	type_code->methods[12] = ::mmx::exchange::Client_get_trade_pairs::static_get_type_code();
	type_code->methods[13] = ::mmx::exchange::Client_get_orders::static_get_type_code();
	type_code->methods[14] = ::mmx::exchange::Client_get_trade_history::static_get_type_code();
	type_code->methods[15] = ::mmx::exchange::Client_get_price::static_get_type_code();
	type_code->methods[16] = ::mmx::exchange::Client_get_min_trade::static_get_type_code();
	type_code->methods[17] = ::mmx::exchange::Client_get_order::static_get_type_code();
	type_code->methods[18] = ::mmx::exchange::Client_get_offer::static_get_type_code();
	type_code->methods[19] = ::mmx::exchange::Client_get_all_offers::static_get_type_code();
	type_code->methods[20] = ::mmx::exchange::Client_get_local_history::static_get_type_code();
	type_code->methods[21] = ::mmx::exchange::Client_cancel_offer::static_get_type_code();
	type_code->methods[22] = ::mmx::exchange::Client_cancel_all::static_get_type_code();
	type_code->methods[23] = ::mmx::exchange::Client_make_offer::static_get_type_code();
	type_code->methods[24] = ::mmx::exchange::Client_make_trade::static_get_type_code();
	type_code->methods[25] = ::mmx::exchange::Client_place::static_get_type_code();
	type_code->methods[26] = ::mmx::exchange::Client_approve::static_get_type_code();
	type_code->methods[27] = ::vnx::addons::HttpComponent_http_request::static_get_type_code();
	type_code->methods[28] = ::vnx::addons::HttpComponent_http_request_chunk::static_get_type_code();
	type_code->fields.resize(20);
	{
		auto& field = type_code->fields[0];
		field.data_size = 4;
		field.name = "port";
		field.value = vnx::to_string(9090);
		field.code = {7};
	}
	{
		auto& field = type_code->fields[1];
		field.is_extended = true;
		field.name = "host";
		field.value = vnx::to_string("localhost");
		field.code = {32};
	}
	{
		auto& field = type_code->fields[2];
		field.data_size = 4;
		field.name = "max_connections";
		field.value = vnx::to_string(-1);
		field.code = {7};
	}
	{
		auto& field = type_code->fields[3];
		field.data_size = 4;
		field.name = "listen_queue_size";
		field.value = vnx::to_string(100);
		field.code = {7};
	}
	{
		auto& field = type_code->fields[4];
		field.data_size = 4;
		field.name = "stats_interval_ms";
		field.value = vnx::to_string(10000);
		field.code = {7};
	}
	{
		auto& field = type_code->fields[5];
		field.data_size = 4;
		field.name = "connection_timeout_ms";
		field.value = vnx::to_string(-1);
		field.code = {7};
	}
	{
		auto& field = type_code->fields[6];
		field.data_size = 4;
		field.name = "send_buffer_size";
		field.code = {7};
	}
	{
		auto& field = type_code->fields[7];
		field.data_size = 4;
		field.name = "receive_buffer_size";
		field.code = {7};
	}
	{
		auto& field = type_code->fields[8];
		field.data_size = 1;
		field.name = "tcp_no_delay";
		field.value = vnx::to_string(false);
		field.code = {31};
	}
	{
		auto& field = type_code->fields[9];
		field.data_size = 1;
		field.name = "tcp_keepalive";
		field.value = vnx::to_string(true);
		field.code = {31};
	}
	{
		auto& field = type_code->fields[10];
		field.data_size = 1;
		field.name = "show_warnings";
		field.value = vnx::to_string(false);
		field.code = {31};
	}
	{
		auto& field = type_code->fields[11];
		field.data_size = 4;
		field.name = "max_msg_size";
		field.value = vnx::to_string(67108864);
		field.code = {3};
	}
	{
		auto& field = type_code->fields[12];
		field.is_extended = true;
		field.name = "input_blocks";
		field.value = vnx::to_string("node.verified_blocks");
		field.code = {12, 5};
	}
	{
		auto& field = type_code->fields[13];
		field.is_extended = true;
		field.name = "node_server";
		field.value = vnx::to_string("Node");
		field.code = {32};
	}
	{
		auto& field = type_code->fields[14];
		field.is_extended = true;
		field.name = "wallet_server";
		field.value = vnx::to_string("Wallet");
		field.code = {32};
	}
	{
		auto& field = type_code->fields[15];
		field.is_extended = true;
		field.name = "server_map";
		field.code = {13, 3, 32, 32};
	}
	{
		auto& field = type_code->fields[16];
		field.is_extended = true;
		field.name = "storage_path";
		field.value = vnx::to_string("exchange/");
		field.code = {32};
	}
	{
		auto& field = type_code->fields[17];
		field.data_size = 4;
		field.name = "post_interval";
		field.value = vnx::to_string(900);
		field.code = {7};
	}
	{
		auto& field = type_code->fields[18];
		field.data_size = 4;
		field.name = "min_confirm";
		field.value = vnx::to_string(2);
		field.code = {3};
	}
	{
		auto& field = type_code->fields[19];
		field.data_size = 4;
		field.name = "max_trade_history";
		field.value = vnx::to_string(10000);
		field.code = {3};
	}
	type_code->build();
	return type_code;
}

void ClientBase::vnx_handle_switch(std::shared_ptr<const vnx::Value> _value) {
	const auto* _type_code = _value->get_type_code();
	while(_type_code) {
		switch(_type_code->type_hash) {
			case 0x94965d816d328467ull:
				handle(std::static_pointer_cast<const ::mmx::Block>(_value));
				return;
			default:
				_type_code = _type_code->super;
		}
	}
	handle(std::static_pointer_cast<const vnx::Value>(_value));
}

std::shared_ptr<vnx::Value> ClientBase::vnx_call_switch(std::shared_ptr<const vnx::Value> _method, const vnx::request_id_t& _request_id) {
	switch(_method->get_type_hash()) {
		case 0x17f58f68bf83abc0ull: {
			auto _args = std::static_pointer_cast<const ::vnx::ModuleInterface_vnx_get_config_object>(_method);
			auto _return_value = ::vnx::ModuleInterface_vnx_get_config_object_return::create();
			_return_value->_ret_0 = vnx_get_config_object();
			return _return_value;
		}
		case 0xbbc7f1a01044d294ull: {
			auto _args = std::static_pointer_cast<const ::vnx::ModuleInterface_vnx_get_config>(_method);
			auto _return_value = ::vnx::ModuleInterface_vnx_get_config_return::create();
			_return_value->_ret_0 = vnx_get_config(_args->name);
			return _return_value;
		}
		case 0xca30f814f17f322full: {
			auto _args = std::static_pointer_cast<const ::vnx::ModuleInterface_vnx_set_config_object>(_method);
			auto _return_value = ::vnx::ModuleInterface_vnx_set_config_object_return::create();
			vnx_set_config_object(_args->config);
			return _return_value;
		}
		case 0x362aac91373958b7ull: {
			auto _args = std::static_pointer_cast<const ::vnx::ModuleInterface_vnx_set_config>(_method);
			auto _return_value = ::vnx::ModuleInterface_vnx_set_config_return::create();
			vnx_set_config(_args->name, _args->value);
			return _return_value;
		}
		case 0x305ec4d628960e5dull: {
			auto _args = std::static_pointer_cast<const ::vnx::ModuleInterface_vnx_get_type_code>(_method);
			auto _return_value = ::vnx::ModuleInterface_vnx_get_type_code_return::create();
			_return_value->_ret_0 = vnx_get_type_code();
			return _return_value;
		}
		case 0xf6d82bdf66d034a1ull: {
			auto _args = std::static_pointer_cast<const ::vnx::ModuleInterface_vnx_get_module_info>(_method);
			auto _return_value = ::vnx::ModuleInterface_vnx_get_module_info_return::create();
			_return_value->_ret_0 = vnx_get_module_info();
			return _return_value;
		}
		case 0x9e95dc280cecca1bull: {
			auto _args = std::static_pointer_cast<const ::vnx::ModuleInterface_vnx_restart>(_method);
			auto _return_value = ::vnx::ModuleInterface_vnx_restart_return::create();
			vnx_restart();
			return _return_value;
		}
		case 0x7ab49ce3d1bfc0d2ull: {
			auto _args = std::static_pointer_cast<const ::vnx::ModuleInterface_vnx_stop>(_method);
			auto _return_value = ::vnx::ModuleInterface_vnx_stop_return::create();
			vnx_stop();
			return _return_value;
		}
		case 0x6ce3775b41a42697ull: {
			auto _args = std::static_pointer_cast<const ::vnx::ModuleInterface_vnx_self_test>(_method);
			auto _return_value = ::vnx::ModuleInterface_vnx_self_test_return::create();
			_return_value->_ret_0 = vnx_self_test();
			return _return_value;
		}
		case 0x87045c0acdc1ecb1ull: {
			auto _args = std::static_pointer_cast<const ::mmx::exchange::Client_get_servers>(_method);
			auto _return_value = ::mmx::exchange::Client_get_servers_return::create();
			_return_value->_ret_0 = get_servers();
			return _return_value;
		}
		case 0xa683dfd1653658acull: {
			auto _args = std::static_pointer_cast<const ::mmx::exchange::Client_execute>(_method);
			execute_async(_args->server, _args->wallet, _args->order, _request_id);
			return nullptr;
		}
		case 0x5b38e7fda1090949ull: {
			auto _args = std::static_pointer_cast<const ::mmx::exchange::Client_match>(_method);
			match_async(_args->server, _args->orders, _request_id);
			return nullptr;
		}
		case 0xa448568c63c8bc5full: {
			auto _args = std::static_pointer_cast<const ::mmx::exchange::Client_get_trade_pairs>(_method);
			get_trade_pairs_async(_args->server, _request_id);
			return nullptr;
		}
		case 0xe2be2ad61d7d7ddull: {
			auto _args = std::static_pointer_cast<const ::mmx::exchange::Client_get_orders>(_method);
			get_orders_async(_args->server, _args->pair, _args->limit, _request_id);
			return nullptr;
		}
		case 0x9a38929545420919ull: {
			auto _args = std::static_pointer_cast<const ::mmx::exchange::Client_get_trade_history>(_method);
			get_trade_history_async(_args->server, _args->pair, _args->limit, _request_id);
			return nullptr;
		}
		case 0xbdf64eb0607d08d1ull: {
			auto _args = std::static_pointer_cast<const ::mmx::exchange::Client_get_price>(_method);
			get_price_async(_args->server, _args->want, _args->have, _request_id);
			return nullptr;
		}
		case 0x58211bd8f2a99ca1ull: {
			auto _args = std::static_pointer_cast<const ::mmx::exchange::Client_get_min_trade>(_method);
			get_min_trade_async(_args->server, _args->pair, _request_id);
			return nullptr;
		}
		case 0xc10718307553c190ull: {
			auto _args = std::static_pointer_cast<const ::mmx::exchange::Client_get_order>(_method);
			auto _return_value = ::mmx::exchange::Client_get_order_return::create();
			_return_value->_ret_0 = get_order(_args->key);
			return _return_value;
		}
		case 0x849af91452f19e33ull: {
			auto _args = std::static_pointer_cast<const ::mmx::exchange::Client_get_offer>(_method);
			auto _return_value = ::mmx::exchange::Client_get_offer_return::create();
			_return_value->_ret_0 = get_offer(_args->id);
			return _return_value;
		}
		case 0x6a5cbb4ec8f30f60ull: {
			auto _args = std::static_pointer_cast<const ::mmx::exchange::Client_get_all_offers>(_method);
			auto _return_value = ::mmx::exchange::Client_get_all_offers_return::create();
			_return_value->_ret_0 = get_all_offers();
			return _return_value;
		}
		case 0x3e3c510fddcb2554ull: {
			auto _args = std::static_pointer_cast<const ::mmx::exchange::Client_get_local_history>(_method);
			auto _return_value = ::mmx::exchange::Client_get_local_history_return::create();
			_return_value->_ret_0 = get_local_history(_args->pair, _args->limit);
			return _return_value;
		}
		case 0xf1fcc5da8000e71cull: {
			auto _args = std::static_pointer_cast<const ::mmx::exchange::Client_cancel_offer>(_method);
			auto _return_value = ::mmx::exchange::Client_cancel_offer_return::create();
			cancel_offer(_args->id);
			return _return_value;
		}
		case 0xb5b1b0b6b4f7e8fbull: {
			auto _args = std::static_pointer_cast<const ::mmx::exchange::Client_cancel_all>(_method);
			auto _return_value = ::mmx::exchange::Client_cancel_all_return::create();
			cancel_all();
			return _return_value;
		}
		case 0x9d3f5ba7b8309a30ull: {
			auto _args = std::static_pointer_cast<const ::mmx::exchange::Client_make_offer>(_method);
			auto _return_value = ::mmx::exchange::Client_make_offer_return::create();
			_return_value->_ret_0 = make_offer(_args->wallet, _args->pair, _args->bid, _args->ask, _args->num_chunks);
			return _return_value;
		}
		case 0x10fff803f7c32a54ull: {
			auto _args = std::static_pointer_cast<const ::mmx::exchange::Client_make_trade>(_method);
			auto _return_value = ::mmx::exchange::Client_make_trade_return::create();
			_return_value->_ret_0 = make_trade(_args->wallet, _args->pair, _args->bid, _args->ask);
			return _return_value;
		}
		case 0xb32aebcb67327b40ull: {
			auto _args = std::static_pointer_cast<const ::mmx::exchange::Client_place>(_method);
			auto _return_value = ::mmx::exchange::Client_place_return::create();
			place(_args->offer);
			return _return_value;
		}
		case 0x2f7fd18fad9a3f09ull: {
			auto _args = std::static_pointer_cast<const ::mmx::exchange::Client_approve>(_method);
			auto _return_value = ::mmx::exchange::Client_approve_return::create();
			_return_value->_ret_0 = approve(_args->tx);
			return _return_value;
		}
		case 0xe0b6c38f619bad92ull: {
			auto _args = std::static_pointer_cast<const ::vnx::addons::HttpComponent_http_request>(_method);
			http_request_async(_args->request, _args->sub_path, _request_id);
			return nullptr;
		}
		case 0x97e79d08440406d5ull: {
			auto _args = std::static_pointer_cast<const ::vnx::addons::HttpComponent_http_request_chunk>(_method);
			http_request_chunk_async(_args->request, _args->sub_path, _args->offset, _args->max_bytes, _request_id);
			return nullptr;
		}
	}
	auto _ex = vnx::NoSuchMethod::create();
	_ex->dst_mac = vnx_request ? vnx_request->dst_mac : vnx::Hash64();
	_ex->method = _method->get_type_name();
	return _ex;
}

void ClientBase::execute_async_return(const vnx::request_id_t& _request_id, const ::mmx::hash_t& _ret_0) const {
	auto _return_value = ::mmx::exchange::Client_execute_return::create();
	_return_value->_ret_0 = _ret_0;
	vnx_async_return(_request_id, _return_value);
}

void ClientBase::match_async_return(const vnx::request_id_t& _request_id, const std::vector<::mmx::exchange::matched_order_t>& _ret_0) const {
	auto _return_value = ::mmx::exchange::Client_match_return::create();
	_return_value->_ret_0 = _ret_0;
	vnx_async_return(_request_id, _return_value);
}

void ClientBase::get_trade_pairs_async_return(const vnx::request_id_t& _request_id, const std::vector<::mmx::exchange::trade_pair_t>& _ret_0) const {
	auto _return_value = ::mmx::exchange::Client_get_trade_pairs_return::create();
	_return_value->_ret_0 = _ret_0;
	vnx_async_return(_request_id, _return_value);
}

void ClientBase::get_orders_async_return(const vnx::request_id_t& _request_id, const std::vector<::mmx::exchange::order_t>& _ret_0) const {
	auto _return_value = ::mmx::exchange::Client_get_orders_return::create();
	_return_value->_ret_0 = _ret_0;
	vnx_async_return(_request_id, _return_value);
}

void ClientBase::get_trade_history_async_return(const vnx::request_id_t& _request_id, const std::vector<::mmx::exchange::trade_entry_t>& _ret_0) const {
	auto _return_value = ::mmx::exchange::Client_get_trade_history_return::create();
	_return_value->_ret_0 = _ret_0;
	vnx_async_return(_request_id, _return_value);
}

void ClientBase::get_price_async_return(const vnx::request_id_t& _request_id, const ::mmx::ulong_fraction_t& _ret_0) const {
	auto _return_value = ::mmx::exchange::Client_get_price_return::create();
	_return_value->_ret_0 = _ret_0;
	vnx_async_return(_request_id, _return_value);
}

void ClientBase::get_min_trade_async_return(const vnx::request_id_t& _request_id, const ::mmx::ulong_fraction_t& _ret_0) const {
	auto _return_value = ::mmx::exchange::Client_get_min_trade_return::create();
	_return_value->_ret_0 = _ret_0;
	vnx_async_return(_request_id, _return_value);
}

void ClientBase::http_request_async_return(const vnx::request_id_t& _request_id, const std::shared_ptr<const ::vnx::addons::HttpResponse>& _ret_0) const {
	auto _return_value = ::vnx::addons::HttpComponent_http_request_return::create();
	_return_value->_ret_0 = _ret_0;
	vnx_async_return(_request_id, _return_value);
}

void ClientBase::http_request_chunk_async_return(const vnx::request_id_t& _request_id, const std::shared_ptr<const ::vnx::addons::HttpData>& _ret_0) const {
	auto _return_value = ::vnx::addons::HttpComponent_http_request_chunk_return::create();
	_return_value->_ret_0 = _ret_0;
	vnx_async_return(_request_id, _return_value);
}


} // namespace mmx
} // namespace exchange


namespace vnx {

void read(TypeInput& in, ::mmx::exchange::ClientBase& value, const TypeCode* type_code, const uint16_t* code) {
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
			vnx::read_value(_buf + _field->offset, value.port, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[2]) {
			vnx::read_value(_buf + _field->offset, value.max_connections, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[3]) {
			vnx::read_value(_buf + _field->offset, value.listen_queue_size, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[4]) {
			vnx::read_value(_buf + _field->offset, value.stats_interval_ms, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[5]) {
			vnx::read_value(_buf + _field->offset, value.connection_timeout_ms, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[6]) {
			vnx::read_value(_buf + _field->offset, value.send_buffer_size, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[7]) {
			vnx::read_value(_buf + _field->offset, value.receive_buffer_size, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[8]) {
			vnx::read_value(_buf + _field->offset, value.tcp_no_delay, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[9]) {
			vnx::read_value(_buf + _field->offset, value.tcp_keepalive, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[10]) {
			vnx::read_value(_buf + _field->offset, value.show_warnings, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[11]) {
			vnx::read_value(_buf + _field->offset, value.max_msg_size, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[17]) {
			vnx::read_value(_buf + _field->offset, value.post_interval, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[18]) {
			vnx::read_value(_buf + _field->offset, value.min_confirm, _field->code.data());
		}
		if(const auto* const _field = type_code->field_map[19]) {
			vnx::read_value(_buf + _field->offset, value.max_trade_history, _field->code.data());
		}
	}
	for(const auto* _field : type_code->ext_fields) {
		switch(_field->native_index) {
			case 1: vnx::read(in, value.host, type_code, _field->code.data()); break;
			case 12: vnx::read(in, value.input_blocks, type_code, _field->code.data()); break;
			case 13: vnx::read(in, value.node_server, type_code, _field->code.data()); break;
			case 14: vnx::read(in, value.wallet_server, type_code, _field->code.data()); break;
			case 15: vnx::read(in, value.server_map, type_code, _field->code.data()); break;
			case 16: vnx::read(in, value.storage_path, type_code, _field->code.data()); break;
			default: vnx::skip(in, type_code, _field->code.data());
		}
	}
}

void write(TypeOutput& out, const ::mmx::exchange::ClientBase& value, const TypeCode* type_code, const uint16_t* code) {
	if(code && code[0] == CODE_OBJECT) {
		vnx::write(out, value.to_object(), nullptr, code);
		return;
	}
	if(!type_code || (code && code[0] == CODE_ANY)) {
		type_code = mmx::exchange::vnx_native_type_code_ClientBase;
		out.write_type_code(type_code);
		vnx::write_class_header<::mmx::exchange::ClientBase>(out);
	}
	else if(code && code[0] == CODE_STRUCT) {
		type_code = type_code->depends[code[1]];
	}
	char* const _buf = out.write(47);
	vnx::write_value(_buf + 0, value.port);
	vnx::write_value(_buf + 4, value.max_connections);
	vnx::write_value(_buf + 8, value.listen_queue_size);
	vnx::write_value(_buf + 12, value.stats_interval_ms);
	vnx::write_value(_buf + 16, value.connection_timeout_ms);
	vnx::write_value(_buf + 20, value.send_buffer_size);
	vnx::write_value(_buf + 24, value.receive_buffer_size);
	vnx::write_value(_buf + 28, value.tcp_no_delay);
	vnx::write_value(_buf + 29, value.tcp_keepalive);
	vnx::write_value(_buf + 30, value.show_warnings);
	vnx::write_value(_buf + 31, value.max_msg_size);
	vnx::write_value(_buf + 35, value.post_interval);
	vnx::write_value(_buf + 39, value.min_confirm);
	vnx::write_value(_buf + 43, value.max_trade_history);
	vnx::write(out, value.host, type_code, type_code->fields[1].code.data());
	vnx::write(out, value.input_blocks, type_code, type_code->fields[12].code.data());
	vnx::write(out, value.node_server, type_code, type_code->fields[13].code.data());
	vnx::write(out, value.wallet_server, type_code, type_code->fields[14].code.data());
	vnx::write(out, value.server_map, type_code, type_code->fields[15].code.data());
	vnx::write(out, value.storage_path, type_code, type_code->fields[16].code.data());
}

void read(std::istream& in, ::mmx::exchange::ClientBase& value) {
	value.read(in);
}

void write(std::ostream& out, const ::mmx::exchange::ClientBase& value) {
	value.write(out);
}

void accept(Visitor& visitor, const ::mmx::exchange::ClientBase& value) {
	value.accept(visitor);
}

} // vnx
