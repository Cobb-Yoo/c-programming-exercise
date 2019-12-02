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

CircleManager::~CircleManager(){//메모리 반환 
	delete [] p;
}

void CircleManager::searchByName() {
	string name;
	cout << "검색하고자 하는 원의 이름 >> ";
	cin >> name;

	for (int i = 0; i < this->size; i++) {
		if (this->p[i].getName() == name) {
			cout << this->p[i].getName() << "의 면적은 " << this->p[i].getArea();
			break;
		}
	}
}

void CircleManager::searchByArea() {
	double num;
	cout << "최소 면적을 정수로 입력하세요 >> ";
	cin >> num;

	cout << num << "보다 큰 원을 겁색합니다." << endl;

	for (int i = 0; i < this->size; i++) {
		if (this->p[i].getArea() > num) {
			cout << this->p[i].getName() << "의 면적은 " << this->p[i].getArea() << ',';
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

	cout << "원의 개수 >> ";
	cin >> num;

	CircleManager cirM(num);

	for (int i = 0; i < num; i++) {
		cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
		cin >> name >> radius;
		cirM.setCircle(name, radius, i);
	}

	cirM.searchByName();
	cirM.searchByArea();

}
