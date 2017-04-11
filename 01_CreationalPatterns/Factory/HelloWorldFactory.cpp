/*
 * HelloWorldFactory.cpp
 *
 *  Created on: 21 d�c. 2016
 *      Author: hnnguyen
 */

#include "HelloWorldFactory.h"

namespace DesignPatterns {
namespace Factory {

std::string HelloWorldFactory::helloWorld() {
	return "Hello World";
}

HelloWorld* HelloWorldFactory::createHelloWorld() {
	return new HelloWorldFactory();
}
}
}
