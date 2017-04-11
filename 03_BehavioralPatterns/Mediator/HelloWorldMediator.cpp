/*
 * HelloWorldMediator.cpp
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#include "HelloWorldMediator.h"

namespace DesignPatterns {

namespace Mediator {

HelloWorldMediator::HelloWorldMediator(
		DesignPatterns::SplitHelloWorld::HelloWorldInterjection& helloWorldInterjection,
		DesignPatterns::SplitHelloWorld::HelloWorldObject& helloWorldObject) {
	this->objHelloWorldObject = &helloWorldObject;
	this->objHelloWorldInterjection = &helloWorldInterjection;
}

std::string HelloWorldMediator::interjection() {
	return objHelloWorldInterjection->interjection();
}

std::string HelloWorldMediator::object() {
	return objHelloWorldObject->object();
}

} /* namespace Mediator */

} /* namespace DesignPatterns */
