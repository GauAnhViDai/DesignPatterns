/*
 * HelloWorldInterpreter.cpp
 *
 *  Created on: 3 avr. 2017
 *      Author: hnnguyen
 */

#include "HelloWorldInterpreter.h"

namespace DesignPatterns {

namespace Interpreter {

//std::ostream& HelloWorldInterpreter::PrintlnFunction::stream = std::cout;

//void HelloWorldInterpreter::PrintlnFunction::setPrinter() {
//}

void HelloWorldInterpreter::PrintlnFunction::call(
		std::string paramString) {
	stream << paramString << std::endl;
}

HelloWorldInterpreter::HelloWorldInterpreter() {
	registerFunction("println",new HelloWorldInterpreter::PrintlnFunction());
}

void HelloWorldInterpreter::registerFunction(
		std::string name, Function* function) {
	functions[name] = function;
}

void HelloWorldInterpreter::interpret(
		std::string expr) {
//	std::string test = expr;
	std::string functionName = Utils::StringUtils::substringBefore(expr,"(");
//	std::cout << "function name:\t"<< functionName << std::endl;
	std::string params = Utils::StringUtils::strip(Utils::StringUtils::substringBeforeLast(Utils::StringUtils::substringAfter(expr,"("),")"),'\'');
//	std::cout << "params:\t" << params << std::endl;
	try {
		Function *function = functions.at("println");
//		std::string strParam = expr;
		function->call(params);
	} catch (std::out_of_range& e) {
		std::cout << e.what() << std::endl;
	}

//	if (function) {
//	} else {
//		std::cout << "There is no function!\n";
//		std::cout << "List of function\n";
//		for(auto it = functions.cbegin(); it != functions.cend(); ++it)
//		{
//		    std::cout << it->first << " " << it->first << "\n";
//		}
//	}

}

}  /* namespace Interpreter */

} /* namespace DesignPatterns */
