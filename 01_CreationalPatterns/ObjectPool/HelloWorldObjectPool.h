/*
 * HelloWorldObjectPool.h
 *
 *  Created on: 3 avr. 2017
 *      Author: hnnguyen
 */

#ifndef DESIGNPATTERNS_01_CREATIONALPATTERNS_OBJECTPOOL_HELLOWORLDOBJECTPOOL_H_
#define DESIGNPATTERNS_01_CREATIONALPATTERNS_OBJECTPOOL_HELLOWORLDOBJECTPOOL_H_

#include <unordered_map>
#include <mutex>

namespace DesignPatterns {

namespace ObjectPool {

template<typename T>
class HelloWorldObjectPool {
//private:
//	std::mutex _mutex;
//	long expirationTime;
//	std::unordered_map<T, long> locked, unlocked;
//public:
//	HelloWorldObjectPool();
//	bool validate(T o);
//	void expire(T o);
//	T checkout();
//	void checkIn(T t);
//protected:
//	T create();
};

} /* namespace ObjectPool */

} /* namespace DesignPatterns */

//template<typename T>
//inline DesignPatterns::ObjectPool::HelloWorldObjectPool<T>::HelloWorldObjectPool() {
//	expirationTime = 30000;
//}
//
//template<typename T>
//inline bool DesignPatterns::ObjectPool::HelloWorldObjectPool<T>::validate(T o) {
//}
//
//template<typename T>
//inline void DesignPatterns::ObjectPool::HelloWorldObjectPool<T>::expire(T o) {
//}
//
//template<typename T>
//inline T DesignPatterns::ObjectPool::HelloWorldObjectPool<T>::checkout() {
//	std::unique_lock<std::mutex> lock(_mutex);
//}
//
//template<typename T>
//inline void DesignPatterns::ObjectPool::HelloWorldObjectPool<T>::checkIn(T t) {
//}
//
//template<typename T>
//inline T DesignPatterns::ObjectPool::HelloWorldObjectPool<T>::create() {
//}

#endif /* DESIGNPATTERNS_01_CREATIONALPATTERNS_OBJECTPOOL_HELLOWORLDOBJECTPOOL_H_ */
