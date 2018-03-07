#pragma once
#ifndef OPPGAVE5_STACKADT_H
#define OPPGAVE5_STACKADT_H

/**
* A representation of a generic stack
* @tparam T generic type
*/
template<class T>
class StackADT {
public:
	/**
	* Adding a new element to the top off the stack
	* @param element The element to add
	*/
	virtual void push(T element) = 0;

	/**
	* Removing the top element of the stack and returning a reference to the element
	* @return the top element of the stack
	*/
	virtual T pop() = 0;

	/**
	* Returning a pointer to the top element of the stack
	* @return pointer to the top element
	*/
	virtual T* peek() = 0;

	/**
	* True or false if the stack is empty
	* @return true if empty
	*/
	virtual bool isEmpty() = 0;

	/**
	* Returning the number of elements in the stack
	* @return number of elements in the stack
	*/
	virtual int size() = 0;
};

#endif //OPPGAVE5_STACKADT_H