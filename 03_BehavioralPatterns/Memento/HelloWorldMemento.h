/*
 * HelloWorldMemento.h
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_03_BEHAVIORALPATTERNS_MEMENTO_HELLOWORLDMEMENTO_H_
#define DESIGNPATTERNS_03_BEHAVIORALPATTERNS_MEMENTO_HELLOWORLDMEMENTO_H_

#include "../../HelloWorld.h"

namespace DesignPatterns {

namespace Memento {

class HelloWorldMemento: public HelloWorld {
private:
	std::string state;
public:

	HelloWorldMemento* set(std::string state);
	std::string helloWorld();

	class Memento {
	private:
		std::string state;

	public:
		Memento(std::string stateToSave);
		std::string getSavedState();
	};

	Memento* saveToMemento();
	void restoreFromMemento(Memento *memento);
};

}  /* namespace Memento */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_03_BEHAVIORALPATTERNS_MEMENTO_HELLOWORLDMEMENTO_H_ */
