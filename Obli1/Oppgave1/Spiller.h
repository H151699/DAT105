#ifndef OPPGAVE1_SPILLER_H
#define OPPGAVE1_SPILLER_H

#include <ostream>
#include<vector>
#include "Konto.h"

#include "Transaksjon.h"

class Spiller {
public:

	int getId() const;

	const string &getNavn() const;

	void setNavn(const string &navn);

	double getBeholdning() const;

	Konto::Type getType() const;

	const vector<Transaksjon> &getTransaksjoner() const;

	bool innskudd(double n);

	bool uttak(double n);

	bool betal(Spiller &spiller, double belop);

	Spiller(int id, string navn, Konto konto);
	~Spiller() = default;

	friend ostream &operator<<(ostream &os, const Spiller &spiller);
	void operator+(Spiller &spiller);
	void operator-(Spiller &spiller);
	bool operator==(const Spiller &spiller);

private:
	int id;
	string navn;
	Konto konto;
	vector <Transaksjon> transaksjoner;

	bool sjekkDesimal(double n);
};


#endif //OPPGAVE1_SPILLER_H