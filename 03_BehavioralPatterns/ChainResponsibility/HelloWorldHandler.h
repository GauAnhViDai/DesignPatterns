/*
 * HelloWorldHandler.h
 *
 *  Created on: 3 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_03_BEHAVIORALPATTERNS_CHAINRESPONSIBILITY_HELLOWORLDHANDLER_H_
#define DESIGNPATTERNS_03_BEHAVIORALPATTERNS_CHAINRESPONSIBILITY_HELLOWORLDHANDLER_H_

#include <sstream>
#include "../../HelloWorld.h"

namespace DesignPatterns {

namespace ChainResponsibility {

class HelloWorldHandler: public HelloWorld {
private:
	HelloWorldHandler* next;

public:
	HelloWorldHandler* setNext(HelloWorldHandler* next);
	virtual ~HelloWorldHandler() = default;

	virtual void handle(std::string& str) = 0;

	std::string helloWorld();
};

} /* namespace ChainResponsibility */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_03_BEHAVIORALPATTERNS_CHAINRESPONSIBILITY_HELLOWORLDHANDLER_H_ */
