/*
 * HelloWorldCharacterElement.cpp
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#include "HelloWorldCharacterElement.h"
#include "HelloWorldVisitor.h"

namespace DesignPatterns {

namespace Visitor {

HelloWorldCharacterElement::HelloWorldCharacterElement() {}

HelloWorldCharacterElement::HelloWorldCharacterElement(
		char& c):ch(c) {
}

char HelloWorldCharacterElement::getChar() {
	return ch;
}

void HelloWorldCharacterElement::accept(
		HelloWorldVisitor *helloWorldVisitor) {
	helloWorldVisitor->visit(this);
}


}  /* namespace Visitor */

} /* namespace DesignPatterns */
