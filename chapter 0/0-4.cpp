#include <iostream>
using namespace std;

int main() {
	double n[5];
	double avg = 0;

	cout << "�Ǽ� 5�� �Է�>>";
	for (int i = 0; i < 5; i++) {
		cin >> n[i];
		avg += n[i];
	}

	avg = avg / 5;

	for (int i = 0; i < 5; i++) {
		cout << n[i] << ' ';
	}
	cout << "�� ��� = " << avg;

	return 0;
}