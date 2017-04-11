/*
 * Observer.h
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_03_BEHAVIORALPATTERNS_OBSERVER_OBSERVER_H_
#define DESIGNPATTERNS_03_BEHAVIORALPATTERNS_OBSERVER_OBSERVER_H_

namespace DesignPatterns {

namespace Observer {

class Observer {
public:
	virtual ~Observer() = default;
	virtual void update() = 0;
};

}  /* namespace Observer */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_03_BEHAVIORALPATTERNS_OBSERVER_OBSERVER_H_ */
