/*
 * DesignPatternSplitHelloWorldFactory.cpp
 *
 *  Created on: 3 avr. 2017
 *      Author: hnnguyen
 */

#include "DesignPatternSplitHelloWorldFactory.h"

namespace DesignPatterns {

namespace AbstractFactory {

DesignPatterns::SplitHelloWorld::HelloWorldInterjection* DesignPatterns::AbstractFactory::DesignPatternSplitHelloWorldFactory::createHelloWorldInterjection() {
	return new DesignPatterns::SplitHelloWorld::DefaultInterjection();
}

DesignPatterns::SplitHelloWorld::HelloWorldObject* DesignPatterns::AbstractFactory::DesignPatternSplitHelloWorldFactory::createHelloWorldObject() {
	return new DesignPatternHelloWorldObject();
}

std::string DesignPatterns::AbstractFactory::DesignPatternSplitHelloWorldFactory::DesignPatternHelloWorldObject::object() {
	return "Abstract Factory";
}

} /* namespace AbstractFactory */

} /* namespace DesignPatterns */
