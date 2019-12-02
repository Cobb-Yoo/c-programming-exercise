#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Date {
private:
	int y, m, d;
public:
	Date(int y, int m, int d);
	Date(string s);
	void show();
	int getYear();
	int getMonth();
	int getDay();
};

Date::Date(int y, int m, int d) {
	this->y = y;
	this->m = m;
	this->d = d;
}

Date::Date(string s) {
	int i=0;
	
	y = stoi(s);
	for(;;)
		if(s.at(i++) == '/') break;
	m = stoi(s.substr(i));
	for(;;)
		if(s.at(i++) == '/') break;
	d = stoi(s.substr(i));
	
}

void Date::show() {
	cout << this->y << "³â" << this->m << "¿ù" << this->d << "ÀÏ" << endl;
}

int Date::getYear() {
	return this->y;
}

int Date::getMonth() {
	return this->m;
}

int Date::getDay() {
	return this->d;
}

int main() {
	Date birth(2014, 3, 20);
	Date independenceDay("1945/8/15");
	independenceDay.show();

	cout << birth.getYear() << ',' << birth.getMonth() << ',' << birth.getDay() << endl;

	return 0;
}
