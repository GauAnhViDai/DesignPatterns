/*
 * HelloWorldInterjectionState.h
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_03_BEHAVIORALPATTERNS_STATE_HELLOWORLDINTERJECTIONSTATE_H_
#define DESIGNPATTERNS_03_BEHAVIORALPATTERNS_STATE_HELLOWORLDINTERJECTIONSTATE_H_

#include "HelloWorldState.h"

namespace DesignPatterns {

namespace State {

class HelloWorldStateContext;
//: public HelloWorldState
class HelloWorldInterjectionState: public HelloWorldState {
public:
	HelloWorldInterjectionState();
	void append(HelloWorldStateContext &helloWorldStateContext,const std::string& word);
};


}  /* namespace State */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_03_BEHAVIORALPATTERNS_STATE_HELLOWORLDINTERJECTIONSTATE_H_ */
