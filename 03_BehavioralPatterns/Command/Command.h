/*
 * Command.h
 *
 *  Created on: 3 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_03_BEHAVIORALPATTERNS_COMMAND_COMMAND_H_
#define DESIGNPATTERNS_03_BEHAVIORALPATTERNS_COMMAND_COMMAND_H_

#include <iostream>

namespace DesignPatterns {

namespace Command {

class Command {
public:
	virtual ~Command() = default;
	virtual void execute() = 0;
};

}  /* namespace Command */

}  /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_03_BEHAVIORALPATTERNS_COMMAND_COMMAND_H_ */
