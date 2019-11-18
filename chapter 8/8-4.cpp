#include <iostream>
using namespace std;

class Point{
	int x,y;
	public:
		Point(int x,int y){this->x=x;this->y=y;}
		int getX(){return x;}
		int getY(){return y;}
	protected:
		void move(int x, int y){this->x=x;this->y=y;}
};

class ColorPoint:public Point{
	string name;
	public:
		ColorPoint():Point(0,0){this->name="BLACK";};
		void show();
		ColorPoint(int x,int y):Point(x,y){};
		void setPoint(int x,int y){this->move(x,y);}
		void setColor(string name){this->name=name;}
		string getName(){return this->name;}
};

void ColorPoint::show(){
	cout << getName()<<"������ (" << getX()<<','<<getY() <<")�� ��ġ�� ���Դϴ�.\n";
}

int main(){
	ColorPoint zeroPoint;
	zeroPoint.show();
	
	ColorPoint cp(5,5);
	cp.setPoint(10,20);
	cp.setColor("BLUE");
	cp.show();
}
