#include <iostream>
#include <string>
using namespace std;

int main() {
	string password;
	string tmp_password;

	cout << "�� ��ȣ�� �Է��ϼ���>>";
	cin >> password;
	cout << "�� ��ȣ�� �ٽ� �� �� �Է��ϼ���>>";
	cin >> tmp_password;

	if (password == tmp_password) cout << "�����ϴ�.";
	else cout << "�ٸ��ϴ�.";

	return 0;
}