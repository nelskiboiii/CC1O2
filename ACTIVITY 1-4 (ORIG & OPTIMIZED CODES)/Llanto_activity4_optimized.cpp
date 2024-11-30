#include <iostream>

using namespace std;

int main() {
	
	double balance;
	string accountType, accountLevel;
	cout << "Enter your bank account balance: $"; cin >> balance;
	cout << "Enter your account type (Personal or Business): "; cin >> accountType;
	cout << "Enter your account level (Standard, Gold, Platinum): "; cin >> accountLevel;
	double interestRate = 0.0;
	if (accountType == "Personal")
		if (accountLevel == "Standard" && balance >= 0)
			interestRate = 1.2;
	else if (accoutType == "Personal")
		if (accountLevel == "Gold" && balance >= 1000)
			interestRate = 1.9;
	else if (accoutType == "Personal")
		if (accountLevel == "Gold" && balance >= 5000)
			interestRate = 2.3;
	else if (accoutType == "Business")
		if (accountLevel == "Standard" && balance >= 1500)
			interestRate = 1.7;
	else if (accoutType == "Business")
		if (accountLevel == "Platinum" && balance >= 10000)
			interestRate = 2.5;
	if (interestRate > 0)
	cout << "Your interest rate is: " << interestRate << "$" << endl;
	return 0;
}
		