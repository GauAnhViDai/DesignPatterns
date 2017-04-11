/*
 * HelloWorldCharacterIterator.h
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_03_BEHAVIORALPATTERNS_ITERATOR_HELLOWORLDCHARACTERITERATOR_H_
#define DESIGNPATTERNS_03_BEHAVIORALPATTERNS_ITERATOR_HELLOWORLDCHARACTERITERATOR_H_

#include <vector>
#include <cstring>
#include "../../Exception/DesignPatternsException.h"

namespace DesignPatterns {

namespace Iterator {

class HelloWorldCharacterIterator {
private:
	int size;
	int index;
	std::vector<char> characters;
public:
	HelloWorldCharacterIterator(const std::string& chars);
	bool hasNext();
	char next();
	void remove();
};

}  /* namespace Iterator */

} /* namespace DesignPatterns */

#endif /* DESIGNPATTERNS_03_BEHAVIORALPATTERNS_ITERATOR_HELLOWORLDCHARACTERITERATOR_H_ */
