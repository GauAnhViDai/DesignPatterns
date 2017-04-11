/*
 * HelloWorldInterpreter.h
 *
 *  Created on: 3 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_03_BEHAVIORALPATTERNS_INTERPRETER_HELLOWORLDINTERPRETER_H_
#define DESIGNPATTERNS_03_BEHAVIORALPATTERNS_INTERPRETER_HELLOWORLDINTERPRETER_H_

#include <iostream>
#include <map>
#include "../../Utils/StringUtils.h"

namespace DesignPatterns {

namespace Interpreter {

class HelloWorldInterpreter {
public:
	class Function {
	public:
		virtual ~Function() = default;
		virtual void call(std::string paramString) = 0;
		std::string toString();
	};

	class PrintlnFunction: public Function {
	private:
		std::ostream& stream = std::cout;
	public:
//		void setPrinter(std::ostream& printer);
		void call(std::string paramString);
	};

	HelloWorldInterpreter();
	void registerFunction(std::string name, Function *function);
	void interpret(std::string expr);

private:
	std::map<std::string,Function*> functions;

};

} /* namespace Interpreter */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_03_BEHAVIORALPATTERNS_INTERPRETER_HELLOWORLDINTERPRETER_H_ */
