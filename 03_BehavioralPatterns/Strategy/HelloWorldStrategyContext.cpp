/*
 * HelloWorldStrategyContext.cpp
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#include "HelloWorldStrategyContext.h"

namespace DesignPatterns {

namespace Strategy {

HelloWorldStrategyContext::HelloWorldStrategyContext(
		HelloWorldStrategy* objHelloWorldStrategy) {
	helloWorldStrategy = objHelloWorldStrategy;
}

std::string HelloWorldStrategyContext::helloWorld() {
	return helloWorldStrategy->helloWorld();
}

void HelloWorldStrategyContext::reset(HelloWorldStrategy *objHelloWorldStrategy) {
	helloWorldStrategy = objHelloWorldStrategy;
}


}  /* namespace Strategy */

} /* namespace DesignPatterns */
