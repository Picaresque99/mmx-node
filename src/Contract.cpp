/*
 * Contract.cpp
 *
 *  Created on: Nov 27, 2021
 *      Author: mad
 */

#include <mmx/Contract.hxx>


namespace mmx {

vnx::bool_t Contract::is_valid() const
{
	return false;
}

hash_t Contract::calc_hash() const
{
	return hash_t();
}


} // mmx
