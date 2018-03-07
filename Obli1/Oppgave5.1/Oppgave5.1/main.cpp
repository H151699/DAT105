
#include <string>
#include <iostream>
#include "StackArray.h"
using namespace std;



int main() {
	string s = "netsket re etteD 1.5";
	auto *stack = new StackArray<char>();

	for (char c : s)
		stack->push(c);

	cout << s << endl;
	while (!stack->isEmpty()) {
		char c = stack->pop();
		cout << c;
	}
	cout << endl;
	
	cin.get();
	return 0;
}