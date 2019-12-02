#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char data[100];

	cout << "문자열 입력>>";
	cin >> data;

	for (int i = 0; i < strlen(data); i++) {
		for (int j = 0; j <= i; j++)
			cout << data[j];
		cout << endl;
	}

	return 0;
}