/*
 * HelloWorldObjectHandler.cpp
 *
 *  Created on: 3 avr. 2017
 *      Author: hnnguyen
 */

#include "HelloWorldObjectHandler.h"

namespace DesignPatterns {

namespace ChainResponsibility {

void DesignPatterns::ChainResponsibility::HelloWorldObjectHandler::handle(
		std::string& sstream) {
	sstream += "Chain of Responsibility!";
}

}  /* namespace ChainResponsibility */

} /* namespace DesignPatterns */
