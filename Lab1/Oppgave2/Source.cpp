/*
Oppgave 2

Du skal lage en funksjon som får et heltall som parameter og returnerer fakultetet av tallet. 
Bruk datatypen long long. Ettersom jeg ikke har vist funksjoner enda, 
gis et skall du kan fylle inn i. 
Skriv en applikasjon som leser inn n og skriver ut n! (n fakultet), n er en long.

long fakultet (long n) {
// fyll inn kode for å beregne og returnere n fakultet
}

*/

#include <iostream>
using namespace std;

int number;
int factorial = 1;


long fakultet(long n) {
	
	for (int i = n; i >= 1; i--) {

		factorial = factorial * i;
	}

	return factorial;
}



int main() {

	cout << "Enter a number > " << flush;
	cin >> number;

	fakultet(number);

	cout << "The factorial of " << number << " is: " << factorial << endl;


	system("pause");
	return 0;
}