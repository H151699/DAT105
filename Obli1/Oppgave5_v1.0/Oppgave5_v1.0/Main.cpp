#include "IntStackArray.h"


#include <iostream>
#include <string>
using namespace std;


int main() {
	string s = "Norge Pyeongchang OL , LO GNAHCGNOEYP";
	auto *stack = new IntStackArray<char>();

	for (char c : s)
		stack->push(c);

	cout << s << endl;

	while (!stack->isEmptyStack()) {
		char c = stack->pop();
		cout << c;
	}
	cout << endl;




	cin.get();
	return 0;
}

}