/*
 * HelloWorldInterjectionState.cpp
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#include "HelloWorldInterjectionState.h"
#include "HelloWorldObjectState.h"
#include "HelloWorldStateContext.h"

namespace DesignPatterns {

namespace State {

HelloWorldInterjectionState::HelloWorldInterjectionState() : HelloWorldState() {

}

void HelloWorldInterjectionState::append(HelloWorldStateContext &helloWorldStateContext,const std::string& word) {
	helloWorldStateContext.append(word)->append(" ")->setState(new HelloWorldObjectState());
};


}  /* namespace State */
} /* namespace DesignPatterns */
