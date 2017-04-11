/*
 * DesignPatternsException.h
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_EXCEPTION_DESIGNPATTERNSEXCEPTION_H_
#define DESIGNPATTERNS_EXCEPTION_DESIGNPATTERNSEXCEPTION_H_

#include <iostream>
#include <exception>

namespace DesignPatterns {

namespace Exception {

class DesignPatternsException: public std::exception {
public:
	virtual const char* what() const throw ();

	explicit DesignPatternsException(const char* msg);
	explicit DesignPatternsException(const std::string& msg);

	virtual ~DesignPatternsException() throw();

private:
	std::string _msg_;

};

}  /* namespace Exception */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_EXCEPTION_DESIGNPATTERNSEXCEPTION_H_ */
