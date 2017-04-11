/*
 * HelloWorldStrategyDesignPattern.h
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_03_BEHAVIORALPATTERNS_STRATEGY_HELLOWORLDSTRATEGYDESIGNPATTERN_H_
#define DESIGNPATTERNS_03_BEHAVIORALPATTERNS_STRATEGY_HELLOWORLDSTRATEGYDESIGNPATTERN_H_

#include "HelloWorldStrategy.h"

namespace DesignPatterns {

namespace Strategy {


class HelloWorldStrategyDesignPattern: public HelloWorldStrategy {
public:
	std::string helloWorld();
};

}  /* namespace Strategy */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_03_BEHAVIORALPATTERNS_STRATEGY_HELLOWORLDSTRATEGYDESIGNPATTERN_H_ */
