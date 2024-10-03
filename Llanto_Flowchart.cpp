#include <iostream>

using namespace std;

int main () {
	int a, b, c;
	
	// Input values for a, b, and c
	cout << "Enter the number for A B C: ";
	cin >> a >> b >> c;
	
	// Finding the largest number
	if (a > b) {
		if (a > c) {
			cout << "A is largest" << endl;
		} else {
			cout << "C is largest" << endl;
		} 
	} else if  (b > a) {
		if (b > c) {
			cout << "B is largest" << endl;
		} else {
			cout << "C is largest" << endl;
		}
	}
		return 0;
}
	
	