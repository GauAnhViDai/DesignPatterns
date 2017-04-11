/*
 * HelloWorldFinalizedState.cpp
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#include "HelloWorldFinalizedState.h"

namespace DesignPatterns {

namespace State {

void HelloWorldFinalizedState::append(
		HelloWorldStateContext &helloWorldStateContext,const std::string& word) {
	std::cout << "Finalized";
}

} /* namespace State */

} /* namespace DesignPatterns */

