/*
 * HelloWorldBridge.cpp
 *
 *  Created on: 3 avr. 2017
 *      Author: hnnguyen
 */

#include "HelloWorldBridge.h"

namespace DesignPatterns {

namespace Bridge {

HelloWorldBridge::HelloWorldBridge(HelloWorldImpl *helloWorldImp): DesignPatterns::HelloWorld() {
	this->helloWorldImp = helloWorldImp;
}

std::string HelloWorldBridge::helloWorld() {
	return helloWorldImp->generate();
}

} /* namespace Bridge */

} /* namespace DesignPatterns */
