#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int count = 0;

	cout << "���ڿ� �Է�>> ";
	getline(cin, s, '\n');

	for (int i = 0; i < s.length(); i++) {
		i = s.find('a', i);
		if (i < 0) break;//���� ������ ���� ���� �ڵ�. 
		count++;
	}

	cout << "���� a�� " << count << "�� �ֽ��ϴ�.";
}
