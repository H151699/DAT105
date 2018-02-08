
#include <iostream>
#include <iomanip>
using namespace std;



int main() {

	int num, i, flag, n;
	int pArray[50];
	cout << "Enter max range >  " << flush;
	cin >> n;

	for (num = 0; num <= n; num++) {

		flag = 0;

		for (i = 2; i <= num / 2; i++) {
			if (num % i == 0) {
				flag++;
				break;
			}
		}

		if (flag == 0 && num != 1 && num != 0) {
			cout << num << endl;
			
		}

	}




	system("pause");
	return 0;
}

