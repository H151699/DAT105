#include <iostream>
#include <thread>
using namespace std;



int a = 5;

void f() {
	
	a = 15;
}

int main() {

	thread t(f);  // t thread starts runing
	t.join();	   // main thread waiting for t to finish

	cout << a << endl;


	cin.get();
	return 0;
	
}
