#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char name[5][100];
	int max = 0;
	int max_num;

	cout << "5���� �̸��� ';'���� �����Ͽ� �Է��ϼ���." << endl << ">>";
	for (int i = 0; i < 5; i++) {
		cin.getline(name[i], 100, ';');
		if (max < strlen(name[i])) {
			max = strlen(name[i]);
			max_num = i;
		}
	}

	for (int i = 0; i < 5; i++) {
		cout << i + 1 << " : " << name[i] << endl;
	}

	cout << "���� �� �̸��� " << name[max_num] << endl;

	return 0;
}