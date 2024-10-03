#include <iostream>
using namespace std;

int main () 
{
		// Input values for a, b, and c
		int a, b, c;
		
		cout << "Enter the three numbers: ";
		cin >> a >> b >> c;
		
		// Finding the largest number
		if (a > b) {
			if (a > c) {
				cout << "The largest number is: " << a << endl;
		} 
			else {
				cout << "The largest number is: " << c << endl;
			}
		
		} 	else { 
		if (b > c) {
			  if( b > c) {
				cout << "The largest number is: " << b << endl;
		}
			else {
				cout << "The largest number is: " << c << endl;
			}
		}


		if (c > a) {
			  if( c > b) {
				cout << "The largest number is: " << c << endl;
		}
			else {
				cout << "The largest number is: " << b << endl;
			}
		}
		return 0;	
		}	
}
		