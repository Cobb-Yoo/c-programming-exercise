#include <iostream>
using namespace std;

class Circle{
	int radius;
	public:
		Circle(int radius=0){this->radius = radius;}
		int getRadius(){return radius;}
		void setRadius(int radius) {this->radius=radius;}
		double getArea() {return 3,14*radius*radius;}
};

class NamedCircle:public Circle{
	string name;
	public:
		void setName(string name);
		string getName();
};

void NamedCircle::setName(string name){
	this->name = name;
}

string NamedCircle::getName(){
	return this->name;
}

int main(){
	NamedCircle pizza[5];
	
	cout << "5���� ���� �������� ���� �̸��� �Է��ϼ���.\n";
	for(int i=0;i<5;i++){
		cout << i+1 << ">> ";
		int num;
		string name;
		cin >> num >> name;
		pizza[i].setRadius(num);
		pizza[i].setName(name);
	}
	
	int max=pizza[0].getRadius();
	int max_point;
	for(int i=1;i<5;i++){
		if(max < pizza[i].getRadius()){
			max = pizza[i].getRadius();
			max_point=i;
		}
	}
	
	cout << "���� ������ ū ���ڴ� " << pizza[max_point].getName()<<"�Դϴ�.\n";
	
}
