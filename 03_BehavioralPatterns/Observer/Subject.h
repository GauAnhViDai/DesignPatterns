/*
 * Subject.h
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_03_BEHAVIORALPATTERNS_OBSERVER_SUBJECT_H_
#define DESIGNPATTERNS_03_BEHAVIORALPATTERNS_OBSERVER_SUBJECT_H_

#include "Observer.h"
#include <vector>
namespace DesignPatterns {

namespace Observer {

class Subject {
private:
	std::vector<Observer*> observes;

public:
	Subject();
	Subject* attach(Observer *observer);
	void notifyObserver();
};

}  /* namespace Observer */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_03_BEHAVIORALPATTERNS_OBSERVER_SUBJECT_H_ */
