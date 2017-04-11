/*
 * HelloWorldObserver.h
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_03_BEHAVIORALPATTERNS_OBSERVER_HELLOWORLDOBSERVER_H_
#define DESIGNPATTERNS_03_BEHAVIORALPATTERNS_OBSERVER_HELLOWORLDOBSERVER_H_

#include <iostream>
#include "Observer.h"

namespace DesignPatterns {

namespace Observer {

class HelloWorldObserver: public Observer {
public:
	void update();
};

}  /* namespace Observer */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_03_BEHAVIORALPATTERNS_OBSERVER_HELLOWORLDOBSERVER_H_ */
