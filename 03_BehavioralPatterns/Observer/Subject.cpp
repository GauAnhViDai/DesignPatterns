/*
 * Subject.cpp
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#include "Subject.h"

namespace DesignPatterns {

namespace Observer {

Subject::Subject() {
}

Subject* Subject::attach(Observer* observer) {
	observes.push_back(observer);
	return this;
}

void Subject::notifyObserver() {
	for (auto& x: observes) {
		x->update();
	}
}

}  /* namespace Observer */

} /* namespace DesignPatterns */

