#include <iostream>
using namespace std;

int main() {
	int i, j; // i는 열을 나타내고 j행을 나타냄
	int num;

	cout << "정수 입력>>";
	cin >> num;

	for (i = 0; i < num; i++) { //for 를 이용한 루프
		for (j = num - i; j > 0; j--) {
			cout << '*';
		}
		cout << endl;
	}

	cout << endl;
	i = 0;

	while (i < num) { //while 을 이용한 루프
		j = num - i; 
		while (j > 0) {
			cout << '*';
			j--;
		}
		cout << endl;
		i++;
	}

	cout << endl;
	i = 0;

	do { //do ~ while 을 이용한 루프
		j = num - i;
		do {
			cout << '*';
			j--;
		} while (j > 0);
		cout << endl;

		i++;
	} while (i < num);

	return 0;
}