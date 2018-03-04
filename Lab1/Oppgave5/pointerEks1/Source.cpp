#include <iostream>
using namespace std;


int main() {


	int* pAdress;
	int* pValue;

	int var = 2;
	int foo = 3;

	/** Pointer */

	pAdress = &var; // Pointer points to the address of var;   &var: the address of var;

	pValue = &var; // point to the value stored in &var



	cout << "*pAdress of var is: " << pAdress << endl;

	cout << "*pValue of var is: " << *pValue << endl;

	/** Reference
	By giving a variable fek int foo a different name;

	make a reference to foo    ref   eq  var

	*/

	int& ref = foo;
	cout << "Value of foo is: " << foo << endl;
	cout << "Value of ref  is the same as foo: " << foo << endl;

	int *pAddressofRef;
	pAddressofRef = &ref;

	cout << "Get the address of ref (which will be same as foo): " << pAddressofRef << endl;







	cin.get();
	return 0;






}