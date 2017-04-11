/*
 * HelloWorldStrategyContext.h
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_03_BEHAVIORALPATTERNS_STRATEGY_HELLOWORLDSTRATEGYCONTEXT_H_
#define DESIGNPATTERNS_03_BEHAVIORALPATTERNS_STRATEGY_HELLOWORLDSTRATEGYCONTEXT_H_

#include "../../HelloWorld.h"
#include "HelloWorldStrategy.h"

namespace DesignPatterns {

namespace Strategy {

class HelloWorldStrategyContext: public DesignPatterns::HelloWorld{
private:
	HelloWorldStrategy *helloWorldStrategy;
public:
	HelloWorldStrategyContext(HelloWorldStrategy *helloWorldStrategy);
	std::string helloWorld();
	void reset(HelloWorldStrategy *helloWorldStrategy);
};

}  /* namespace Strategy */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_03_BEHAVIORALPATTERNS_STRATEGY_HELLOWORLDSTRATEGYCONTEXT_H_ */
