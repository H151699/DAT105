#include<iostream>
using namespace std;

int main() {


	int data = 50;
	int *ptr;				// initialize a point  int type, *p
	ptr = &data;			// ptr gets address of the data

	cout << "Get the Value where *ptr pointed to: " << *ptr << endl;	// print value where  ptr points to the adress in &data
	cout << "The Address where *ptr pointed to: " << ptr << endl;	// print address where value stored in *ptr

	*ptr = 100;				// change the value where ptr pointed to
	cout << "Get the value after the pointer *ptr changed its value : " << *ptr << endl;
	cout << ptr << endl;



	//



	int **double_ptr;	// initialize a double pointer 
	double_ptr = &ptr;	// get the value from the address of &ptr
	cout << "Value in **double_ptr is: " << **double_ptr << endl;

	cin.get();
	return 0;
}