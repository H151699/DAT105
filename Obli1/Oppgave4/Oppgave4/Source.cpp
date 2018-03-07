#include <iostream>
using namespace std;

/*
**********************************************************
a) Create a function that returns the bit value in position k.
**********************************************************
*/
int bitValueInPosition(unsigned long n, int k) {

	return n & (1 << k);
}

/*
	**********************************************************
b) Create a function to count the number of bits 
	that are set to 1 in the binary representation of n.
	**********************************************************
*/
int numberOfBits(unsigned short n) {
	if (n == 0) {
		return 0;
	}
	else {
		return (n & 1) + numberOfBits(n >> 1);
	}
}

/*
	**********************************************************
c) Create a function to find and return the highest bit set to 1 in the binary representation of n. 
	Return -1 if none.
	**********************************************************
*/

int  highestBitSetToOne(unsigned short n) {
	if (n == 0) {
		return -1;
	}
	else {
		return 1 << (int)log2(n);
	}
}


/*
**********************************************************
d) Create a function to mirror the bit pattern in n.
**********************************************************
*/
int mirrorBitPattern(unsigned short n) {
	unsigned int numBits = sizeof(n) * 8 - 1;
	unsigned int revers = 0;

	for (int i = 0; i <= numBits; i++) {

		if (n & (1 << i)) {

			revers |= 1 << (numBits - i);
			
		}
		
	}
	return revers;
	
}





/*
**********************************************************
e) Create a function that returns true if n is symmetrical in the bit pattern, otherwise false.
**********************************************************
*/

bool erSymmetrical(unsigned short n) {
	if (n == 0) {
		return true;
	}
	else if (n & mirrorBitPattern(n) != 0) {
		
		return false;
	}
}





/*
**********************************************************
f) Create a function that finds and returns the number of bits set to 1 in position 
									less than an integer k (to the right). Return -1 if none.
**********************************************************
*/
int heighestBitSetOneToRight(unsigned short n, int k) {
	for (int i = k; i < sizeof(n) * 8; i++) {
		n &= ~(1 << i);
	}

	return highestBitSetToOne(n);
	
}



/*
**********************************************************
g) Create a function that finds and returns the number of bits set to 1 in position 
										greater than an integer k (left). Return -1 if none.
**********************************************************
*/

int heighestBitSetOneToLeft(unsigned short n, int k) {
	for (int i = 0; i <= k; i++) {
		n &= ~(1 << i);

	}
	return highestBitSetToOne(n);
}






int main() {
	unsigned short n = 257;  // 

	unsigned short j = 212121;
	int k = 2;
	
	/* a *******************************************/
	cout << "bitValueInPosition: " <<  bitValueInPosition(n, k) << endl;
	cout << endl;
	/* b *******************************************/
	cout << "numberOfBits: " << numberOfBits(n) << endl;
	cout << endl;

	/* c *******************************************/
	cout << "highestBitSetToOne: "<< highestBitSetToOne(n);
	cout << endl;

	/* d *******************************************/
	// cout << mirrorBitPattern(n) << endl;
	cout << endl;

	/* 3 *******************************************/
	cout << "erSymmetrical: "<< erSymmetrical(j) << endl;
	cout << endl;


	/* 3 *******************************************/
	cout << "heighestBitSetOneToRight: " << heighestBitSetOneToRight(n, k) << endl;
	cout << endl;

	/* 3 *******************************************/
	cout << "heighestBitSetOneToLeft: " << heighestBitSetOneToLeft(n, k) << endl;


	cin.get();
	return 0;
}