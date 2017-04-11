/*
 * HWAbstracFactory.cpp
 *
 *  Created on: 30 mars 2017
 *      Author: hnnguyen
 */

#include "AbstracFactory.h"

namespace DesignPatterns {

namespace AbstractFactory {

SplitHelloWorldFactory* AbstractFactory::AbstracFactory::select(Type type) {
	switch (type) {
	case Cpp:
		return new CppSplitHelloWorldFactory();
		break;
	case DesignPattern:
		return new DesignPatternSplitHelloWorldFactory();
	}

}

} /* namespace AbstractFactory */

} /* namespace CreationalPatterns */
