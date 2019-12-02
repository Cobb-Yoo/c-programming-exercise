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
	
	cout << "원의 개수 >>";
	cin >> circle_num;
	
	circle = new Circle[circle_num];
	
	for(int i=0;i<circle_num;i++){
		cout << "원 " << i+1 << "의 반지름 >> ";
		cin >> radius;
		circle[i].setRadius(radius);
		if (circle[i].getArea() > 100) num++;
	}
	
	cout << "면적이 100보다 큰 원은 " << num << "개 입니다." << endl;
	
	delete [] circle; //메모리 반환. 
	
}
