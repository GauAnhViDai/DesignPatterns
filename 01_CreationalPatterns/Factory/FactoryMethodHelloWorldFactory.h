/*
 * FactoryMethodHelloWorldFactory.h
 *
 *  Created on: 31 mars 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_01_CREATIONALPATTERNS_FACTORY_FACTORYMETHODHELLOWORLDFACTORY_H_
#define DESIGNPATTERNS_01_CREATIONALPATTERNS_FACTORY_FACTORYMETHODHELLOWORLDFACTORY_H_

#include "HelloWorldFactory.h"

namespace DesignPatterns {

namespace Factory {

class FactoryMethodHelloWorldFactory: public HelloWorldFactory {
public:
	std::string helloWorld();
	HelloWorld* createHelloWorld();
};

} /* namespace Factory */
} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_01_CREATIONALPATTERNS_FACTORY_FACTORYMETHODHELLOWORLDFACTORY_H_ */
