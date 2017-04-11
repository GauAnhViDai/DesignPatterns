/*
 * HelloWorldBuilder.h
 *
 *  Created on: 31 mars 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_01_CREATIONALPATTERNS_BUILDER_HELLOWORLDBUILDER_H_
#define DESIGNPATTERNS_01_CREATIONALPATTERNS_BUILDER_HELLOWORLDBUILDER_H_

#include "../../HelloWorld.h"
#include "../../SplitHelloWorld.h"

namespace DesignPatterns {
namespace Builder {
class HelloWorldBuilder {
private:
	static std::string strInterjection;
	static std::string strObject;

public:
	HelloWorldBuilder();
	~HelloWorldBuilder() = default;

	class HelloWorldBuilderInterjection:public DesignPatterns::SplitHelloWorld::HelloWorldInterjection {
	public:
		~HelloWorldBuilderInterjection() = default;
		std::string interjection();
	};

	class HelloWorldBuilderObject: public DesignPatterns::SplitHelloWorld::HelloWorldObject {
	public:
		~HelloWorldBuilderObject() = default;
		std::string object();
	};

	static HelloWorldBuilder* builder();
	HelloWorldBuilder* getInterjection(std::string interjection);
	HelloWorldBuilder* getObject(std::string object);
	HelloWorld* getHelloWorld();

};
} /* namespace Builder */
} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_01_CREATIONALPATTERNS_BUILDER_HELLOWORLDBUILDER_H_ */
