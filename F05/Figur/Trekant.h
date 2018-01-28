/**
* Definisjon av Trekant som er en Figur.
* Denne er likebeinet og rettvinklet.
*/
#ifndef TREKANT_H_
#define TREKANT_H_
#include "Figur.h"


#pragma once
class Trekant : public Figur {

private:
	int side;

public:
	Trekant();
	Trekant(int side);
	Trekant(const Trekant &trekant);

	virtual ~Trekant();

	void tegn() override;

	int getSide() const;
	void setSide(int hoyde);




};




#endif