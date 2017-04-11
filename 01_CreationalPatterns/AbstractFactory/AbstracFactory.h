/*
 * HWAbstracFactory.h
 *
 *  Created on: 30 mars 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_01_CREATIONALPATTERNS_ABSTRACTFACTORY_ABSTRACFACTORY_H_
#define DESIGNPATTERNS_01_CREATIONALPATTERNS_ABSTRACTFACTORY_ABSTRACFACTORY_H_

#include "SplitHelloWorldFactory.h"
#include "CppSplitHelloWorldFactory.h"
#include "DesignPatternSplitHelloWorldFactory.h"
#include <unordered_map>

namespace DesignPatterns {

namespace AbstractFactory {

class AbstracFactory {
public:
	enum Type {
		Cpp, DesignPattern
	};

//	AbstracFactory(SplitHelloWorldFactory* splitHelloWorldFactory);

	static SplitHelloWorldFactory* select(Type type);

private:

};

} /* namespace AbstractFactory */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_01_CREATIONALPATTERNS_ABSTRACTFACTORY_ABSTRACFACTORY_H_ */
