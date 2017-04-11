/*
 * HelloWorldInterjectionHandler.h
 *
 *  Created on: 3 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_03_BEHAVIORALPATTERNS_CHAINRESPONSIBILITY_HELLOWORLDINTERJECTIONHANDLER_H_
#define DESIGNPATTERNS_03_BEHAVIORALPATTERNS_CHAINRESPONSIBILITY_HELLOWORLDINTERJECTIONHANDLER_H_

#include "HelloWorldHandler.h"

namespace DesignPatterns {

namespace ChainResponsibility {

class HelloWorldInterjectionHandler: public HelloWorldHandler {
public:
//	HelloWorldInterjectionHandler(){}
	void handle(std::string& sstream);
};


}  /* namespace ChainResponsibility */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_03_BEHAVIORALPATTERNS_CHAINRESPONSIBILITY_HELLOWORLDINTERJECTIONHANDLER_H_ */
