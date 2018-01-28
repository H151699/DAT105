#include "Firkant.h"

#include <iostream>
using namespace std;





Firkant::Firkant() : Figur{ "firkant" }, hoyde{ 0 }, lengde{ 0 } {
}

Firkant::Firkant(int hoyde, int lengde) : Figur{ "firkant" }, hoyde{ hoyde }, lengde{ lengde } {
}

Firkant::Firkant(const Firkant &firkant) : Figur{ "firkant" }, hoyde{ firkant.hoyde }, lengde{ firkant.lengde } {
}



void Firkant::tegn() {

	for (int i = 0; i < hoyde; i++) {
		for (int j = 0; j < lengde; j++) {
			cout << '*';
		}
		cout << endl;
	}
}


int Firkant::getHoyde()const {
	return hoyde;
}

void Firkant::setHoyde(int hoyde) {
	Firkant::hoyde = hoyde;
}

int Firkant::getLengde() const {
	return lengde;
}

void Firkant::setLengde(int lengde) {
	Firkant::lengde = lengde;
}
