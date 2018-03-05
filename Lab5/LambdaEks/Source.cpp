
/* Created by Andrew Jianyou Day
	2015-03-05
*/
#include <iostream>
using namespace std;


int main() {
	/// [] capture functon
	
	[](int value) {
		cout << "I am inside a Lambda function with a value =  " << value << endl;
	
	}(100); ///Invoke the lambda function;
			///and Passing arguments to lambda just like calling any other functions

	cin.get();
	return 0;
}