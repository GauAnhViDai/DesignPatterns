/*
 * SplitHelloWorldFactory.h
 *
 *  Created on: 30 mars 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_01_CREATIONALPATTERNS_ABSTRACTFACTORY_SPLITHELLOWORLDFACTORY_H_
#define DESIGNPATTERNS_01_CREATIONALPATTERNS_ABSTRACTFACTORY_SPLITHELLOWORLDFACTORY_H_

#include "../../SplitHelloWorld.h"

namespace DesignPatterns {

namespace AbstractFactory {

class SplitHelloWorldFactory {
public:

	virtual ~SplitHelloWorldFactory() = default;
	virtual DesignPatterns::SplitHelloWorld::HelloWorldInterjection* createHelloWorldInterjection() = 0;
	virtual DesignPatterns::SplitHelloWorld::HelloWorldObject* createHelloWorldObject() = 0;
};

} /* namespace AbstractFactory */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_01_CREATIONALPATTERNS_ABSTRACTFACTORY_SPLITHELLOWORLDFACTORY_H_ */
