/*
 * HelloWorldHandler.cpp
 *
 *  Created on: 3 avr. 2017
 *      Author: hnnguyen
 */

#include "HelloWorldHandler.h"

namespace DesignPatterns {
namespace ChainResponsibility {

HelloWorldHandler* HelloWorldHandler::setNext(
		HelloWorldHandler* next) {
	this->next = next;
	return this;
}

std::string HelloWorldHandler::helloWorld() {
	std::string str;
	handle(str);
	if (next) {
		next->handle(str);
	}
	return str;
}


}  /* namespace ChainResponsibility */
} /* namespace DesignPatterns */
