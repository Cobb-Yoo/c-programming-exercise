#include <iostream>
using namespace std;

int main() {
	char name[100];
	char addess[100];
	int age;

	cout << "�̸���? ";
	cin.getline(name, 100);

	cout << "�ּҴ�? ";
	cin.getline(addess, 100);

	cout << "���̴�? ";
	cin >> age;

	cout << name << ", " << addess << ", " << age << "��" << endl;

	return 0;
}