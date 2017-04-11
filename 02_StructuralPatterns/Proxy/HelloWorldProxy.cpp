/*
 * HelloWorldProxy.cpp
 *
 *  Created on: 3 avr. 2017
 *      Author: hnnguyen
 */

#include "HelloWorldProxy.h"

namespace DesignPatterns {

namespace Proxy {

HelloWorldProxy::HelloWorldProxy(
		DesignPatterns::HelloWorld* helloWorld) {
	this->pHelloWorld = helloWorld;
}

std::string HelloWorldProxy::helloWorld() {
	return pHelloWorld->helloWorld().substr(0,pHelloWorld->helloWorld().find_first_of(" ")) + " Proxy!";
}

std::string HelloWorldProxy::DefaultHelloWorld::helloWorld() {
	return "Hello World!";
}

}  /* namespace Proxy */

} /* namespace DesignPatterns */
