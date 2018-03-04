#pragma once
#include <iostream>
using namespace std;



template<class T>
class LinkedList {


	// declare a class for the list node
protected:

	struct ListNode {
		T value;
		ListNode *next;
		ListNode(T value1, ListNode *next1 = NULL) {
			value = value1;
			next = next1;
		}

	};


	//************************************************************************************
	// List head pointer (Globle pointer)
	//************************************************************************************

	ListNode *head;



public:

	// constructor
	LinkedList() {
		head = NULL;
	}


	// deConstructor
	~LinkedList();

	void add(T value);
	void remove(T value);
	void displayList() const;



};




//************************************************************************************
// Add a new Element to the end of the list
//************************************************************************************

template<class T>
void LinkedList<T>::add(T value) {

	/// if the list  is empty
	if (head == NULL) {
		head = new ListNode(value);
	}
	else {

		/// if the list is Not Empty, 
		/// using nodePtr to traverse the list
		ListNode *nodePtr = head;

		while (nodePtr->next != NULL) {
			nodePtr = nodePtr->next;
		}

		/// nodePtr.next is NULL, so nodePtr points to the last node
		/// then create a new node and put it after the last node

		nodePtr->next = new ListNode(value);


	}

} // add Value





  //************************************************************************************
  // Remove a number from a list. UnsortedList
  //************************************************************************************

template<class T>
void LinkedList<T>::remove(T value) {

	ListNode *nodePtr;
	ListNode *previousNodePtr = NULL; // Initialize pointer

									  /// 1) if the list is empty, do nothing     ///if (head = NULL) {
	if (!head) {
		return;
	}

	/// 2) check if the head/first is the one to be delected
	if (head->value == value) {
		nodePtr = head;
		head = head->next;
		delete nodePtr;

	}
	else {


		///	3)	Initialize nodePtr to the head of the list 
		///			then Skip nodes whose nodePtr to the head of the list

		nodePtr = head;

		while (nodePtr != NULL && nodePtr->value != value) {
			previousNodePtr = nodePtr;
			nodePtr = nodePtr->next;
		}


		/// Link the previous node to the node after nodePtr
		///  then  delete nodePtr
		if (nodePtr) {

			previousNodePtr->next = nodePtr->next;
			delete nodePtr;
		}

	}




} // remove


  //************************************************************************************
  // disPlay outputs
  //************************************************************************************
template<class T>
void LinkedList<T>::displayList() const {

	ListNode *nodePtr = head;	/// Start  at head of list

	while (nodePtr) {

		cout << nodePtr->value << "    "; /// print the value in the current node
										  /// move on to the next node
		nodePtr = nodePtr->next;

	}


}




//************************************************************************************
// Destructor deAllocates the memory used by the list.
//************************************************************************************

template<class T>
LinkedList<T>::~LinkedList() {

	ListNode *nodePtr = head;  /// Start at head of List
	while (nodePtr != NULL) {

		ListNode *garbage = nodePtr;	/// garbage keeps track of node to be deleted
		nodePtr = nodePtr->next;		/// move on to the next node,
										/// delete the "gabage" node;
		delete garbage;


	}

}