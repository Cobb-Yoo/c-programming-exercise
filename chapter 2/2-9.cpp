#include <iostream>
using namespace std;

int main() {
	char name[100];
	char addess[100];
	int age;

	cout << "이름은? ";
	cin.getline(name, 100);

	cout << "주소는? ";
	cin.getline(addess, 100);

	cout << "나이는? ";
	cin >> age;

	cout << name << ", " << addess << ", " << age << "세" << endl;

	return 0;
}