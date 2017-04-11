/*
 * DesignPatternsException.cpp
 *
 *  Created on: 4 avr. 2017
 *      Author: hnnguyen
 */

#include "DesignPatternsException.h"

namespace DesignPatterns {

namespace Exception {

/** Returns a pointer to the (constant) error description.
 *  @return A pointer to a const char*. The underlying memory
 *          is in posession of the Exception object. Callers must
 *          not attempt to free the memory.
 */
const char* DesignPatternsException::what() const throw () {
	return _msg_.c_str();
}

/** Constructor (C strings).
 *  @param message C-style string error message.
 *                 The string contents are copied upon construction.
 *                 Hence, responsibility for deleting the char* lies
 *                 with the caller.
 */
DesignPatternsException::DesignPatternsException(const char* msg): _msg_(msg) {
}

/** Constructor (C++ STL strings).
 *  @param message The error message.
 */
DesignPatternsException::DesignPatternsException(const std::string& msg): _msg_(msg) {
}

/** Destructor.
 * Virtual to allow for subclassing.
 */
DesignPatternsException::~DesignPatternsException() throw () {
}

}  /* namespace Exception */

} /* namespace DesignPatterns */
