/*
 * HelloWorldObjectState.h
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_03_BEHAVIORALPATTERNS_STATE_HELLOWORLDOBJECTSTATE_H_
#define DESIGNPATTERNS_03_BEHAVIORALPATTERNS_STATE_HELLOWORLDOBJECTSTATE_H_

#include "HelloWorldState.h"

namespace DesignPatterns {

namespace State {

class HelloWorldStateContext;

class HelloWorldObjectState: public HelloWorldState {
public:
	void append(HelloWorldStateContext &helloWorldStateContext,const std::string& word);
};

}  /* namespace State */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_03_BEHAVIORALPATTERNS_STATE_HELLOWORLDOBJECTSTATE_H_ */
