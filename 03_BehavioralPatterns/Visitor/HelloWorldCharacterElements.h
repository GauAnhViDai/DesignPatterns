/*
 * HelloWorldCharacterElements.h
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_03_BEHAVIORALPATTERNS_VISITOR_HELLOWORLDCHARACTERELEMENTS_H_
#define DESIGNPATTERNS_03_BEHAVIORALPATTERNS_VISITOR_HELLOWORLDCHARACTERELEMENTS_H_

#include <iostream>
#include <vector>
#include "HelloWorldCharacterElement.h"

namespace DesignPatterns {

namespace Visitor {

class HelloWorldCharacterElements: public HelloWorldCharacterElement {
private:
	std::vector<HelloWorldCharacterElement*> helloWorldCharacterElements;
public:
//	HelloWorldCharacterElements(std::vector<char> chars);
	HelloWorldCharacterElements(std::string chars);
	void accept(HelloWorldVisitor* visitor);
};

}  /* namespace Visitor */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_03_BEHAVIORALPATTERNS_VISITOR_HELLOWORLDCHARACTERELEMENTS_H_ */
