#include <iostream>
using namespace std;

int main() {
	double n[5];
	double avg = 0;

	cout << "실수 5개 입력>>";
	for (int i = 0; i < 5; i++) {
		cin >> n[i];
		avg += n[i];
	}

	avg = avg / 5;

	for (int i = 0; i < 5; i++) {
		cout << n[i] << ' ';
	}
	cout << "의 평균 = " << avg;

	return 0;
}