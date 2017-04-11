/*
 * HelloWorldBuilder.cpp
 *
 *  Created on: 22 déc. 2016
 *      Author: hnnguyen
 */

#include "HelloWorldBuilder.h"

namespace DesignPatterns {
namespace Builder {

std::string HelloWorldBuilder::strInterjection = "";
std::string HelloWorldBuilder::strObject = "";

HelloWorldBuilder::HelloWorldBuilder() {
}

HelloWorldBuilder* HelloWorldBuilder::builder() {
	return new HelloWorldBuilder();
}

HelloWorldBuilder* HelloWorldBuilder::getInterjection(
		std::string interjection) {
	strInterjection = interjection;
	return this;
}

HelloWorldBuilder* HelloWorldBuilder::getObject(std::string object) {
	strObject = object;
	return this;
}

HelloWorld* HelloWorldBuilder::getHelloWorld() {
	return new DesignPatterns::SplitHelloWorld(new HelloWorldBuilder::HelloWorldBuilderInterjection(),
			new HelloWorldBuilder::HelloWorldBuilderObject());
}

std::string HelloWorldBuilder::HelloWorldBuilderInterjection::interjection() {
	return strInterjection;
}

std::string HelloWorldBuilder::HelloWorldBuilderObject::object() {
	return strObject;
}


} /* namespace Builder */
} /* namespace DesignPatterns */
