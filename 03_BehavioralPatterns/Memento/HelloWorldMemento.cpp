/*
 * HelloWorldMemento.cpp
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#include "HelloWorldMemento.h"

namespace DesignPatterns {

namespace Memento {

HelloWorldMemento* HelloWorldMemento::set(
		std::string state) {
	this->state = state;
	return this;
}

std::string HelloWorldMemento::helloWorld() {
	return state;
}

HelloWorldMemento::Memento::Memento(
		std::string stateToSave) {
	state = stateToSave;
}

std::string HelloWorldMemento::Memento::getSavedState() {
	return state;
}

HelloWorldMemento::Memento* HelloWorldMemento::saveToMemento() {
	return new Memento(state);
}

void HelloWorldMemento::restoreFromMemento(
		HelloWorldMemento::Memento* memento) {
	state = memento->getSavedState();
}


}  /* namespace Memento */

} /* namespace DesignPatterns */
