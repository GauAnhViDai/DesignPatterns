/*
 * HelloWorldAdapter.cpp
 *
 *  Created on: 3 avr. 2017
 *      Author: hnnguyen
 */

#include "HelloWorldAdapter.h"

namespace DesignPatterns {

namespace Adapter {

DesignPatterns::Adapter::HelloWorldAdapter::HelloWorldAdapter(
		HelloAdapterDesignPattern& helloAdapterDesignPattern):helloAdapterDesignPattern(helloAdapterDesignPattern) {
}

std::string DesignPatterns::Adapter::HelloWorldAdapter::helloWorld() {
	return helloAdapterDesignPattern.helloDesignPattern();
}

} /* namespace Adapter */

} /* namespace DesignPatterns */
