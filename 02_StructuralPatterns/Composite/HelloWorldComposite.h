/*
 * HelloWorldComposite.h
 *
 *  Created on: 3 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_02_STRUCTURALPATTERNS_COMPOSITE_HELLOWORLDCOMPOSITE_H_
#define DESIGNPATTERNS_02_STRUCTURALPATTERNS_COMPOSITE_HELLOWORLDCOMPOSITE_H_

#include <vector>
#include <iterator>
#include <algorithm>
#include <sstream>
#include "../../HelloWorld.h"

namespace DesignPatterns {

namespace Composite {

class HelloWorldComposite: public DesignPatterns::HelloWorld {
private:
	std::vector<DesignPatterns::HelloWorld*> helloWorlds;
	std::string lineSeperator = "\n\t";
public:
	std::string helloWorld();

	HelloWorldComposite(std::vector<DesignPatterns::HelloWorld*> helloWorlds);

	class DefaultHelloWorld: public HelloWorld {
	public:
		std::string helloWorld();
	};
};

}  /* namespace Composite */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_02_STRUCTURALPATTERNS_COMPOSITE_HELLOWORLDCOMPOSITE_H_ */
