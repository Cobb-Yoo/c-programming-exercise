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

void Cal::setNumber() { // 3개의 숫자를 생성한 뒤 배열에 저장 
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

bool GamblingGame::check() { // 생성된 3개의 숫자가 동일한지 확인후 결과를 출력 
	if ((rand.getNumber(0) == rand.getNumber(1)) && (rand.getNumber(1) == rand.getNumber(2))) {
		cout << name << "님 승리!!" << endl;
		return true;
	}
	else {
		cout << "아쉽군요!" << endl;
		return false;
	}
}

int main() {

	srand((unsigned int)time(0));//비규칙적인 랜덤한 수를 얻기위함. 

	GamblingGame first;
	GamblingGame second;

	string name;

	cout << "첫번째 선수 이름>> ";
	cin >> name;
	first.setName(name);

	cout << "두번째 선수 이름>> ";
	cin >> name;
	second.setName(name);

	for (;;) {//결과가 나올때 까지 무한루프. 
		first.putEnterKey();
		first.printNumber();
		if (first.check()) break;

		second.putEnterKey();
		second.printNumber();
		if (second.check()) break;
	}
}
