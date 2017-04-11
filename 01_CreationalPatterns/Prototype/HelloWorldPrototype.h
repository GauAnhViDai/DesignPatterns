/*
 * HelloWorldPrototype.h
 *
 *  Created on: 30 mars 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_01_CREATIONALPATTERNS_PROTOTYPE_HELLOWORLDPROTOTYPE_H_
#define DESIGNPATTERNS_01_CREATIONALPATTERNS_PROTOTYPE_HELLOWORLDPROTOTYPE_H_

#include "../../HelloWorld.h"

namespace DesignPatterns {

namespace Prototype {

class HelloWorldPrototype: public DesignPatterns::HelloWorld {
private:
	std::string strHelloWorld;

public:
	HelloWorldPrototype(std::string helloWorld);
	DesignPatterns::HelloWorld* clone();

	std::string helloWorld();

	static HelloWorldPrototype* PROTOTYPE;
};

}

}
#endif /* DESIGNPATTERNS_01_CREATIONALPATTERNS_PROTOTYPE_HELLOWORLDPROTOTYPE_H_ */
