/*
 * HelloWorldObserver.cpp
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#include "HelloWorldObserver.h"

namespace DesignPatterns {

namespace Observer {

void HelloWorldObserver::update() {
	std::cout << "\t" << "Hello Observer!" << std::endl;
}


}  /* namespace Observer */

} /* namespace DesignPatterns */
