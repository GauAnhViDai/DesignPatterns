/*
 * HelloWorldFactory.h
 *
 *  Created on: 31 mars 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_01_CREATIONALPATTERNS_FACTORY_HELLOWORLDFACTORY_H_
#define DESIGNPATTERNS_01_CREATIONALPATTERNS_FACTORY_HELLOWORLDFACTORY_H_

#include "../../HelloWorld.h"

namespace DesignPatterns {
namespace Factory {
class HelloWorldFactory: public DesignPatterns::HelloWorld {
public:
	HelloWorld* createHelloWorld();

	std::string helloWorld();
};
}
}
#endif /* DESIGNPATTERNS_01_CREATIONALPATTERNS_FACTORY_HELLOWORLDFACTORY_H_ */
