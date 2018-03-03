#pragma once
/*
You should create an interface called Stack for any stack implementation.
In C ++ this must be done by defining an abstract class.
The operations are push, pop, top, empty, size.
*/

#ifndef INTSTACKADT_H_
#define INTSTACKADT_H_

/*abstract data type*/
template <class T>

class IntStackADT {



public:

	/*virtual functions*/
	/* returning the number of elements in the stack*/
	virtual int sizeStack() = 0;

	/* Return True if the stack is empty */
	virtual bool isEmptyStack() = 0;

	/* Return True if the stack is full */
	// virtual bool isFullStack()  = 0;

	/**
	* Adding a new element to the top off the stack
	* @param element The element to add
	*/
	virtual void push(T el) = 0;

	/**
	* Removing the top element of the stack and returning a reference to the element
	* @return the top element of the stack
	*/
	virtual T pop() = 0;

	/* Returning a pointer to the top element of the stack*/
	virtual T* peek() = 0;



};


#endif
