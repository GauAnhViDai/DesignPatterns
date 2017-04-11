/*
 * HelloWorldPrototype.cpp
 *
 *  Created on: 17 janv. 2017
 *      Author: hnnguyen
 */

#include <iostream>
#include "HelloWorldPrototype.h"

namespace DesignPatterns {

namespace Prototype {

HelloWorldPrototype *HelloWorldPrototype::PROTOTYPE = new HelloWorldPrototype("Hello Prototype!");

HelloWorldPrototype::HelloWorldPrototype(
		std::string helloWorld): strHelloWorld(helloWorld){
}

DesignPatterns::HelloWorld* DesignPatterns::Prototype::HelloWorldPrototype::clone() {
	return new HelloWorldPrototype(this->strHelloWorld);
}

std::string DesignPatterns::Prototype::HelloWorldPrototype::helloWorld() {
	return strHelloWorld;
}

}

}
