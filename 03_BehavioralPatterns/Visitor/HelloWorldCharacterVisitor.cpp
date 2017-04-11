/*
 * HelloWorldCharacterVisitor.cpp
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#include "HelloWorldCharacterVisitor.h"
#include "HelloWorldCharacterElement.h"
#include "HelloWorldElement.h"

namespace DesignPatterns {

namespace Visitor {

DesignPatterns::Visitor::HelloWorldCharacterVisitor::HelloWorldCharacterVisitor() {
}

std::string DesignPatterns::Visitor::HelloWorldCharacterVisitor::helloWorld() {
	return ss.str();
}

void DesignPatterns::Visitor::HelloWorldCharacterVisitor::visit(
		HelloWorldElement *helloWorldElement) {
	if (HelloWorldCharacterElement *helloWorldCharacterElement = dynamic_cast<HelloWorldCharacterElement*> (helloWorldElement)) {
		ss << helloWorldCharacterElement->getChar();
	}
}


}  /* namespace Visitor */

} /* namespace DesignPatterns */
