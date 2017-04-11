/*
 * HelloWorldAbstract.h
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_03_BEHAVIORALPATTERNS_TEMPLATEMETHOD_HELLOWORLDABSTRACT_H_
#define DESIGNPATTERNS_03_BEHAVIORALPATTERNS_TEMPLATEMETHOD_HELLOWORLDABSTRACT_H_

#include "../../HelloWorld.h"
#include <sstream>

namespace DesignPatterns {

namespace TemplateMethod {

class HelloWorldAbstract: public DesignPatterns::HelloWorld {
public:
	std::string helloWorld();
	virtual ~HelloWorldAbstract() = default;
	virtual std::string getInterjection() = 0;
	virtual std::string getSeperator() = 0;
	virtual std::string getObject() = 0;
	virtual std::string getTerminator() = 0;
};


}  /* namespace TemplateMethod */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_03_BEHAVIORALPATTERNS_TEMPLATEMETHOD_HELLOWORLDABSTRACT_H_ */
