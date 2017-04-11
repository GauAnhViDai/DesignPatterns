/*
 * HelloWorldMediator.h
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_03_BEHAVIORALPATTERNS_MEDIATOR_HELLOWORLDMEDIATOR_H_
#define DESIGNPATTERNS_03_BEHAVIORALPATTERNS_MEDIATOR_HELLOWORLDMEDIATOR_H_

#include "../../SplitHelloWorld.h"

namespace DesignPatterns {

namespace Mediator {

class HelloWorldMediator {
private:
	DesignPatterns::SplitHelloWorld::HelloWorldInterjection *objHelloWorldInterjection;
	DesignPatterns::SplitHelloWorld::HelloWorldObject *objHelloWorldObject;

public:
	HelloWorldMediator(DesignPatterns::SplitHelloWorld::HelloWorldInterjection &helloWorldInterjection, DesignPatterns::SplitHelloWorld::HelloWorldObject &helloWorldObject);
	std::string interjection();
	std::string object();
};

}  /* namespace Mediator */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_03_BEHAVIORALPATTERNS_MEDIATOR_HELLOWORLDMEDIATOR_H_ */
