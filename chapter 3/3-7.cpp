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
	cout << "--0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "--2에서 " << "10 까지의 랜덤 정수 10 개  --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;
}