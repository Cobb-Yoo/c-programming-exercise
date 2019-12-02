#include <iostream>
using namespace std;

class Container {
	int size;
public:
	Container() { size = 10; }
	void fill();
	void consume();
	int getSize();
};

class CoffeeVendingMachine {
	Container tong[3];
	void fill();
	void selectEspresso();
	void selectAmericano();
	void selectSugarCoffee();
	void show();
public:
	void run();
};

void Container::fill() {
	this->size = 10;
}

void Container::consume() {
	this->size--;
}

int Container::getSize() {
	return this->size;
}

void CoffeeVendingMachine::run() {
	cout << "메뉴를 눌러주세요(1:에스프레소, 2:아메리카노,3:설탕커피,4:잔량보기, 5:채우기)>>";
	int n;

	cin >> n;

	switch (n)
	{
	case 1:
		if (this->tong[0].getSize() > 0 && this->tong[1].getSize() > 0)
			this->selectEspresso();
		else
			cout << "원료가 부족합니다." << endl;
		break;
	case 2:
		if (this->tong[0].getSize() > 0 && this->tong[1].getSize() > 1)
			this->selectAmericano();
		else
			cout << "원료가 부족합니다." << endl;
		break;
	case 3:
		if (this->tong[0].getSize() > 0 && this->tong[1].getSize() > 1 && this->tong[2].getSize() > 1)
			this->selectSugarCoffee();
		else
			cout << "원료가 부족합니다." << endl;
		break;
	case 4:
		this->show();
		break;
	case 5:
		this->fill();
		break;
	default:
		break;
	}
}

void CoffeeVendingMachine::fill() {
	this->tong[0].fill();
	this->tong[1].fill();
	this->tong[2].fill();
}

void CoffeeVendingMachine::show() {
	cout << "커피 " << this->tong[0].getSize() << ", 물 " << this->tong[1].getSize() << ", 설탕 " << this->tong[2].getSize() << endl;
}

void CoffeeVendingMachine::selectEspresso() {
	this->tong[0].consume();
	this->tong[1].consume();
	cout << "에스프레소 드세요" << endl;
}

void CoffeeVendingMachine::selectAmericano() {
	this->tong[0].consume();
	this->tong[1].consume();
	this->tong[1].consume();
	cout << "아메리카노 드세요" << endl;
}

void CoffeeVendingMachine::selectSugarCoffee() {
	this->tong[0].consume();
	this->tong[1].consume();
	this->tong[1].consume();
	this->tong[2].consume();
	cout << "설탕커피 드세요" << endl;
}



int main() {
	cout << "***** 커피자판기를 작동합니다. *****" << endl;
	CoffeeVendingMachine machine;

	for (;;) {
		machine.run();
	}
}