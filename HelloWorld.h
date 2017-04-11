/*
 * HelloWorld.h
 *
 *  Created on: 30 mars 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_HELLOWORLD_H_
#define DESIGNPATTERNS_HELLOWORLD_H_

#include <iostream>

namespace DesignPatterns {

class HelloWorld {
public:
	HelloWorld();
	virtual ~HelloWorld() = default;

	virtual std::string helloWorld() = 0;
};

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_HELLOWORLD_H_ */
