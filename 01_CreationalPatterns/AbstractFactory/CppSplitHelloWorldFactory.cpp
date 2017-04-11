/*
 * CppSplitHelloWorldFactory.cpp
 *
 *  Created on: 3 avr. 2017
 *      Author: hnnguyen
 */

#include "CppSplitHelloWorldFactory.h"

namespace DesignPatterns {

namespace AbstractFactory {

DesignPatterns::SplitHelloWorld::HelloWorldInterjection* CppSplitHelloWorldFactory::createHelloWorldInterjection() {
	return new DesignPatterns::SplitHelloWorld::DefaultInterjection();
}

DesignPatterns::SplitHelloWorld::HelloWorldObject* CppSplitHelloWorldFactory::createHelloWorldObject() {
	return new CppHelloWorldObject();
}

std::string CppSplitHelloWorldFactory::CppHelloWorldObject::object() {
	return "Cpp";
}

} /* namespace AbstractFactory */

} /* namespace DesignPatterns */
