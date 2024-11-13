#include <iostream>

using namespace std;

int main ()
{
	int response;
	cout << "Enter the Temperature?: ";
	cin >> response;
	if (response <= 32)  {
		cout << "Bring heavy jacket";
	} 
	else if (response == 32 || response <= 50) {
		cout << "Bring light jacket";
	}
	else if (response > 50) {
		cout << "Not to bring any jacket";
	}	
	return 0;
}	