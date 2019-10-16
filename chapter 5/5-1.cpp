#include <iostream>
using namespace std;

class Circle{
	 int radius;
	public :
		Circle();
		Circle(int n);
		int getRadius();
};

Circle::Circle(){
	this->radius = 1;
}

Circle :: Circle(int n){
	this->radius = n;
}

int Circle::getRadius(){
	return this->radius;
}

void swap(Circle &a, Circle &b){
	Circle tmp;
	
	tmp = a;
	a = b;
	b = tmp;
}

int main(){
	Circle a(10);
	Circle b(20);
	
	cout << "a = " << a.getRadius() << " b = " << b.getRadius() << endl;
	
	swap (a,b);
	
	cout << "a = " << a.getRadius() << " b = " << b.getRadius() << endl;
}
