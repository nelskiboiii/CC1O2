#include <iostream>

using namespace std;

int main() {
	
	int age, money;
	char response;
	cout << "Hello, How old are you?";
	cin >> age;
	if (age <13) {
		cout << "Are you with someone legal age? [y=yes/n=no]";
		cin >> response;
		if (response=='y') {
			cout << "The is allowed with your age is G\n";
			cout << "How much money do you have in your wallet?";
			cin >> money;
			if  (money>21) {
				cout << "You can watch the movie in the evening";
			}
			else if (money>=15) {
				cout << "You can watch the movie mantinee";
			} else {
				cout << "Go back here at the cinemas, if you have enough money to pay";
			}
		}
	
		else if (response=='n') {
			cout << "The is allowed with your age is G,PG,R\n";
			cout << "How much money do you have in your pocket?";
			cin >> money;
			if  (money>10.50) {
				cout << "You can watch the movie in the evening";
			}
			else if (money>=7.50) {
				cout << "You can watch the movie mantinee";
			} else {
				cout << "Go back here at the cinemas, if you have enough money to pay";
			}
		}
	} else if(age>=13 && age<16) {
		cout << "Are you with someone legal age? [y=yes/n=no]";
		cin >> response;
			if (response=='y') {
			cout << "The is allowed with your age is G\n";
			cout << "How much money do you have in your wallet?";
			cin >> money;
			if  (money>21) {
				cout << "You can watch the movie in the evening";
			}
			else if (money>=15) {
				cout << "You can watch the movie mantinee";
			} else {
				cout << "Go back here at the cinemas, if you have enough money to pay";
			}
		}
			else if (response=='n') {
			cout << "The is allowed with your age is G,PG,R\n";
			cout << "How much money do you have in your pocket?";
			cin >> money;
			if  (money>10.50) {
				cout << "You can watch the movie in the evening";
			}
			else if (money>=7.50) {
				cout << "You can watch the movie mantinee";
			} else {
				cout << "Go back here at the cinemas, if you have enough money to pay";
			}
		}
	} else if(age>=16) {	
			cout << "The is allowed with your age is G,PG,R\n";
			cout << "How much money do you have in your pocket?";
			cin >> money;
			if  (money>10.50) {
				cout << "You can watch the movie in the evening";
			}
			else if (money>=7.50) {
				cout << "You can watch the movie mantinee";
			} else {
				cout << "Go back here at the cinemas, if you have enough money to pay";
			}
	}
	return 0;
}
