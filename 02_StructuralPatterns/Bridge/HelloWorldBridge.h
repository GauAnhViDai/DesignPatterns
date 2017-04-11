/*
 * HelloWorldBridge.h
 *
 *  Created on: 3 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_02_STRUCTURALPATTERNS_BRIDGE_HELLOWORLDBRIDGE_H_
#define DESIGNPATTERNS_02_STRUCTURALPATTERNS_BRIDGE_HELLOWORLDBRIDGE_H_

#include "../../HelloWorld.h"
#include "HelloWorldImpl.h"

namespace DesignPatterns {

namespace Bridge {

class HelloWorldBridge: public HelloWorld {
private:
	HelloWorldImpl *helloWorldImp;

public:
	HelloWorldBridge(HelloWorldImpl *helloWorldImp);

	std::string helloWorld();
};

} /* namespace Bridge */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_02_STRUCTURALPATTERNS_BRIDGE_HELLOWORLDBRIDGE_H_ */
