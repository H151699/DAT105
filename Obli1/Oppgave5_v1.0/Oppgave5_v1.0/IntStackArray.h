#pragma once
#include "IntStackADT.h"

/*
*
In addition, you shall create an array implementation of Stack called StackArray.
Create all default constructors and the default destructor.
In addition, you must have a constructor with a parameter that is the size of the stack.
Default size is 10.
You must also overload the allocation operator.

*/

#ifndef INTSTACKARRAY_H_
#define INTSTACKARRAY_H_



template<class T>
class IntStackArray : public IntStackADT <T> {

private:
	const int STDK = 100;
	int top;
	T *stack;
	int stacksize;

	/* extend stacksize */
	void extend() {
		auto *tmp = new T[stacksize * 2];
		for (int i = 0; i < stacksize; i++) {
			tmp[i] = stack[i];
			stacksize <<= 1;
			stack = tmp;


		}
	}


public:

	/*constructor with a parameter that is the size of the stack. */
	IntStackArray() : top(0), stacksize(STDK) {
		stack = new T[STDK];
	}

	explicit IntStackArray(int size) : top(0), stacksize(size) {
		stack = new T[size];
	}

	/* Default Deconstructor*/
	~IntStackArray() = default;


	/* Push method */
	void push(T el) override {

		if (sizeStack() == stacksize) {

			extend();
		}

		stack[top] = el;
		top++;

	}


	/* Pop method which return removed item */
	T pop() override {

		T* result = nullptr;

		if (!isEmptyStack()) {

			top--;

			result = stack + top;

		}

		return *result;


	}



	/* Returning a pointer to the top element of the stack*/
	T *peek() override {
		return isEmptyStack() ? nullptr : stack + (top - 1);
	}



	bool isEmptyStack() override {
		return top == 0;
	}

	int sizeStack() override {

		return top;
	}

	
};


#endif



