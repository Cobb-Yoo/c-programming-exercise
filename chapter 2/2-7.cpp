#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char a[100];

	for (;;) {
		cout << "�����ϰ� ������ yes�� �Է��ϼ���>>";
		cin.getline(a, 100, '\n');
		if (!strcmp(a, "yes")) break;
	}

	cout << "�����մϴ�..." << endl;
	return 0;
}