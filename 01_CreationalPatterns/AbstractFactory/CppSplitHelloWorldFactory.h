/*
 * CppSplitHelloWorldFactory.h
 *
 *  Created on: 3 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_01_CREATIONALPATTERNS_ABSTRACTFACTORY_CPPSPLITHELLOWORLDFACTORY_H_
#define DESIGNPATTERNS_01_CREATIONALPATTERNS_ABSTRACTFACTORY_CPPSPLITHELLOWORLDFACTORY_H_

#include "SplitHelloWorldFactory.h"

namespace DesignPatterns {

namespace AbstractFactory {

class CppSplitHelloWorldFactory: public SplitHelloWorldFactory {
public:
	DesignPatterns::SplitHelloWorld::HelloWorldInterjection* createHelloWorldInterjection();
	DesignPatterns::SplitHelloWorld::HelloWorldObject* createHelloWorldObject();

	class CppHelloWorldObject: public DesignPatterns::SplitHelloWorld::HelloWorldObject {
	public:
//		CppHelloWorldObject() {}
		std::string object();
	};
};

} /* namespace AbstractFactory */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_01_CREATIONALPATTERNS_ABSTRACTFACTORY_CPPSPLITHELLOWORLDFACTORY_H_ */
