/*
 * HelloWorldTemplateMethod.cpp
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#include "HelloWorldTemplateMethod.h"

namespace DesignPatterns {

namespace TemplateMethod {

std::string HelloWorldTemplateMethod::getInterjection() {
	return "Hello";
}

std::string HelloWorldTemplateMethod::getSeperator() {
	return " ";
}

std::string HelloWorldTemplateMethod::getObject() {
	return "Template Method";
}

std::string HelloWorldTemplateMethod::getTerminator() {
	return "!";
}


}  /* namespace TemplateMethod */

} /* namespace DesignPatterns */
