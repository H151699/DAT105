#pragma once
#ifndef FIRKANT_H_
#define FIRKANT_H_
#include <string>

#include "Figur.h"
class Firkant : public Figur {


private: 
	int hoyde;
	int lengde;

public:
	// constructors
	Firkant();
	Firkant(int hoyde, int lengde);
	Firkant(const Firkant &firkant);
	
	//method
	void tegn() override;


	// get - set metoder
	int getHoyde() const;
	void setHoyde(int hoyde);

	int getLengde()const;
	void setLengde(int lengde);

};

#endif