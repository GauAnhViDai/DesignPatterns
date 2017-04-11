/*
 * HelloWorldInterjection.h
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_03_BEHAVIORALPATTERNS_MEDIATOR_HELLOWORLDINTERJECTION_H_
#define DESIGNPATTERNS_03_BEHAVIORALPATTERNS_MEDIATOR_HELLOWORLDINTERJECTION_H_

#include "../../HelloWorld.h"
#include "../../SplitHelloWorld.h"
#include "HelloWorldMediator.h"

namespace DesignPatterns {

namespace Mediator {

class HelloWorldMediator;

class HelloWorldInterjection: public DesignPatterns::HelloWorld, public
		DesignPatterns::SplitHelloWorld::HelloWorldInterjection {
private:
	HelloWorldMediator *helloWorldMediator;

	static std::string separator; // = " ";

	static std::string terminator; // = "!";

public:
	void setHelloWorldMediator(HelloWorldMediator *helloWorldMediator);

	std::string interjection();

	std::string helloWorld();
};

} /* namespace Mediator */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_03_BEHAVIORALPATTERNS_MEDIATOR_HELLOWORLDINTERJECTION_H_ */
