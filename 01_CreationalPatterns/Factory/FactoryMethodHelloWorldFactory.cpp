/*
 * FactoryMethodHelloWorldFactory.cpp
 *
 *  Created on: 31 mars 2017
 *      Author: hnnguyen
 */

#include "FactoryMethodHelloWorldFactory.h"

namespace DesignPatterns {

namespace Factory {

std::string FactoryMethodHelloWorldFactory::helloWorld() {
	return "Hello World Factory";
}

HelloWorld* DesignPatterns::Factory::FactoryMethodHelloWorldFactory::createHelloWorld() {
	return new FactoryMethodHelloWorldFactory();
}

} /* namespace Factory */
} /* namespace DesignPatterns */
