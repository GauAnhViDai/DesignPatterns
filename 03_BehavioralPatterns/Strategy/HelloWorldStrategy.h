/*
 * HelloWorldStrategy.h
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_03_BEHAVIORALPATTERNS_STRATEGY_HELLOWORLDSTRATEGY_H_
#define DESIGNPATTERNS_03_BEHAVIORALPATTERNS_STRATEGY_HELLOWORLDSTRATEGY_H_

#include "../../HelloWorld.h"

namespace DesignPatterns {

namespace Strategy {

class HelloWorldStrategy:public DesignPatterns::HelloWorld {
public:
	virtual ~HelloWorldStrategy() = default;
};

}  /* namespace Strategy */

}  /* namespace DesignPatterns */



#endif /* DESIGNPATTERNS_03_BEHAVIORALPATTERNS_STRATEGY_HELLOWORLDSTRATEGY_H_ */
