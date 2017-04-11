/*
 * HelloWorldTemplateMethod.h
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_03_BEHAVIORALPATTERNS_TEMPLATEMETHOD_HELLOWORLDTEMPLATEMETHOD_H_
#define DESIGNPATTERNS_03_BEHAVIORALPATTERNS_TEMPLATEMETHOD_HELLOWORLDTEMPLATEMETHOD_H_

#include "HelloWorldAbstract.h"

namespace DesignPatterns {

namespace TemplateMethod {

class HelloWorldTemplateMethod: public HelloWorldAbstract {
public:
	std::string getInterjection();
	std::string getSeperator();
	std::string getObject();
	std::string getTerminator();
};

}  /* namespace TemplateMethod */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_03_BEHAVIORALPATTERNS_TEMPLATEMETHOD_HELLOWORLDTEMPLATEMETHOD_H_ */
