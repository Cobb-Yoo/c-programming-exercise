#include <iostream>
#include <string>
using namespace std;

class Integer {
private:
	int num;
public:
	Integer(int a);
	Integer(string s);
	int get();
	int isEven();
	void set(int a);
};

Integer::Integer(int a) {
	this->num = a;
}

Integer::Integer(string s) {
	this->num = stoi(s);
}

int Integer::get() {
	return this->num;
}

int Integer::isEven() {
	return !(this->num % 2);
}

void Integer::set(int a) {
	this->num = a;
}

int main() {
	Integer n(30);
	cout << n.get() << ' ';
	n.set(50);
	cout << n.get() << ' ';

	Integer m("300");
	cout << m.get() << ' ';
	cout << m.isEven();
}