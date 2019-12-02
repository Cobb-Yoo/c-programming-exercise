#include <iostream>
using namespace std;

int main() {
	char data[3][100];
	char s;

	for (;;) {
		cout << "? ";

		cin.getline(data[0], 100, ' ');
		cin.getline(data[1], 100, ' ');
		cin.getline(data[2], 100, '\n');

		int a = atoi(data[0]);
		int b = atoi(data[2]);

		s = data[1][0];

		switch (s) {
		case '+':
			cout << a << " + " << b << " = " << a + b;
			break;
		case '-':
			cout << a << " - " << b << " = " << a - b;
			break;
		case '*':
			cout << a << " * " << b << " = " << a * b;
			break;
		case '/':
			cout << a << " / " << b << " = " << a / b;
			break;
		case '%':
			cout << a << " % " << b << " = " << a % b;
			break;
		default :
			break;
		}
	}

	return 0;
}