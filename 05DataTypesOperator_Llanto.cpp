#include <iostream>

using namespace std;

int main() {

	cout << "---------S I M P L E   C A L C U L A T O R---------" << endl;
	int a, b;
	cout << "---------------------------------------------------" << endl;	
	cout << "Enter 1st Number: ";
	cin >> a;
	cout << "---------------------------------------------------" << endl;	
	cout << "Enter 2nd Number: ";
	cin >> b;
	cout << "---------------------------------------------------" << endl;	
	cout << "Sum: " << a << '+' << b << '=' << a+b << endl;
	cout << "Difference: " << a << '-' << b << '=' << a-b << endl;
	cout << "Product: " << a << '*' << b << '=' << a*b << endl;
	cout << "Quotient: " << a << '/' << b << '=' << a/b << endl;
	cout << "Remainder: " << a << '%' << b << '=' << a%b << endl;
	cout << "---------------------------------------------------" << endl;	
	return 0;
}
