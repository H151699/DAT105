
#include "Figur.h"
#include "Firkant.h"
#include "Trekant.h"

#include <iostream>
#include <vector>

using namespace std;


int main() {

	vector <Figur *> figurer;

	figurer.push_back(new Trekant(4));
	figurer.push_back(new Firkant(3, 4));
	figurer.push_back(new Trekant(6));
	figurer.push_back(new Firkant(2, 2));

	for (Figur *figur : figurer) {
		cout << figur->getNavn() << endl;
	}

	for (Figur *figur : figurer) {
		figur->tegn();
	}

	cin.get();
	return 0;
}