#include <iostream>
using namespace std;

bool isMultiple(int x, int y); // y 가 x의 배수인지 판별하는 bool 함수

int main() {
	int a, b;

	cout << "두 정수 입력>>";
	cin >> a >> b;

	if (isMultiple(a, b)) cout << "Yes";
	else cout << "No";

	return 0;
}

bool isMultiple(int x, int y) {
	if (y % x == 0) return true;
	else return false;
}