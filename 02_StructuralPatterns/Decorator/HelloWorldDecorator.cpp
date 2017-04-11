/*
 * HelloWorldDecorator.cpp
 *
 *  Created on: 3 avr. 2017
 *      Author: hnnguyen
 */

#include "HelloWorldDecorator.h"

namespace DesignPatterns {

namespace Decorator {

HelloWorldDecorator::HelloWorldDecorator(
		DesignPatterns::HelloWorld* pHelloWorld) {
	this->pHelloWorld = pHelloWorld;
}

std::string HelloWorldDecorator::helloWorld() {
	return pHelloWorld->helloWorld();
}

std::string DesignPatterns::Decorator::HelloWorldDecorator::helloDecorator() {
	return pHelloWorld->helloWorld().substr(0,pHelloWorld->helloWorld().find_first_of(" ")) + "Decorator!";
}

std::string DesignPatterns::Decorator::HelloWorldDecorator::DefaultHelloWorld::helloWorld() {
	return "Hello World!";
}


}  /* namespace Decorator */

} /* namespace DesignPatterns */

