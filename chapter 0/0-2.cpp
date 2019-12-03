#include <iostream>
using namespace std;

int main() {
	int a, b;

	cout << "두 수를 입력>>";
	cin >> a >> b;

	if (b%a == 0) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}
