#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char a[100];

	for (;;) {
		cout << "종료하고 싶으면 yes를 입력하세요>>";
		cin.getline(a, 100, '\n');
		if (!strcmp(a, "yes")) break;
	}

	cout << "종료합니다..." << endl;
	return 0;
}