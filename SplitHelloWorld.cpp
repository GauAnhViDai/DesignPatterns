/*
 * SplitHelloWorld.cpp
 *
 *  Created on: 30 mars 2017
 *      Author: hnnguyen
 */

#include "SplitHelloWorld.h"

namespace DesignPatterns {

const std::string SplitHelloWorld::separator = " ";
const std::string SplitHelloWorld::terminator = "!";

std::string SplitHelloWorld::helloWorld() {
	return helloWorldInterjection->interjection() + separator
			+ helloWorldObject->object() + terminator;
}

std::string SplitHelloWorld::DefaultInterjection::interjection() {
	return "Hello";
}
} /* namespace DesignPatterns */
