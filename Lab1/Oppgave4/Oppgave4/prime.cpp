#include <iostream>
using namespace std;

bool *primtall(int n)
{
	bool* prime = new bool[n + 1];
	for (int i = 0; i < n; i++)
		prime[i] = true;
	for (int p = 2; p * p <= n; p++)
		if (prime[p] == true)
			for (int i = p * 2; i <= n; i += p)
				prime[i] = false;
	return prime;
}

int main()
{
	int n;
	cin >> n;
	bool *prim = primtall(n);
	for (int p = 2; p <= n; p++)
		if (prim[p])
			cout << p << endl;



	system("pause");
	return 0;
}










/*
int main() {

	int n;
	int flag = 1;
	cout << "Enter a number > " << flush;
	cin >> n;

	if (n < 2) {
		cout << n << " is not a prime number. " << endl;
	}
 
	for (int i = 2; i < sqrt(n) + 1; i++) {
		if (n % i == 0) {
			
			flag = 0;
			break;
		}
	}

	if (flag) {
		cout << n << " is a prime number " << endl;
	}
	else {
		cout << n << " is not a prime number " << endl;
	}



	system("pause");
	return 0;
}

*/