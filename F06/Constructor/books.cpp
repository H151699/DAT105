#include "books.h"
#include<iostream>
#include<string>
using namespace std;

class books {

public:
	// Constructor
	books() {

		cout << " Hello, I am Constructor! " << endl;

	}


	// Deconstructor    whenver object is go out of scope then Deconstructor is called
	~books() {

		cout << " I am Out of scope " << endl;


		
	}



}; // Class

int main() {

	books book1; // the constructor will be called by the object " book1" when its created
	cout << " we are in 1 " << endl;
	cout << " we are in 2 " << endl;



	cin.get();
	return 0;
}