/*
 * HelloWorldSingleton.cpp
 *
 *  Created on: 21 d�c. 2016
 *      Author: hnnguyen
 */

#include "HelloWorldSingleton.h"

namespace DesignPatterns {

namespace Singleton {

HelloWorldSingleton *HelloWorldSingleton::HelloWorldSingletonHolder::INSTANCE = new HelloWorldSingleton();

HelloWorldSingleton::HelloWorldSingleton(): DesignPatterns::HelloWorld() {
}

std::string HelloWorldSingleton::helloWorld() {
	return "Hello Singleton";
}

HelloWorldSingleton& HelloWorldSingleton::getInstance() {
	return *HelloWorldSingletonHolder::INSTANCE;
}

}

}
