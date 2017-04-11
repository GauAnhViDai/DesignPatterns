/*
 * HelloWorldObject.h
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_03_BEHAVIORALPATTERNS_MEDIATOR_HELLOWORLDOBJECT_H_
#define DESIGNPATTERNS_03_BEHAVIORALPATTERNS_MEDIATOR_HELLOWORLDOBJECT_H_

#include "../../HelloWorld.h"
#include "../../SplitHelloWorld.h"
#include "HelloWorldMediator.h"

namespace DesignPatterns {

namespace Mediator {

class HelloWorldObject: public DesignPatterns::HelloWorld, public
		DesignPatterns::SplitHelloWorld::HelloWorldObject {

private:
	HelloWorldMediator *helloWorldMediator;

	static std::string separator; // = " ";

	static std::string terminator; // = "!";

public:
	void setHelloWorldMediator(HelloWorldMediator *helloWorldMediator);

	std::string object();

	std::string helloWorld();
};

} /* namespace Mediator */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_03_BEHAVIORALPATTERNS_MEDIATOR_HELLOWORLDOBJECT_H_ */
