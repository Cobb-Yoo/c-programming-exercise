#include <iostream>
using namespace std;

class Oval {
	int height, width;
public:
	Oval();
	Oval(int a, int b);
	~Oval();
	void set(int a, int b);
	void show();
	int getWidth();
	int getHeight();
};

Oval::Oval() : Oval(1, 1) {}
Oval::Oval(int a, int b) {
	this->width = a;
	this->height = b;
}

void Oval::set(int a, int b) {
	this->width = a;
	this->height = b;
}

void Oval::show() {
	cout << "width = " << this->width << ", height = " << this->height << endl;
}

int Oval::getWidth() {
	return this->width;
}

int Oval::getHeight() {
	return this->height;
}

Oval::~Oval() {
	cout << "Oval ¼Ò¸ê : width = " << this->width << ", height = " << this->height << endl;
}

int main() {
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << "," << b.getHeight() << endl;
}