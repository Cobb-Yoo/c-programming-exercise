#include <iostream>
using namespace std;

int main() {
	int i;

	for (i = 0; i < 10; i++) {
		for (int j = 1; j <= 10; j++) {
			cout << i * 10 + j << "	";
		}
		cout << endl;
	}

	return 0;
}