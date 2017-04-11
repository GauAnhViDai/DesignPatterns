/*
 * HelloWorldPrintCommand.cpp
 *
 *  Created on: 3 avr. 2017
 *      Author: hnnguyen
 */

#include "HelloWorldPrintCommand.h"

namespace DesignPatterns {

namespace Command {

void HelloWorldPrintCommand::execute() {
	std::cout << "\t" << "Hello Command!" << std::endl;
}

}  /* namespace Command */
} /* namespace DesignPatterns */

