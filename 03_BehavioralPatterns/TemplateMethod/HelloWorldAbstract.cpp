/*
 * HelloWorldAbstract.cpp
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#include "HelloWorldAbstract.h"

namespace DesignPatterns {

namespace TemplateMethod {

std::string HelloWorldAbstract::helloWorld() {
	std::stringstream ss;
	ss << getInterjection();
	ss << getSeperator();
	ss << getObject();
	ss << getTerminator();
	return ss.str();
}

}  /* namespace TemplateMethod */

} /* namespace DesignPatterns */

