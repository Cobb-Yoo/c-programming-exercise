#include <iostream>
using namespace std;

int main() {
	int i, j; // i�� ���� ��Ÿ���� j���� ��Ÿ��
	int num;

	cout << "���� �Է�>>";
	cin >> num;

	for (i = 0; i < num; i++) { //for �� �̿��� ����
		for (j = num - i; j > 0; j--) {
			cout << '*';
		}
		cout << endl;
	}

	cout << endl;
	i = 0;

	while (i < num) { //while �� �̿��� ����
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

	do { //do ~ while �� �̿��� ����
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