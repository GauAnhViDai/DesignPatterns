/*
 * SplitHelloWorld.h
 *
 *  Created on: 30 mars 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_SPLITHELLOWORLD_H_
#define DESIGNPATTERNS_SPLITHELLOWORLD_H_

#include "HelloWorld.h"

namespace DesignPatterns {

class SplitHelloWorld: public HelloWorld {
public:
	SplitHelloWorld();
	virtual ~SplitHelloWorld() = default;
	std::string helloWorld();

	class HelloWorldInterjection {
	public:
		virtual ~HelloWorldInterjection() = default;
		virtual std::string interjection() = 0;
	};

	class HelloWorldObject {
	public:
		virtual ~HelloWorldObject() = default;
		virtual std::string object() = 0;
	};

	class DefaultInterjection: public HelloWorldInterjection {
	public:
		std::string interjection();
	};

	SplitHelloWorld(HelloWorldInterjection *helloWorldInterjection,
			HelloWorldObject *helloWorldObject) :
			helloWorldInterjection(helloWorldInterjection), helloWorldObject(
					helloWorldObject) {
	}

private:
	HelloWorldInterjection *helloWorldInterjection;
	HelloWorldObject *helloWorldObject;

	static const std::string separator; // = " ";
	static const std::string terminator; // = "!";

};

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_SPLITHELLOWORLD_H_ */
