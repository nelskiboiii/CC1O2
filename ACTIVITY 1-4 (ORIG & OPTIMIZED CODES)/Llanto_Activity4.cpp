#include <iostream>

using namespace std;

int main()
{
	int minblnce;
	char response;
	
	cout << "Enter your Minimum Balance:";
	cin >> minblnce;
	if (minblnce==0) {
		cout << "Enter your Type of Account: [p=personal,b=business]";
		cin >> response;
		if (response=='p') {
			cout << "Enter your account level: [s=standard,g=gold,p=platinum]";
			cin >> response;
		} if (response=='s') {
			cout << "Your Interest 1.2%";
		} if (response=='g') {
			cout << "You have no Bank Account.";
		} if (response=='p') {
			cout << "You have no Bank Account.";
		} if (response=='b') {
			cout << "You have no Bank Account.";
	}
	}	
	if (minblnce==1000) {
	cout << "Enter your Type of Account: [p=personal,b=business]";
	cin >> response;
		if (response=='p') {
			cout << "Enter your account level: [s=standard,g=gold,p=platinum]";
			cin >> response;
		} if (response=='g') {
			cout << "Your Interest 1.9%";
		} if (response=='b') {
			cout << "You have no Bank Account.";
		} if (response=='s') {
			cout << "You have no Bank Account.";
		} if (response=='p') {
			cout << "You have no Bank Account.";
	}
	}
	if (minblnce==5000) {
	cout << "Enter your Type of Account: [p=personal,b=business]";
	cin >> response;
		if (response=='p') {
			cout << "Enter your account level: [s=standard,g=gold,p=platinum]";
			cin >> response;
		} if (response=='g') {
			cout << "Your Interest 2.3%";
		} if (response=='b') {
			cout << "You have no Bank Account.";
		} if (response=='s') {
			cout << "You have no Bank Account.";
		} if (response=='p') {
			cout << "You have no Bank Account.";
	}
	}
	if (minblnce==1500) {
		cout << "Enter your Type of Account: [p=personal,b=business]";
		cin >> response;
		if (response=='b') {
			cout << "Enter your account level: [s=standard,g=gold,p=platinum]";
			cin >> response;
		} if (response=='s') {
			cout << "Your Interest 1.7%";
		} if (response=='p') {
			cout << "You have no Bank Account.";
		} if (response=='g') {
			cout << "You have no Bank Account.";
		} if (response=='p') {
			cout << "You have no Bank Account.";
	}
	}	
	if (minblnce==10000) {
		cout << "Enter your Type of Account: [p=personal,b=business]";
		cin >> response;
		if (response=='b') {
			cout << "Enter your account level: [s=standard,g=gold,p=platinum]";
			cin >> response;
		} if (response=='p') {
			cout << "Your Interest 2.5%";
		} if (response=='P') {
			cout << "You have no Bank Account.";
		} if (response=='g') {
			cout << "You have no Bank Account.";
		}else if (response=='s') {
			cout << "You have no Bank Account.";
	}
	}
		
	return 0;
}
	
	