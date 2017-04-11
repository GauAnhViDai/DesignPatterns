/*
 * HelloWorldVisitor.h
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_03_BEHAVIORALPATTERNS_VISITOR_HELLOWORLDVISITOR_H_
#define DESIGNPATTERNS_03_BEHAVIORALPATTERNS_VISITOR_HELLOWORLDVISITOR_H_

//#include "HelloWorldElement.h"

namespace DesignPatterns {

namespace Visitor {

class HelloWorldElement;

class HelloWorldVisitor {
public:
	virtual ~HelloWorldVisitor() = default;
	virtual void visit(HelloWorldElement *helloWorldElement) = 0;
};

}  /* namespace Visitor */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_03_BEHAVIORALPATTERNS_VISITOR_HELLOWORLDVISITOR_H_ */
