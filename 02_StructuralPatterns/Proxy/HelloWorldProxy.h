/*
 * HelloWorldProxy.h
 *
 *  Created on: 3 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_02_STRUCTURALPATTERNS_PROXY_HELLOWORLDPROXY_H_
#define DESIGNPATTERNS_02_STRUCTURALPATTERNS_PROXY_HELLOWORLDPROXY_H_

#include "../../HelloWorld.h"

namespace DesignPatterns {

namespace Proxy {

class HelloWorldProxy: public HelloWorld {
private:
	DesignPatterns::HelloWorld *pHelloWorld;

public:
	HelloWorldProxy(DesignPatterns::HelloWorld *helloWorld);

	std::string helloWorld();

	class DefaultHelloWorld: public DesignPatterns::HelloWorld {
	public:
		std::string helloWorld();
	};
};

}  /* namespace Proxy */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_02_STRUCTURALPATTERNS_PROXY_HELLOWORLDPROXY_H_ */
