/*
 * HelloWorldInterjectionHandler.cpp
 *
 *  Created on: 3 avr. 2017
 *      Author: hnnguyen
 */

#include "HelloWorldInterjectionHandler.h"

namespace DesignPatterns {

namespace ChainResponsibility {

void DesignPatterns::ChainResponsibility::HelloWorldInterjectionHandler::handle(
		std::string& sstream) {
	sstream += "Hello ";
}

}  /* namespace ChainResponsibility */

} /* namespace DesignPatterns */
