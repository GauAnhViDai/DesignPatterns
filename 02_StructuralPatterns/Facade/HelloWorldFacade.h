/*
 * HelloWorldFacade.h
 *
 *  Created on: 3 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_02_STRUCTURALPATTERNS_FACADE_HELLOWORLDFACADE_H_
#define DESIGNPATTERNS_02_STRUCTURALPATTERNS_FACADE_HELLOWORLDFACADE_H_

#include "../../HelloWorld.h"
#include "../../01_CreationalPatterns/Builder/HelloWorldBuilder.h"

namespace DesignPatterns {

namespace Facade {

class HelloWorldFacade {
private:
	HelloWorldFacade();
	HelloWorldFacade(HelloWorldFacade const&);
	void operator=(HelloWorldFacade const&);

	class HelloWorldFacadeInstanceHolder {
	public:
		static HelloWorldFacade *INSTANCE;
	};

public:
	static HelloWorldFacade* getInstance();

	DesignPatterns::HelloWorld* facadeHelloWorld();
};

}  /* namespace Facade */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_02_STRUCTURALPATTERNS_FACADE_HELLOWORLDFACADE_H_ */
