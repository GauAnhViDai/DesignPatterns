/*
 * HelloWorldFlyWeightFactory.h
 *
 *  Created on: 3 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_02_STRUCTURALPATTERNS_FLYWEIGHT_HELLOWORLDFLYWEIGHTFACTORY_H_
#define DESIGNPATTERNS_02_STRUCTURALPATTERNS_FLYWEIGHT_HELLOWORLDFLYWEIGHTFACTORY_H_

#include "../../HelloWorld.h"
#include "HelloWorldFlyWeight.h"
#include <map>

namespace DesignPatterns {

namespace FlyWeight {

class HelloWorldFlyWeightFactory {
private:
	std::map<std::string,HelloWorld*> innerCache;

	HelloWorldFlyWeightFactory();
	HelloWorldFlyWeightFactory(HelloWorldFlyWeightFactory const&);
	void operator=(HelloWorldFlyWeightFactory const&);

	class HelloWorldFactoryHolder {
	public:
		static HelloWorldFlyWeightFactory *INSTANCE;
	};

public:
	static HelloWorldFlyWeightFactory &getInstance();
	DesignPatterns::HelloWorld* createHelloWorld(std::string value);
};

}  /* namespace FlyWeight */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_02_STRUCTURALPATTERNS_FLYWEIGHT_HELLOWORLDFLYWEIGHTFACTORY_H_ */
