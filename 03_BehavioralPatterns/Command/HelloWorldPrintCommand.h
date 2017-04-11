/*
 * HelloWorldPrintCommand.h
 *
 *  Created on: 3 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_03_BEHAVIORALPATTERNS_COMMAND_HELLOWORLDPRINTCOMMAND_H_
#define DESIGNPATTERNS_03_BEHAVIORALPATTERNS_COMMAND_HELLOWORLDPRINTCOMMAND_H_

#include "Command.h"

namespace DesignPatterns {

namespace Command {

class HelloWorldPrintCommand: public Command {
public:
	void execute();
};

}  /* namespace Command */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_03_BEHAVIORALPATTERNS_COMMAND_HELLOWORLDPRINTCOMMAND_H_ */
