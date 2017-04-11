/*
 * HelloWorldInterjection.cpp
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#include "HelloWorldInterjection.h"

namespace DesignPatterns {

namespace Mediator {

std::string HelloWorldInterjection::separator = " ";

std::string HelloWorldInterjection::terminator = "!";

void HelloWorldInterjection::setHelloWorldMediator(
		HelloWorldMediator *helloWorldMediator) {
	this->helloWorldMediator = helloWorldMediator;
}

std::string HelloWorldInterjection::interjection() {
	return "Hello";
}

std::string HelloWorldInterjection::helloWorld() {
	return interjection() + separator + helloWorldMediator->object() + terminator;
}


}  /* namespace Mediator */

} /* namespace DesignPatterns */

