#include <iostream> 

using namespace std;

int main() {

	for ( int i = 0; i <=6; i++) {
		for (int j = 0; j <=6; j++) {
			if ((i + j) % 3 == 0) {
				cout << "# ";
			} else {
				cout << "* ";
			}
		}
		
		cout << endl;
	}

		return 0;
}