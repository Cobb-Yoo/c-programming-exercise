#include <iostream>
using namespace std;

class Circle{
	int radius;
	public :
		void setRadius(int radius) {this->radius = radius;};
		double getArea() {return 3.14*this->radius*this->radius;};
};

int main(){
	Circle *circle;
	int radius;
	int num=0;
	int circle_num;
	
	cout << "���� ���� >>";
	cin >> circle_num;
	
	circle = new Circle[circle_num];
	
	for(int i=0;i<circle_num;i++){
		cout << "�� " << i+1 << "�� ������ >> ";
		cin >> radius;
		circle[i].setRadius(radius);
		if (circle[i].getArea() > 100) num++;
	}
	
	cout << "������ 100���� ū ���� " << num << "�� �Դϴ�." << endl;
	
	delete [] circle; //�޸� ��ȯ. 
	
}
