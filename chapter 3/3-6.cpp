#include <iostream>
#include <cstdlib>
using namespace std;

class EvenRandom {
public:
	int next();
	int nextInRange(int a, int b);
};

int EvenRandom::next() {
	return rand();
}

int EvenRandom::nextInRange(int a, int b) {
	return (rand() % ((b - a) / 2 + 1)) * 2 + a;
}

int main() {
	EvenRandom r;
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