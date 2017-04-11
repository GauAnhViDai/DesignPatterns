/*
 * HelloWorldStateContext.h
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_03_BEHAVIORALPATTERNS_STATE_HELLOWORLDSTATECONTEXT_H_
#define DESIGNPATTERNS_03_BEHAVIORALPATTERNS_STATE_HELLOWORLDSTATECONTEXT_H_

#include "../../HelloWorld.h"
//#include "HelloWorldState.h"
//#include "HelloWorldInterjectionState.h"
#include <sstream>

namespace DesignPatterns {

namespace State {

class HelloWorldState;
class HelloWorldInterjectionState;
class HelloWorldObjectState;

class HelloWorldStateContext: public DesignPatterns::HelloWorld {
private:
	std::stringstream ss;
	HelloWorldState *objHelloWorldState;

public:
	HelloWorldStateContext();
	HelloWorldStateContext* append(const std::string& word);
	HelloWorldStateContext* setState(HelloWorldState *helloWorldState);
	HelloWorldStateContext* appendWord(const std::string& word);
	std::string helloWorld();
};

}  /* namespace State */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_03_BEHAVIORALPATTERNS_STATE_HELLOWORLDSTATECONTEXT_H_ */
