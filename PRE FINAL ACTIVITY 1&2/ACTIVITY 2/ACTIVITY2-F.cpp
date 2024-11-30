#include <iostream>
using namespace std;
int main() {
	int rows = 9;
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < i; ++j) {
			cout << '#';
		}
		cout << ' ';
		for (int j = i; j < rows; ++j) {
			cout << '#';
		}
		cout << endl;
	}
	
	return 0;
}