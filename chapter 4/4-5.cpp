#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main() {
	string s; // �Է��� ������ ���ڿ� 
	srand((unsigned)time(0)); // ���������� ���� ����
	int n; // �������� ���� ���ڸ� �����ϴ� ����
	int loopcount; // ������ ���ĺ� �̿��� ������ �����Ǿ� ������ ���� ������ �����ϱ� ����

	cout << "�Ʒ��� �� ���� �Է��ϼ���.(exit�� �Է��ϸ� �����մϴ�.)" << endl;

	for (;;) {
		cout << ">>";
		getline(cin, s, '\n');
		if (s == "exit") break;

		loopcount = 0;

		for (;;) {
			n = rand() % s.length();
			if (('a' <= s.at(n) && s.at(n) <= 'z') || ('A' <= s.at(n) && s.at(n) <= 'Z')) { // ������ ���ؼ� ���ĺ��� �����ϴ� ���ǹ�
				if (rand() % 2) { // ��ҹ��ڷ� ���� ���ǹ�
					s[n] = (char)('a' + rand() % ('z' - 'a'));
				}
				else {
					s[n] = (char)('A' + rand() % ('Z' - 'A'));
				}
				break;
			}
			else {
				loopcount++;
				if (1000 > loopcount) break;//�Էµ� ������ ���ĺ����� �̷���� ���� ������ ���� ������ ���� ������ ������ �ξ���. 
			}
		}

		cout << s << endl;
	}
}
