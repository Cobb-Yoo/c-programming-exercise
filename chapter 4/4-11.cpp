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
	cout << "�޴��� �����ּ���(1:����������, 2:�Ƹ޸�ī��,3:����Ŀ��,4:�ܷ�����, 5:ä���)>>";
	int n;

	cin >> n;

	switch (n)
	{
	case 1:
		if (this->tong[0].getSize() > 0 && this->tong[1].getSize() > 0)
			this->selectEspresso();
		else
			cout << "���ᰡ �����մϴ�." << endl;
		break;
	case 2:
		if (this->tong[0].getSize() > 0 && this->tong[1].getSize() > 1)
			this->selectAmericano();
		else
			cout << "���ᰡ �����մϴ�." << endl;
		break;
	case 3:
		if (this->tong[0].getSize() > 0 && this->tong[1].getSize() > 1 && this->tong[2].getSize() > 1)
			this->selectSugarCoffee();
		else
			cout << "���ᰡ �����մϴ�." << endl;
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
	cout << "Ŀ�� " << this->tong[0].getSize() << ", �� " << this->tong[1].getSize() << ", ���� " << this->tong[2].getSize() << endl;
}

void CoffeeVendingMachine::selectEspresso() {
	this->tong[0].consume();
	this->tong[1].consume();
	cout << "���������� �弼��" << endl;
}

void CoffeeVendingMachine::selectAmericano() {
	this->tong[0].consume();
	this->tong[1].consume();
	this->tong[1].consume();
	cout << "�Ƹ޸�ī�� �弼��" << endl;
}

void CoffeeVendingMachine::selectSugarCoffee() {
	this->tong[0].consume();
	this->tong[1].consume();
	this->tong[1].consume();
	this->tong[2].consume();
	cout << "����Ŀ�� �弼��" << endl;
}



int main() {
	cout << "***** Ŀ�����Ǳ⸦ �۵��մϴ�. *****" << endl;
	CoffeeVendingMachine machine;

	for (;;) {
		machine.run();
	}
}