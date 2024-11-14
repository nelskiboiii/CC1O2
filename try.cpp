#include <iostream>

using namespace std;

int main() 
{
	
	int age;
	char answer;
	cout << "Enter your age: ";
	cin >> age;
	if (age == 13) {
		cout << "With parents? [y=yes, n=no]: ";
		cin >> answer;
			if (answer=='y') {
				cout <<"G, PG";
			}
			else
				cout << "G";
	}
	//else if ((age =< 13 && age <= 16) 
		return 0;
}