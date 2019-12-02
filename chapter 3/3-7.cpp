#include <iostream>
#include <cstdlib>
using namespace std;

class Selectable {
public:
	int next();
	int nextInRange(int a, int b);
};

int Selectable::next() {
	return (rand() / 2) * 2;
}

int Selectable::nextInRange(int a, int b) {
	return (rand() % ((b - a) / 2)) * 2 + a + 1;
}

int main() {
	Selectable r;
	cout << "--0���� " << RAND_MAX << "������ ���� ���� 10 ��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "--2���� " << "10 ������ ���� ���� 10 ��  --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;
}