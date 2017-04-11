/*
 * DesignPatternSplitHelloWorldFactory.h
 *
 *  Created on: 3 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_01_CREATIONALPATTERNS_ABSTRACTFACTORY_DESIGNPATTERNSPLITHELLOWORLDFACTORY_H_
#define DESIGNPATTERNS_01_CREATIONALPATTERNS_ABSTRACTFACTORY_DESIGNPATTERNSPLITHELLOWORLDFACTORY_H_

#include "SplitHelloWorldFactory.h"

namespace DesignPatterns {

namespace AbstractFactory {

class DesignPatternSplitHelloWorldFactory: public SplitHelloWorldFactory {
public:
	DesignPatterns::SplitHelloWorld::HelloWorldInterjection* createHelloWorldInterjection();
	DesignPatterns::SplitHelloWorld::HelloWorldObject* createHelloWorldObject();

	class DesignPatternHelloWorldObject: public DesignPatterns::SplitHelloWorld::HelloWorldObject {
	public:
		//		CppHelloWorldObject() {}
		std::string object();
	};
};

} /* namespace AbstractFactory */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_01_CREATIONALPATTERNS_ABSTRACTFACTORY_DESIGNPATTERNSPLITHELLOWORLDFACTORY_H_ */
