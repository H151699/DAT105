/*
Created by Andrew Jianyou Day
2018-03-06
*/
#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

// Lambda


void printHelloWorld1() {
	cout << "Hello World" << endl;
}


/// Lambda
auto printHelloWorld2 = []() { 	cout << "Hello World2" << endl; };

/// CalculateSum1
int calculateSum1(int a, int b) {
	
	return a + b;
}

/// Lambda
auto calculateSum2 = [](int a, int b) -> int {return a + b; };


/// vectorSum1
int vectorSum1(vector<int> v) {
	int sum = 0;
	for (int e : v) {

		sum += e;
	}

	return sum;

}

/// vectorSum2
int vectorSum2(vector<int> v) {
	int sum = 0;
	
	for_each(v.begin(), v.end(),  // for_each(begin(v), end(v),
		[&](int e) {
			sum += e; });

	return sum;
}


//********************************************************
/// compareNumber
template <class T>
bool compareNumber(T &a, T &b) {
	return a > b;
}


//********************************************************
/// sortVector1
template <class T>
void sortVector1(vector<T> &v) {
	sort(v.begin(), v.end(), compareNumber<T>);	
}

/// vectorToString1
string vectorToString1(vector<int> v) {
	stringstream ss;
	for (int i = 0; i < v.size(); ++i) {
		if (i != 0)
			ss << ",";
		ss << v[i];
	}
	return ss.str();
}
//********************************************************


/// sortVector2
template <class T>
void sortVector2(vector<T> &v) {

	sort(v.begin(), v.end(), [](T &a, T &b) {
		return a > b;
	});
}


/// vectorToString2

template<class T>
string vectorToString2(vector<T> &vector) {
	stringstream ss;
	for_each(vector.begin(), vector.end(), [&](T &e) { ss << e << " "; });
	return ss.str();
}







//********************************************************
/// main
int main() {

	vector<int> v = { 1, 9, 7, 3, 5, 6, 2, 8, 4 };
	printHelloWorld1();
	printHelloWorld2();
	
	cout << endl;
	
	cout << "Sum = " << calculateSum1(5, 8) << endl;
	cout << "Sum(Lambda) = " << calculateSum2(5, 8) << endl;

	cout << endl;

	cout << "vectorSum1 = " << vectorSum1(v) << endl;
	cout << "vectorSum2 = " << vectorSum2(v) << endl;

	cout << endl;

	vector<int> vectorCopy1{ v };
	cout << vectorToString1(vectorCopy1) << endl;

	sortVector1(vectorCopy1);
	cout << vectorToString1(vectorCopy1) << endl;
	
	cout << endl;



	vector<int> vectorCopy2{ v };
	cout << vectorToString2(vectorCopy2) << endl;
	
	sortVector2(vectorCopy2);
	cout << vectorToString2(vectorCopy2) << endl;
	
	cin.get();
	return 0;
}

/* output*****************************************

Hello World
Hello World2

Sum = 13
Sum(Lambda) = 13

vectorSum1 = 45
vectorSum2 = 45

1, 9, 7, 3, 5, 6, 2, 8, 4
9, 8, 7, 6, 5, 4, 3, 2, 1

1 9 7 3 5 6 2 8 4
9 8 7 6 5 4 3 2 1


*/