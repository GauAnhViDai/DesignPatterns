/*
 * HelloWorldFlyWeight.h
 *
 *  Created on: 3 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_02_STRUCTURALPATTERNS_FLYWEIGHT_HELLOWORLDFLYWEIGHT_H_
#define DESIGNPATTERNS_02_STRUCTURALPATTERNS_FLYWEIGHT_HELLOWORLDFLYWEIGHT_H_

#include "../../HelloWorld.h"

namespace DesignPatterns {

namespace FlyWeight {

class HelloWorldFlyWeight: public DesignPatterns::HelloWorld {
private:
	std::string value;

public:
	HelloWorldFlyWeight(std::string value);
	std::string helloWorld();
};

}  /* namespace FlyWeight */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_02_STRUCTURALPATTERNS_FLYWEIGHT_HELLOWORLDFLYWEIGHT_H_ */
