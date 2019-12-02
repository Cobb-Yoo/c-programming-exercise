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
		cout << "원 " << i+1 << "의 반지름 >> ";
		cin >> radius;
		circle[i].setRadius(radius);
		if (circle[i].getArea() > 100) num++;
	}
	
	cout << "면적이 100보다 큰 원은 " << num << "개 입니다." << endl;
	
}
