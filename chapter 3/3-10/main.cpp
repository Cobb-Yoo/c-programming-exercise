#include <iostream>
using namespace std;
#include "Calculator.h"

int main() {
	Add a;
	Sub s;
	Mul m;
	Div d;

	int x, y;
	char z;

	for (;;) {
		cout << "�� ������ �����ڸ� �Է��ϼ���>>";
		cin >> x >> y >> z;

		switch (z)
		{
		case '*':
			m.setValue(x, y);
			cout << m.calculate() << endl;
			break;
		case '+':
			a.setValue(x, y);
			cout << a.calculate() << endl;
			break;
		case '-':
			s.setValue(x, y);
			cout << s.calculate() << endl;
			break;
		case '/':
			d.setValue(x, y);
			cout << d.calculate() << endl;
			break;
		default:
			break;
		}
	}
}