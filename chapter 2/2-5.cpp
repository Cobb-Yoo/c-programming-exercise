#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char data[100];
	int num = 0;
	cout << "문자들을 입력하라(100개 미만)." << endl;

	cin.getline(data, 100, '\n');

	for (int i = 0; i < 100; i++) {
		if (data[i] == '\n') break;
		if (data[i] == 'x' || data[i] == 'X')
			num++;
	}

	cout << "x의 개수는 " << num << endl;
}