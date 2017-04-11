/*
 * HelloWorldElement.h
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_03_BEHAVIORALPATTERNS_VISITOR_HELLOWORLDELEMENT_H_
#define DESIGNPATTERNS_03_BEHAVIORALPATTERNS_VISITOR_HELLOWORLDELEMENT_H_

//#include "HelloWorldVisitor.h"

namespace DesignPatterns {

namespace Visitor {

class HelloWorldVisitor;

class HelloWorldElement {
public:
	virtual ~HelloWorldElement() = default;
	virtual void accept(HelloWorldVisitor *visitor) = 0;
};

}  /* namespace Visitor */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_03_BEHAVIORALPATTERNS_VISITOR_HELLOWORLDELEMENT_H_ */
