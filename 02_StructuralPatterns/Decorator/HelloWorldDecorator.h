/*
 * HelloWorldDecorator.h
 *
 *  Created on: 3 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_02_STRUCTURALPATTERNS_DECORATOR_HELLOWORLDDECORATOR_H_
#define DESIGNPATTERNS_02_STRUCTURALPATTERNS_DECORATOR_HELLOWORLDDECORATOR_H_

#include "../../HelloWorld.h"

namespace DesignPatterns {

namespace Decorator {

class HelloWorldDecorator: public DesignPatterns::HelloWorld {
private:
	DesignPatterns::HelloWorld *pHelloWorld;
public:
	HelloWorldDecorator(DesignPatterns::HelloWorld *pHelloWorld);

	std::string helloWorld();

	std::string helloDecorator();

	class DefaultHelloWorld:public HelloWorld {
	public:
		std::string helloWorld();
	};
};

}  // namespace Decorator

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_02_STRUCTURALPATTERNS_DECORATOR_HELLOWORLDDECORATOR_H_ */
