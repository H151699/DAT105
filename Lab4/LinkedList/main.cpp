#include "LinkedList.h"
#include <string>
using namespace std;


int main() {

	LinkedList <string> list;

	// Build the list;

	list.add("Jianyou");
	list.add("Siri");
	list.add("Bob");
	list.add("Sara");
	list.add("Kari");


	cout << "Here are the initial names \n";
	list.displayList();
	cout << "\n\n";


	// Remove Element
	cout << "Now removing Bob. \n\n";
	list.remove("Bob");
	list.remove("Kari");

	cout << "Here are the remaining element. \n";
	list.displayList();


	cin.get();
	return 0;

}