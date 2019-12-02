#include <iostream>
#include <cstdlib>
using namespace std;

class Random {
public:
	int next();
	int nextInRange(int a, int b);
};

int Random::next() {
	return rand();
}

int Random::nextInRange(int a, int b) {
	return a + rand() % (b - a);
}

int main() {
	Random r;
	cout << "--0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "--2에서 " << "4 까지의 랜덤 정수 10 개  --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;
}