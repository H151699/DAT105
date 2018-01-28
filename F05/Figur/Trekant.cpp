#include "Trekant.h"
#include <iostream>

using namespace std;

Trekant::Trekant() : Figur("trekant"), side(0) {
}

Trekant::Trekant(int side) : Figur("trekant"), side(side) {
}

Trekant::Trekant(const Trekant &trekant) : Figur("trekant"), side(trekant.side) {
}

Trekant::~Trekant() {
}


void Trekant::tegn() {
	for (int i = 0; i < side; i++) {
		for (int j = 0; j <= i; j++) {
			cout << '*';
		}
		cout << endl;
	}
}

int Trekant::getSide() const {
	return side;
}

void Trekant::setSide(int side) {
	Trekant::side = side;
}

