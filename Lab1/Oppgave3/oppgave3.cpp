/*
Oppgave 3

Lag en applikasjon som oppretter en tabell (array) av heltall, 
fyller den med alle primtallene i intervallet fra 0 til 100 

(lag gjerne en funksjon som finner neste primtall etter det siste du har funnet). 
Ta for enkelhets skyld med tallet 1 i sekvensen og da trenger du plass til 26 tall. 
Til slutt skal innholdet i tabellen skrives ut. E
gentlig vet du ikke hvor mange det er. 
Prøv å finn en løsning på problemet hvis du ikke vet antallet.
*/


#include <iostream>
#include <iomanip>
using namespace std;







int main() {

	int num, i, count, n;

	cout << "Enter max range >  " << flush;
	cin >> n;

	for(num = 1; num <= n; num++) {

		count = 0;

		for (i = 2; i <= num / 2; i++) {
			if (num % i == 0) {
				count++;
				break;
			}
		}

		if (count == 0 && num != 1) {
			cout << num << endl;
			
		}
		
	}

	


	system("pause");
	return 0;
}

