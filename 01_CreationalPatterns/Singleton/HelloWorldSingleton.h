/*
 * HelloWorldSingleton.h
 *
 *  Created on: 30 mars 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_01_CREATIONALPATTERNS_SINGLETON_HELLOWORLDSINGLETON_H_
#define DESIGNPATTERNS_01_CREATIONALPATTERNS_SINGLETON_HELLOWORLDSINGLETON_H_

#include "../../HelloWorld.h"

namespace DesignPatterns {

namespace Singleton {
class HelloWorldSingleton: public DesignPatterns::HelloWorld {
private:
	HelloWorldSingleton();
	HelloWorldSingleton(HelloWorldSingleton const&) = delete;
	void operator=(HelloWorldSingleton const&) = delete;

	class HelloWorldSingletonHolder {
	public:
		static HelloWorldSingleton *INSTANCE;
	};

public:
	std::string helloWorld();

	static HelloWorldSingleton& getInstance();
};
}/* namespace Singleton */

}/* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_01_CREATIONALPATTERNS_SINGLETON_HELLOWORLDSINGLETON_H_ */
