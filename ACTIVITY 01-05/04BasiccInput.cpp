#include <iostream> 

using namespace std;

int main() {
	string Nickname, cyl, School;
	
	cout << "Enter you nickname: ";
	cin >> Nickname;
	cout << "Enter your Course-Year Level:";
	cin >> cyl;
	cout << "Enter your School:";
	cin >> School;
	cout << "Wow Congrats " << Nickname << "! " << cyl << " is a nice course. And your are studying in" << School << " which is one of the Center of Excellence in Tertiary Education";
	return 0;
