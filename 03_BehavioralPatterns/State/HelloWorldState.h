/*
 * HelloWorldState.h
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_03_BEHAVIORALPATTERNS_STATE_HELLOWORLDSTATE_H_
#define DESIGNPATTERNS_03_BEHAVIORALPATTERNS_STATE_HELLOWORLDSTATE_H_

//#include "HelloWorldStateContext.h"
#include <iostream>

namespace DesignPatterns {

namespace State {

class HelloWorldStateContext;

class HelloWorldState {
public:
	virtual ~HelloWorldState() = default;
	virtual void append(HelloWorldStateContext &helloWorldStateContext, const std::string& word) = 0;
};

}  /* namespace State */

} /* namespace DesignPatterns */


#endif /* DESIGNPATTERNS_03_BEHAVIORALPATTERNS_STATE_HELLOWORLDSTATE_H_ */
