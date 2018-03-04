
// Created by Andrew Jianyou Day
// 4 mars 2018


/*

Swap values by using  Pinter and Reference

*/


#include<iostream>
using namespace std;


void swap(int*, int*);

int main() {


	int x = 2;
	int y = 3;

	cout << "Before: " << "x = " << x << "  " << "y =  " << y << endl;

	swap(&x, &y); // change address

	cout << "After: " << "x = " << x << "  " << "y =  " << y << endl;




	cin.get();
	return 0;
}

// swap
void swap(int *n, int *m) {

	int tmp = *n;
	*n = *m;
	*m = tmp;

}