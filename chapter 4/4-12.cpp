#include <iostream>
#include <string>
using namespace std;

class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius);
	double getArea();
	string getName();
};

class CircleManager {
	Circle *p;
	int size;
public:
	CircleManager(int size);
	~CircleManager();
	void searchByName();
	void searchByArea();
	void setCircle(string name, int radius, int i);
};

void Circle::setCircle(string name, int radius) {
	this->name = name;
	this->radius = radius;
}

double Circle::getArea() {
	return this->radius * this->radius * 3.14;
}

string Circle::getName() {
	return this->name;
}

CircleManager::CircleManager(int size) {
	this->p = new Circle[size];
	this->size = size;
}

CircleManager::~CircleManager(){//�޸� ��ȯ 
	delete [] p;
}

void CircleManager::searchByName() {
	string name;
	cout << "�˻��ϰ��� �ϴ� ���� �̸� >> ";
	cin >> name;

	for (int i = 0; i < this->size; i++) {
		if (this->p[i].getName() == name) {
			cout << this->p[i].getName() << "�� ������ " << this->p[i].getArea();
			break;
		}
	}
}

void CircleManager::searchByArea() {
	double num;
	cout << "�ּ� ������ ������ �Է��ϼ��� >> ";
	cin >> num;

	cout << num << "���� ū ���� �̻��մϴ�." << endl;

	for (int i = 0; i < this->size; i++) {
		if (this->p[i].getArea() > num) {
			cout << this->p[i].getName() << "�� ������ " << this->p[i].getArea() << ',';
		}
	}
}

void CircleManager::setCircle(string name, int radius, int i) {
	this->p[i].setCircle(name, radius);
}

int main() {
	int num;
	string name;
	int radius;

	cout << "���� ���� >> ";
	cin >> num;

	CircleManager cirM(num);

	for (int i = 0; i < num; i++) {
		cout << "�� " << i + 1 << "�� �̸��� ������ >> ";
		cin >> name >> radius;
		cirM.setCircle(name, radius, i);
	}

	cirM.searchByName();
	cirM.searchByArea();

}
