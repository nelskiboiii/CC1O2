#include <iostream>

using namespace std;

int main()
{
	int age;
	double money;
	char answer;
	cout << "Enter your age: ";
	cin  >> age;
	if(age<13) {
		cout << "With parent? [y/n]: ";
		cin >> answer;
		if(answer=='n') {
			cout << "G & PG show.\n";
		} else {
			cout << "G show.\n";
		}	
	}
	else if(age<16) {
		cout << "With parent? [y/n]: ";
		cin >> answer;
		if(answer=='n') {
			cout << "G, PG, R show.\n";
		} else {
			cout << "G & PG show.\n";
		}
	} else {
		cout << "G, PG, R show.\n";
	}
	cout << "Enter your money: ";
    cin >> money;
    if(money<7.50) 
        cout << "Sorry you don't have enough money";
    else if(money<10.50) 
        cout << "You can watch the movie in matinee show";
    else
        cout << "You can watch the movie in evening show";             
	return 0;
}