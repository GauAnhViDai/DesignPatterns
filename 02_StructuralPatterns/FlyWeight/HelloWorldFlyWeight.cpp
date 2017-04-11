/*
 * HelloWorldFlyWeight.cpp
 *
 *  Created on: 3 avr. 2017
 *      Author: hnnguyen
 */

#include "HelloWorldFlyWeight.h"

namespace DesignPatterns {

namespace FlyWeight {

DesignPatterns::FlyWeight::HelloWorldFlyWeight::HelloWorldFlyWeight(
		std::string value): value(value) {
}

std::string DesignPatterns::FlyWeight::HelloWorldFlyWeight::helloWorld() {
	return value;
}


}  /* namespace FlyWeight */
} /* namespace DesignPatterns */

