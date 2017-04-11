/*
 * HelloWorldStateContext.cpp
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#include "HelloWorldStateContext.h"
#include "HelloWorldInterjectionState.h"
#include "HelloWorldState.h"

namespace DesignPatterns {

namespace State {

std::string HelloWorldStateContext::helloWorld() {
	return ss.str();
}

HelloWorldStateContext::HelloWorldStateContext() {
	objHelloWorldState = new HelloWorldInterjectionState();
}

HelloWorldStateContext* HelloWorldStateContext::append(const std::string& word) {
	ss << word;
	return this;
}

HelloWorldStateContext* HelloWorldStateContext::setState(
		HelloWorldState* helloWorldState) {
	objHelloWorldState = helloWorldState;
	return this;
}

HelloWorldStateContext* HelloWorldStateContext::appendWord(
		const std::string& word) {
	this->objHelloWorldState->append(*this,word);
	return this;
}


}  /* namespace State */

} /* namespace DesignPatterns */
