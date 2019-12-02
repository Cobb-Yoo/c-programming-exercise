#include <iostream>
#include <string>
using namespace std;

int main() {
	string password;
	string tmp_password;

	cout << "새 암호를 입력하세요>>";
	cin >> password;
	cout << "새 암호를 다시 한 번 입력하세요>>";
	cin >> tmp_password;

	if (password == tmp_password) cout << "같습니다.";
	else cout << "다릅니다.";

	return 0;
}