#include <iostream>
using namespace std;

class Circle{
	int radius;
	public :
		void setRadius(int radius) {this->radius = radius;};
		double getArea() {return 3.14*this->radius*this->radius;};
};

int main(){
	Circle circle[3];
	int radius;
	int num=0;
	
	for(int i=0;i<3;i++){
		cout << "�� " << i+1 << "�� ������ >> ";
		cin >> radius;
		circle[i].setRadius(radius);
		if (circle[i].getArea() > 100) num++;
	}
	
	cout << "������ 100���� ū ���� " << num << "�� �Դϴ�." << endl;
	
}
