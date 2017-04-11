/*
 * HelloWorldFlyWeightFactory.cpp
 *
 *  Created on: 3 avr. 2017
 *      Author: hnnguyen
 */

#include "HelloWorldFlyWeightFactory.h"

namespace DesignPatterns {

namespace FlyWeight {

HelloWorldFlyWeightFactory::HelloWorldFlyWeightFactory() {
}

HelloWorldFlyWeightFactory& HelloWorldFlyWeightFactory::getInstance() {
	return *HelloWorldFactoryHolder::INSTANCE;
}

DesignPatterns::HelloWorld* HelloWorldFlyWeightFactory::createHelloWorld(
		std::string value) {
	auto search = innerCache.find(value);
	if (search != innerCache.end()) {
		return search->second;
	} else {
		HelloWorldFlyWeight *helloWorldFlyWeight = new HelloWorldFlyWeight(value);
		innerCache.insert(std::pair<std::string,HelloWorld*>(value,helloWorldFlyWeight));
		return helloWorldFlyWeight;
	}
}

HelloWorldFlyWeightFactory* HelloWorldFlyWeightFactory::HelloWorldFactoryHolder::INSTANCE = new HelloWorldFlyWeightFactory();

}  /* namespace FlyWeight */

} /* namespace DesignPatterns */
