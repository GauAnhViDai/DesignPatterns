/*
 * HelloWorldCharacterElement.h
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_03_BEHAVIORALPATTERNS_VISITOR_HELLOWORLDCHARACTERELEMENT_H_
#define DESIGNPATTERNS_03_BEHAVIORALPATTERNS_VISITOR_HELLOWORLDCHARACTERELEMENT_H_

#include "HelloWorldElement.h"

namespace DesignPatterns {

namespace Visitor {

class HelloWorldCharacterElement: public HelloWorldElement {
private:
	char ch;
public:
	HelloWorldCharacterElement();
	HelloWorldCharacterElement(char& c);
	char getChar();
	void accept(HelloWorldVisitor *helloWorldVisitor);
};

}  /* namespace Visitor */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_03_BEHAVIORALPATTERNS_VISITOR_HELLOWORLDCHARACTERELEMENT_H_ */
