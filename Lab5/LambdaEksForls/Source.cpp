#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;





vector<int> v = { 1, 3, 5, 6, 2, 4, 7, 9, 8 };


// Print HelloWorld in normal way
///*********************************************
void printHelloWorld1() {
	cout << "Hello World" << endl;
}

// Print HelloWorld by assigning a Lambda expression 
//		to the variable printHelloWorld2
///*********************************************

auto printHelloWorld2 = printHelloWorld1;

auto printHelloWorld3 = [] { cout << "Hello World " << endl; };




// VectorSum1 NormalFunction
///*********************************************
int vectorSum1(vector<int> v) {
	int sum = 0;
	for (int e : v) {
		sum += e;
	}

	return sum;
}

// VectorSum2  Lambda
///*************************

int vectorSum2(vector<int> v) {
	int sum = 0;
	for_each(v.begin(), v.end(), [&](int e) {sum += e; });
	return sum;
}



// Caculate Sum
///*********************************************

int caculateSum1(int a, int b) {
	return a + b;
}

// CaculateSum2   Lambda
///*************************
auto caculateSum2 = [](int a, int b)->int {return a + b; };





// Vector To String 
///*********************************************

template<class T>
string vectorToString1(vector<T> &vector) {
	stringstream ss;
	for (T e : vector) {
		ss << e << "  ";
	}

	return ss.str();
}

// Vector To String  Lambda
///**********************************
template<class T>
string vectorToString2(vector<T> &vector) {
	stringstream ss;
	for_each(vector.begin(), vector.end(), [&](T &e) { ss << e << " "; });
	return ss.str();
}
	



// Boolean CompareNumber
///*********************************************
template<class T> 
bool compareNumber(T &a, T& b) {
	return a > b;
}



// Sort Vector 1
///*********************************************
template<class T> 
void sortVector1(vector<T> &v) {
	sort(v.begin(), v.end(), compareNumber<T>);
}


// Sort Vector 2
///*********************************************
template<class T>
void sortVector2(vector<T> &v) {
	sort(v.begin(), v.end(), [](T &a, T &b) -> bool { return a > b; });
}






int main() {

	/*
	// Exercise on Lambda 1
	///*********************************************
	printHelloWorld1();
	printHelloWorld2();
	printHelloWorld3();
	
	///*********************************************

	cout << "Sum = " << caculateSum1(8, 2) << endl;
	cout << "Sum = " << caculateSum2(8, 2) << endl;


	///*********************************************

	cout << "Sum = " << vectorSum1(v) << endl;
	cout << "Sum = " << vectorSum2(v) << endl;

	
	
	*/

	/// copy1 and sort1 with compare
	///*********************************************
	vector<int> vectorCopy1{ v };  /// copy
	cout << vectorToString1(vectorCopy1) << endl; /// for-loop print out 
	
	sortVector1(vectorCopy1);	/// sort with compare
	cout << vectorToString1(vectorCopy1) << endl; /// for-loop print out

	/// copy2 and sort2  with Lambda
	///*********************************************
	vector<int> vectorCopy2{ v }; /// copy
	cout << vectorToString2(vectorCopy2) << endl; /// lambda print out
	
	sortVector2(vectorCopy2); /// sort with lambda
	cout << vectorToString2(vectorCopy2) << endl; /// lambda print out
	

	cin.get();
	return 0;
}