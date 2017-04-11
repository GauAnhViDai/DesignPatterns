/*
 * HelloWorldImpl.h
 *
 *  Created on: 3 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_02_STRUCTURALPATTERNS_BRIDGE_HELLOWORLDIMPL_H_
#define DESIGNPATTERNS_02_STRUCTURALPATTERNS_BRIDGE_HELLOWORLDIMPL_H_

#include <iostream>

namespace DesignPatterns {

namespace Bridge {

class HelloWorldImpl {
public:
	virtual ~HelloWorldImpl() = default;
	virtual std::string generate() = 0;
};

}  /* namespace Bridge */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_02_STRUCTURALPATTERNS_BRIDGE_HELLOWORLDIMPL_H_ */
