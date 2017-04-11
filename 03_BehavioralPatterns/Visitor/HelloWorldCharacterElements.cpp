/*
 * HelloWorldCharacterElements.cpp
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#include "HelloWorldCharacterElements.h"
#include "HelloWorldVisitor.h"

namespace DesignPatterns {

namespace Visitor {

HelloWorldCharacterElements::HelloWorldCharacterElements(std::string chars) {
	for (char& x: chars) {
		helloWorldCharacterElements.push_back(new HelloWorldCharacterElement(x));
	}
}

void HelloWorldCharacterElements::accept(
		HelloWorldVisitor* visitor) {
	for (auto x: helloWorldCharacterElements) {
		visitor->visit(x);
	}
}


}  /* namespace Visitor */

} /* namespace DesignPatterns */
