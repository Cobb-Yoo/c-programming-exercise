#include <iostream>
using namespace std;

bool isMultiple(int x, int y); // y �� x�� ������� �Ǻ��ϴ� bool �Լ�

int main() {
	int a, b;

	cout << "�� ���� �Է�>>";
	cin >> a >> b;

	if (isMultiple(a, b)) cout << "Yes";
	else cout << "No";

	return 0;
}

bool isMultiple(int x, int y) {
	if (y % x == 0) return true;
	else return false;
}