/*
 * CppHelloWorldImpl.cpp
 *
 *  Created on: 3 avr. 2017
 *      Author: hnnguyen
 */

#include "CppHelloWorldImpl.h"

namespace DesignPatterns {

namespace Bridge {

std::string DesignPatterns::Bridge::CppHelloWorldImpl::generate() {
	return "Hello Cpp";
}

} /* namespace Bridge */

} /* namespace DesignPatterns */
