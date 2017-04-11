/*
 * main.cpp
 *
 *  Created on: 1 nov. 2016
 *      Author: hnnguyen
 */

#include <iostream>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include <functional>
#include <map>
#include <vector>
#include <thread>
#include <mutex>
#include <unistd.h>
#include <fstream>
#include <iomanip>
#include <cstdio>
#include <memory>
#include <stdexcept>
#include <array>
#include <stdio.h>

#include "DesignPatterns/01_CreationalPatterns/Factory/FactoryMethodHelloWorldFactory.h"
#include "DesignPatterns/01_CreationalPatterns/Singleton/HelloWorldSingleton.h"
#include "DesignPatterns/01_CreationalPatterns/Prototype/HelloWorldPrototype.h"
#include "DesignPatterns/01_CreationalPatterns/Builder/HelloWorldBuilder.h"
#include "DesignPatterns/01_CreationalPatterns/AbstractFactory/SplitHelloWorldFactory.h"
#include "DesignPatterns/01_CreationalPatterns/AbstractFactory/AbstracFactory.h"

#include "DesignPatterns/02_StructuralPatterns/Adapter/HelloWorldAdapter.h"
#include "DesignPatterns/02_StructuralPatterns/Adapter/HelloAdapterDesignPattern.h"
#include "DesignPatterns/02_StructuralPatterns/Bridge/HelloWorldBridge.h"
#include "DesignPatterns/02_StructuralPatterns/Bridge/DesignPatternWorldImpl.h"
#include "DesignPatterns/02_StructuralPatterns/Composite/HelloWorldComposite.h"
#include "DesignPatterns/02_StructuralPatterns/Decorator/HelloWorldDecorator.h"
#include "DesignPatterns/02_StructuralPatterns/Facade/HelloWorldFacade.h"
#include "DesignPatterns/02_StructuralPatterns/FlyWeight/HelloWorldFlyWeightFactory.h"
#include "DesignPatterns/02_StructuralPatterns/Proxy/HelloWorldProxy.h"

#include "DesignPatterns/03_BehavioralPatterns/ChainResponsibility/HelloWorldHandler.h"
#include "DesignPatterns/03_BehavioralPatterns/ChainResponsibility/HelloWorldInterjectionHandler.h"
#include "DesignPatterns/03_BehavioralPatterns/ChainResponsibility/HelloWorldObjectHandler.h"
#include "DesignPatterns/03_BehavioralPatterns/Command/Command.h"
#include "DesignPatterns/03_BehavioralPatterns/Command/HelloWorldPrintCommand.h"
#include "DesignPatterns/03_BehavioralPatterns/Interpreter/HelloWorldInterpreter.h"
#include "DesignPatterns/03_BehavioralPatterns/Iterator/HelloWorldCharacterIterator.h"
#include "DesignPatterns/03_BehavioralPatterns/Mediator/HelloWorldMediator.h"
#include "DesignPatterns/03_BehavioralPatterns/Mediator/HelloWorldInterjection.h"
#include "DesignPatterns/03_BehavioralPatterns/Mediator/HelloWorldObject.h"
#include "DesignPatterns/03_BehavioralPatterns/Memento/HelloWorldMemento.h"
#include "DesignPatterns/03_BehavioralPatterns/Observer/HelloWorldObserver.h"
#include "DesignPatterns/03_BehavioralPatterns/Observer/Subject.h"
#include "DesignPatterns/03_BehavioralPatterns/State/HelloWorldStateContext.h"
#include "DesignPatterns/03_BehavioralPatterns/Strategy/HelloWorldStrategyContext.h"
#include "DesignPatterns/03_BehavioralPatterns/Strategy/HelloWorldStrategyDesignPattern.h"
#include "DesignPatterns/03_BehavioralPatterns/Strategy/HelloWorldStrategyCpp.h"
#include "DesignPatterns/03_BehavioralPatterns/TemplateMethod/HelloWorldTemplateMethod.h"
#include "DesignPatterns/03_BehavioralPatterns/Visitor/HelloWorldCharacterElements.h"
#include "DesignPatterns/03_BehavioralPatterns/Visitor/HelloWorldCharacterVisitor.h"

#include "email/ClassA.h"
#include "email/ClassB.h"
#include "email/ClassC.h"

#include "Utils/StringUtils.h"

int main(int argc, char **argv) {
	auto t1 = std::chrono::high_resolution_clock::now();

	std::cout
			<< "==================== Creational patterns: ===========================\n\n";

	std::cout << "1. HelloWorld Abstract Factory\n";
	DesignPatterns::AbstractFactory::SplitHelloWorldFactory *abstractFactory =
			DesignPatterns::AbstractFactory::AbstracFactory::select(
					DesignPatterns::AbstractFactory::AbstracFactory::Type::Cpp);
	DesignPatterns::HelloWorld *abstractFactoryHelloWorld =
			new DesignPatterns::SplitHelloWorld(
					abstractFactory->createHelloWorldInterjection(),
					abstractFactory->createHelloWorldObject());
	std::cout << "\t" << abstractFactoryHelloWorld->helloWorld() << std::endl;

	std::cout << "2. HelloWorld Builder\n";
	DesignPatterns::HelloWorld *builderHelloWorld =
			DesignPatterns::Builder::HelloWorldBuilder::builder()->getInterjection(
					"Hello")->getObject("Builder")->getHelloWorld();
	std::cout << "\t" << builderHelloWorld->helloWorld() << std::endl;

	std::cout << "3. HelloWorld Factory\n";
	DesignPatterns::Factory::FactoryMethodHelloWorldFactory *factoryMethodHelloWorldFactory =
			new DesignPatterns::Factory::FactoryMethodHelloWorldFactory();
	DesignPatterns::HelloWorld* factoryMethodHelloWorld =
			factoryMethodHelloWorldFactory->createHelloWorld();
	std::cout << "\t" << factoryMethodHelloWorld->helloWorld() << std::endl;

	std::cout << "4. HelloWorld Prototype\n";
	DesignPatterns::HelloWorld *prototypeHelloWorld =
			DesignPatterns::Prototype::HelloWorldPrototype::PROTOTYPE->clone();
	std::cout << "\t" << prototypeHelloWorld->helloWorld() << std::endl;

	std::cout << "5. HelloWorld Singleton\n";
	DesignPatterns::HelloWorld &singletonHelloWorld =
			DesignPatterns::Singleton::HelloWorldSingleton::getInstance();
	std::cout << "\t" << singletonHelloWorld.helloWorld() << std::endl;

	std::cout
			<< "==================== Structural Factory: ===========================\n\n";

	std::cout << "6. HelloWorld Adapter\n";
	DesignPatterns::Adapter::HelloAdapterDesignPattern helloAdapterDesignPattern;
	DesignPatterns::HelloWorld *adapterHelloWorld =
			new DesignPatterns::Adapter::HelloWorldAdapter(
					helloAdapterDesignPattern);
	std::cout << "\t" << adapterHelloWorld->helloWorld() << std::endl;

	std::cout << "7. HelloWorld Bridge\n";
	DesignPatterns::HelloWorld *bridgeHelloWorld =
			new DesignPatterns::Bridge::HelloWorldBridge(
					new DesignPatterns::Bridge::DesignPatternWorldImpl());
	std::cout << "\t" << bridgeHelloWorld->helloWorld() << std::endl;

	std::cout << "8. HelloWorld Composite\n";
	std::vector<DesignPatterns::HelloWorld*> lstHelloWorld;
	lstHelloWorld.push_back(bridgeHelloWorld);
	lstHelloWorld.push_back(
			new DesignPatterns::Composite::HelloWorldComposite::DefaultHelloWorld());
	DesignPatterns::HelloWorld *compositeHelloWorld =
			new DesignPatterns::Composite::HelloWorldComposite(lstHelloWorld);
	std::cout << "\t" << compositeHelloWorld->helloWorld() << std::endl;

	std::cout << "9. HelloWorld Decorator\n";
	DesignPatterns::Decorator::HelloWorldDecorator *helloWorldDecorator =
			new DesignPatterns::Decorator::HelloWorldDecorator(
					new DesignPatterns::Decorator::HelloWorldDecorator::DefaultHelloWorld());
	std::cout << "\t" << helloWorldDecorator->helloDecorator() << std::endl;

	std::cout << "10. HelloWorld Facade\n";
	DesignPatterns::HelloWorld *facadeHelloWorld =
			DesignPatterns::Facade::HelloWorldFacade::getInstance()->facadeHelloWorld();
	std::cout << "\t" << facadeHelloWorld->helloWorld() << std::endl;

	std::cout << "11. HelloWorld Flyweight\n";
	DesignPatterns::HelloWorld *flyWeightHelloWorld =
			DesignPatterns::FlyWeight::HelloWorldFlyWeightFactory::getInstance().createHelloWorld(
					"Hello Flyweight!");
	std::cout << "\t" << flyWeightHelloWorld->helloWorld() << std::endl;

	std::cout << "12. HelloWorld Proxy\n";
	DesignPatterns::HelloWorld *proxyHelloWorld =
			new DesignPatterns::Proxy::HelloWorldProxy(
					new DesignPatterns::Proxy::HelloWorldProxy::DefaultHelloWorld());
	std::cout << "\t" << proxyHelloWorld->helloWorld() << std::endl;

	std::cout
			<< "==================== Behavioral Factory: ===========================\n\n";

	std::cout << "13. HelloWorld Chain Of Responsibility\n";
	DesignPatterns::ChainResponsibility::HelloWorldHandler *helloWorldChainOfResponsibility =
			(new DesignPatterns::ChainResponsibility::HelloWorldInterjectionHandler())->setNext(
					new DesignPatterns::ChainResponsibility::HelloWorldObjectHandler());
	std::cout << "\t" << helloWorldChainOfResponsibility->helloWorld()
			<< std::endl;

	std::cout << "14. HelloWorld Command\n";
	DesignPatterns::Command::Command *helloWorldCommand =
			new DesignPatterns::Command::HelloWorldPrintCommand();
	helloWorldCommand->execute();

	std::cout << "15. HelloWorld Interpreter\n";
	DesignPatterns::Interpreter::HelloWorldInterpreter *helloWorldInterpreter = new DesignPatterns::Interpreter::HelloWorldInterpreter();
	std::cout << "\t";
	helloWorldInterpreter->interpret("println('Hello Interpreter!')");

	std::cout << "16. HelloWorld Iterator\n";
	std::cout << "\t";
	DesignPatterns::Iterator::HelloWorldCharacterIterator helloWorldCharacterIterator(
			"Hello Iterator!");
	while (helloWorldCharacterIterator.hasNext()) {
		std::cout << helloWorldCharacterIterator.next();
	}
	try {
		helloWorldCharacterIterator.remove();
	} catch (DesignPatterns::Exception::DesignPatternsException &e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::cout << "17. HelloWorld Mediator\n";
	DesignPatterns::Mediator::HelloWorldInterjection *helloWorldInterjection =
			new DesignPatterns::Mediator::HelloWorldInterjection();
	DesignPatterns::Mediator::HelloWorldObject *helloWorldObject =
			new DesignPatterns::Mediator::HelloWorldObject();
	DesignPatterns::Mediator::HelloWorldMediator *helloWorldMediator =
			new DesignPatterns::Mediator::HelloWorldMediator(
					*helloWorldInterjection, *helloWorldObject);
	helloWorldInterjection->setHelloWorldMediator(helloWorldMediator);
	helloWorldObject->setHelloWorldMediator(helloWorldMediator);
	std::cout << "\t" << helloWorldObject->helloWorld() << std::endl;

	std::cout << "18. HelloWorld Memento\n";
	DesignPatterns::Memento::HelloWorldMemento mementoHelloWorld;
	DesignPatterns::Memento::HelloWorldMemento::Memento *memento =
			mementoHelloWorld.set("Hello Memento!")->saveToMemento();
	mementoHelloWorld.set("Hello whatever!");
	std::cout << "\t" << mementoHelloWorld.helloWorld() << std::endl;
	mementoHelloWorld.restoreFromMemento(memento);
	std::cout << "\t" << mementoHelloWorld.helloWorld() << std::endl;

	std::cout << "19. HelloWorld Observer\n";
	DesignPatterns::Observer::Subject *subject =
			(new DesignPatterns::Observer::Subject())->attach(
					new DesignPatterns::Observer::HelloWorldObserver());
	subject->notifyObserver();

	std::cout << "20. HelloWorld State\n";
	DesignPatterns::State::HelloWorldStateContext helloWorldStateContext;
	DesignPatterns::HelloWorld *stateHelloWorld =
			helloWorldStateContext.appendWord("Hello")->appendWord("World");
	std::cout << "\t" << stateHelloWorld->helloWorld() << std::endl;

	std::cout << "21. HelloWorld Strategy\n";
	DesignPatterns::Strategy::HelloWorldStrategyContext strategyContextHelloWorld(
			new DesignPatterns::Strategy::HelloWorldStrategyDesignPattern());
	std::cout << "\t" << strategyContextHelloWorld.helloWorld() << std::endl;
	strategyContextHelloWorld.reset(
			new DesignPatterns::Strategy::HelloWorldStrategyCpp());
	std::cout << "\t" << strategyContextHelloWorld.helloWorld() << std::endl;

	std::cout << "22. HelloWorld Template Method\n";
	DesignPatterns::HelloWorld *templateMethodHelloWorld =
			new DesignPatterns::TemplateMethod::HelloWorldTemplateMethod();
	std::cout << "\t" << templateMethodHelloWorld->helloWorld() << std::endl;

	std::cout << "23. HelloWorld Visitor\n";
	DesignPatterns::Visitor::HelloWorldCharacterElements *helloWorldCharacterElements =
			new DesignPatterns::Visitor::HelloWorldCharacterElements("Hello Visitor!");
	DesignPatterns::Visitor::HelloWorldCharacterVisitor *helloWorldCharacterVisitor =
			new DesignPatterns::Visitor::HelloWorldCharacterVisitor();
	helloWorldCharacterElements->accept(helloWorldCharacterVisitor);
	std::cout << "\t"<< helloWorldCharacterVisitor->helloWorld() << std::endl;;

	auto t2 = std::chrono::high_resolution_clock::now();

	std::chrono::duration<double, std::milli> fp_ms = t2 - t1;
	std::cout << "Runtime took " << fp_ms.count() << " ms " << std::endl;

	return 0;
}
