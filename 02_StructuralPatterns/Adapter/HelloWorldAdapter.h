/*
 * HelloWorldAdapter.h
 *
 *  Created on: 3 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_02_STRUCTURALPATTERNS_ADAPTER_HELLOWORLDADAPTER_H_
#define DESIGNPATTERNS_02_STRUCTURALPATTERNS_ADAPTER_HELLOWORLDADAPTER_H_

#include "HelloAdapterDesignPattern.h"
#include "../../HelloWorld.h"

namespace DesignPatterns {

namespace Adapter {

class HelloWorldAdapter: public HelloWorld {
private:
	HelloAdapterDesignPattern helloAdapterDesignPattern;
public:
	HelloWorldAdapter(HelloAdapterDesignPattern &helloAdapterDesignPattern);
	std::string helloWorld();
};

} /* namespace Adapter */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_02_STRUCTURALPATTERNS_ADAPTER_HELLOWORLDADAPTER_H_ */
