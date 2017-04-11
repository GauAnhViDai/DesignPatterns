/*
 * CppHelloWorldImpl.h
 *
 *  Created on: 3 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_02_STRUCTURALPATTERNS_BRIDGE_CPPHELLOWORLDIMPL_H_
#define DESIGNPATTERNS_02_STRUCTURALPATTERNS_BRIDGE_CPPHELLOWORLDIMPL_H_

#include "HelloWorldImpl.h"

namespace DesignPatterns {

namespace Bridge {

class CppHelloWorldImpl: public HelloWorldImpl {
public:
	std::string generate();
};

} /* namespace Bridge */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_02_STRUCTURALPATTERNS_BRIDGE_CPPHELLOWORLDIMPL_H_ */
