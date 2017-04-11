/*
 * HelloWorldComposite.cpp
 *
 *  Created on: 3 avr. 2017
 *      Author: hnnguyen
 */

#include "HelloWorldComposite.h"

namespace DesignPatterns {

namespace Composite {

//std::string HelloWorldComposite::lineSeperator = "\n";

std::string DesignPatterns::Composite::HelloWorldComposite::helloWorld() {
	std::vector<std::string> helloWorldOuts;
	for (auto& x: helloWorlds) {
		helloWorldOuts.push_back(x->helloWorld());
	}
	std::stringstream s;
	copy(helloWorldOuts.begin(),helloWorldOuts.end(), std::ostream_iterator<std::string>(s,lineSeperator.c_str()));
	return s.str();
}

DesignPatterns::Composite::HelloWorldComposite::HelloWorldComposite(
		std::vector<DesignPatterns::HelloWorld*> helloWorlds) {
	this->helloWorlds = helloWorlds;
}

std::string HelloWorldComposite::DefaultHelloWorld::helloWorld() {
	return "Hello Composite!";
}


}  /* namespace Composite */

} /* namespace DesignPatterns */
