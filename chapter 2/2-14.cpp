#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char coffee[100];
	int oder;
	int total = 0;
	int cost = 0;

	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500�� �Դϴ�." << endl;

	while (total <= 20000) {
		cout << "�ֹ�>> ";
		cin >> coffee >> oder;
		if (!strcmp(coffee, "����������")) {
			total += 2000 * oder;
			cout << 2000 * oder << "���Դϴ�. ���ְ� �弼��." << endl;
		}
		else if (!strcmp(coffee, "�Ƹ޸�ī��")) {
			total += 2300 * oder;
			cout << 2300 * oder << "���Դϴ�. ���ְ� �弼��." << endl;
		}
		else if (!strcmp(coffee, "īǪġ��")) {
			total += 2500 * oder;
			cout << 2500 * oder << "���Դϴ�. ���ְ� �弼��." << endl;
		}
	}
	cout << "���� " << total << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~~" << endl;

	return 0;
}