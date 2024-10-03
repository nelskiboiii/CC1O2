#include <iostream>
using namespace std;

int main() {
	
	float num1, num2, num3, num4, sum, average;
	
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;
	cout << "Enter third number: ";
	cin >> num3;
	cout << "Enter fourth number: ";
	cin >> num4;
	
	sum = num1 + num2 + num3 + num4;
	average = sum/4;
	
	cout << "The sum is: " << sum << endl;
	cout << "The avergae is: " << average << endl;
	return 0;

}