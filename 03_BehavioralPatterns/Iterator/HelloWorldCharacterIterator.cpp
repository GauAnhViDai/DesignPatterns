/*
 * HelloWorldCharacterIterator.cpp
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#include "HelloWorldCharacterIterator.h"

namespace DesignPatterns {

namespace Iterator {

HelloWorldCharacterIterator::HelloWorldCharacterIterator(const std::string& chars):index(0){
	std::vector<char> cpychars(chars.c_str(),chars.c_str() + chars.size()+1);
	characters = cpychars;
	size = chars.size();
}

bool HelloWorldCharacterIterator::hasNext() {
	return index < size;
}

char HelloWorldCharacterIterator::next() {
	return characters[index++];
}

void HelloWorldCharacterIterator::remove() {
	throw DesignPatterns::Exception::DesignPatternsException("remove not support!");
}

}  /* namespace Iterator */

} /* namespace DesignPatterns */
