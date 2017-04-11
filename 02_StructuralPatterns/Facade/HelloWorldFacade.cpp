/*
 * HelloWorldFacade.cpp
 *
 *  Created on: 3 avr. 2017
 *      Author: hnnguyen
 */

#include "HelloWorldFacade.h"

namespace DesignPatterns {

namespace Facade {

HelloWorldFacade* HelloWorldFacade::HelloWorldFacadeInstanceHolder::INSTANCE = new HelloWorldFacade();

HelloWorldFacade::HelloWorldFacade() {
}

HelloWorldFacade *HelloWorldFacade::getInstance() {
	return HelloWorldFacade::HelloWorldFacadeInstanceHolder::INSTANCE;
}

DesignPatterns::HelloWorld* HelloWorldFacade::facadeHelloWorld() {
	return DesignPatterns::Builder::HelloWorldBuilder::builder()->getInterjection("Hello")->getObject("Facade")->getHelloWorld();
}

} /* namespace Facade */

} /* namespace DesignPatterns */
