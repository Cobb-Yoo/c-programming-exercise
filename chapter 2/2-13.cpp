#include <iostream>
using namespace std;

int main() {
	int oder;
	int peaple;

	cout << "***** �¸��忡 ���� ���� ȯ���մϴ�. *****" << endl;

	for (;;) {
		for (;;) {
			cout << "«��:1, ¥��:2, ������:3, ����:4>>  ";
			cin >> oder;

			if (!(1 <= oder && oder <= 4)) cout << "�ٽ� �ֹ��ϼ���.!!" << endl;
			else break;
		}

		if (oder == 4) {
			cout << "���� ������ �������ϴ�." << endl;
			break;
		}

		for (;;) {
			cout << "���κ�?";
			cin >> peaple;

			if ((1 <= peaple)) break;
		}

		switch (oder) {
		case 1:
			cout << "«��" << peaple << "�κ� ���Խ��ϴ�" << endl;
			break;
		case 2:
			cout << "¥��" << peaple << "�κ� ���Խ��ϴ�" << endl;
			break;
		case 3:
			cout << "������" << peaple << "�κ� ���Խ��ϴ�" << endl;
			break;
		default:
			break;
		}
	}

	return 0;
}