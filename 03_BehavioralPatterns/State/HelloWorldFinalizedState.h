/*
 * HelloWorldFinalizedState.h
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_03_BEHAVIORALPATTERNS_STATE_HELLOWORLDFINALIZEDSTATE_H_
#define DESIGNPATTERNS_03_BEHAVIORALPATTERNS_STATE_HELLOWORLDFINALIZEDSTATE_H_

#include "HelloWorldState.h"

namespace DesignPatterns {

namespace State {

class HelloWorldStateContext;

class HelloWorldFinalizedState: public HelloWorldState {
public:
	void append(HelloWorldStateContext &helloWorldStateContext, const std::string& word);
};

} /* namespace State */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_03_BEHAVIORALPATTERNS_STATE_HELLOWORLDFINALIZEDSTATE_H_ */
