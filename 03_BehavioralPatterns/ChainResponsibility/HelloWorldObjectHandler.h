/*
 * HelloWorldObjectHandler.h
 *
 *  Created on: 3 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_03_BEHAVIORALPATTERNS_CHAINRESPONSIBILITY_HELLOWORLDOBJECTHANDLER_H_
#define DESIGNPATTERNS_03_BEHAVIORALPATTERNS_CHAINRESPONSIBILITY_HELLOWORLDOBJECTHANDLER_H_

#include "HelloWorldHandler.h"

namespace DesignPatterns {

namespace ChainResponsibility {

class HelloWorldObjectHandler: public HelloWorldHandler  {
public:
//	HelloWorldObjectHandler(){}
	void handle(std::string& sstream);
};

} /* namespace ChainResponsibility */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_03_BEHAVIORALPATTERNS_CHAINRESPONSIBILITY_HELLOWORLDOBJECTHANDLER_H_ */
