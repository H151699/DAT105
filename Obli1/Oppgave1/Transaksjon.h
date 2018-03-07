#ifndef OPPGAVE1_TRANSAKSJON_H
#define OPPGAVE1_TRANSAKSJON_H

using namespace std;
#include <ostream>


class Transaksjon {
public:
	int getFraId() const;

	void setFraId(int fraId);

	int getTilId() const;

	void setTilId(int tilId);

	double getBelop() const;

	void setBelop(double belop);

	const string &getFilnavn() const;

	void setFilnavn(const string &filnavn);

	Transaksjon(int fraId, int tilId, double belop, string filnavn);

	~Transaksjon() = default;

	friend ostream &operator<<(ostream &os, const Transaksjon &transaksjon);

private:
	int fraId;
	int tilId;
	double belop;
	string filnavn;
};


#endif //OPPGAVE1_TRANSAKSJON_H