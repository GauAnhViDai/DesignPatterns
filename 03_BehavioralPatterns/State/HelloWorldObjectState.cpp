/*
 * HelloWorldObjectState.cpp
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#include "HelloWorldObjectState.h"
#include "HelloWorldStateContext.h"
#include "HelloWorldFinalizedState.h"

namespace DesignPatterns {
namespace State {

void HelloWorldObjectState::append(HelloWorldStateContext &helloWorldStateContext,const std::string& word) {
	helloWorldStateContext.append(word)->append("!")->setState(new HelloWorldFinalizedState());
}

} /* namespace State */
} /* namespace DesignPatterns */
