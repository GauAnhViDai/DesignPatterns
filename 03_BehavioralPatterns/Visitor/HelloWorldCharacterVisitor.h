/*
 * HelloWorldCharacterVisitor.h
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_03_BEHAVIORALPATTERNS_VISITOR_HELLOWORLDCHARACTERVISITOR_H_
#define DESIGNPATTERNS_03_BEHAVIORALPATTERNS_VISITOR_HELLOWORLDCHARACTERVISITOR_H_

#include <sstream>
#include "HelloWorldVisitor.h"
#include "../../HelloWorld.h"

namespace DesignPatterns {

namespace Visitor {

class HelloWorldCharacterVisitor: public HelloWorldVisitor, public HelloWorld {
private:
	std::stringstream ss;
public:
	HelloWorldCharacterVisitor();
	std::string helloWorld();
	void visit(HelloWorldElement *helloWorldElement);
};

}  /* namespace Visitor */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_03_BEHAVIORALPATTERNS_VISITOR_HELLOWORLDCHARACTERVISITOR_H_ */
