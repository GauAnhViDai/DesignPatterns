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

//	void

	static SplitHelloWorldFactory* select(Type type);

private:
//	SplitHelloWorldFactory* splitHelloWorldFactory;

//	static std::unordered_map<Type, SplitHelloWorldFactory*> map {{Cpp,new CppSplitHelloWorldFactory()},{DesignPattern, new DesignPatternSplitHelloWorldFactory()}};
//
//	SplitHelloWorldFactory* createSplitHelloWorldFactory(std::string& type);

//    static {
//        map = new HashMap<Type, Class<? extends SplitHelloWorldFactory>>();
//        map.put(Type.Java, JavaSplitHelloWorldFactory.class);
//        map.put(Type.DesignPattern, DesignPatternSplitHelloWorldFactory.class);
//    }
//
//public:
//    static SplitHelloWorldFactory* select(Type type) {
//        return map[type];
//}
};

} /* namespace AbstractFactory */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_01_CREATIONALPATTERNS_ABSTRACTFACTORY_ABSTRACFACTORY_H_ */
