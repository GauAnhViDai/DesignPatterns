/*
 * HelloWorldStrategyCpp.h
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_03_BEHAVIORALPATTERNS_STRATEGY_HELLOWORLDSTRATEGYCPP_H_
#define DESIGNPATTERNS_03_BEHAVIORALPATTERNS_STRATEGY_HELLOWORLDSTRATEGYCPP_H_

#include "HelloWorldStrategy.h"

namespace DesignPatterns {

namespace Strategy {

class HelloWorldStrategyCpp: public HelloWorldStrategy {
public:
	std::string helloWorld();
};

}  /* namespace Strategy */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_03_BEHAVIORALPATTERNS_STRATEGY_HELLOWORLDSTRATEGYCPP_H_ */
