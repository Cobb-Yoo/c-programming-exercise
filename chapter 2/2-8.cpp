#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char name[5][100];
	int max = 0;
	int max_num;

	cout << "5명의 이름을 ';'으로 구분하여 입력하세요." << endl << ">>";
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

	cout << "가장 긴 이름은 " << name[max_num] << endl;

	return 0;
}