/*
 * HelloWorldObject.cpp
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#include "HelloWorldObject.h"

namespace DesignPatterns {

namespace Mediator {

std::string HelloWorldObject::separator = " ";

std::string HelloWorldObject::terminator = "!";

void HelloWorldObject::setHelloWorldMediator(
		HelloWorldMediator *helloWorldMediator) {
	this->helloWorldMediator = helloWorldMediator;
}

std::string HelloWorldObject::object() {
	return "Mediator";
}

std::string HelloWorldObject::helloWorld() {
	return helloWorldMediator->interjection() + separator + object() + terminator;
}

} /* namespace Mediator */

} /* namespace DesignPatterns */
