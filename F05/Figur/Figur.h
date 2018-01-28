#pragma once
#ifndef FIGUR_H_
#define FIGUR_H_
#include <string>


using namespace std;

/**
Basic class for alle figurene.
Denne er abstrakt og
inneholder feltet navn og den abstrakte metoden tegn.

merk at konstruktørene og destruktøren er "inline".
Det samme er get og set metoder.



*/


class Figur {

private:
	string navn;



public:

	Figur() : navn("") { };
	Figur(const string &navn) : navn(navn) { }
	Figur(const Figur &figur) : navn(figur.navn) {}


	virtual ~Figur() {}

	// method
	virtual void tegn() = 0;


	// get set .  const : not changeable
	const string &getNavn() const {
		return navn;
	}

	void setNavn(const string &navn) {
		Figur::navn = navn;
	}

};




#endif // FIGUR_H_