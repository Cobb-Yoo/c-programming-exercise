#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Cal {
	int num[3];
public:
	void setNumber();
	int getNumber(int n);
};

class GamblingGame {
	string name;
	int num[3];
	Cal rand;
public:
	void setName(string name);
	void putEnterKey();
	void printNumber();
	bool check();
};

void Cal::setNumber() { // 3���� ���ڸ� ������ �� �迭�� ���� 
	num[0] = rand() % 3;
	num[1] = rand() % 3;
	num[2] = rand() % 3;
}

int Cal::getNumber(int n) {
	return num[n];
}

void GamblingGame::setName(string name) {
	this->name = name;
}

void GamblingGame::putEnterKey() {
	rand.setNumber();
}

void GamblingGame::printNumber() { //
	cout << '\t';
	for (int i = 0; i < 3; i++) {
		cout << rand.getNumber(i) << '\t';
	}
}

bool GamblingGame::check() { // ������ 3���� ���ڰ� �������� Ȯ���� ����� ��� 
	if ((rand.getNumber(0) == rand.getNumber(1)) && (rand.getNumber(1) == rand.getNumber(2))) {
		cout << name << "�� �¸�!!" << endl;
		return true;
	}
	else {
		cout << "�ƽ�����!" << endl;
		return false;
	}
}

int main() {

	srand((unsigned int)time(0));//���Ģ���� ������ ���� �������. 

	GamblingGame first;
	GamblingGame second;

	string name;

	cout << "ù��° ���� �̸�>> ";
	cin >> name;
	first.setName(name);

	cout << "�ι�° ���� �̸�>> ";
	cin >> name;
	second.setName(name);

	for (;;) {//����� ���ö� ���� ���ѷ���. 
		first.putEnterKey();
		first.printNumber();
		if (first.check()) break;

		second.putEnterKey();
		second.printNumber();
		if (second.check()) break;
	}
}
