#include <iostream>
using namespace std;

class Color{
	int red,green,blue;
	public:
		Color() {red=green=blue=0;}
		Color(int r, int g, int b);
		void setColor(int r, int g, int b);
		void show();
		friend Color operator+(Color op1, Color op2);
		friend bool operator==(Color op1, Color op2);
};

Color::Color(int r, int g, int b){
	red = r;
	green = g;
	blue = b;
}

void Color::setColor(int r, int g, int b){
	red = r;
	green = g;
	blue = b;
}

void Color::show(){
	cout << red << ' ' << green << ' ' << blue << endl;
}

Color operator+(Color op1, Color op2){
	Color tmp;
	tmp.red = op1.red + op2.red;
	tmp.green = op1.green + op2.green;
	tmp.blue = op1.blue + op2.blue;
	return tmp;
}

bool operator==(Color op1, Color op2){
	if(op1.red==op2.red && op1.green==op2.green && op1.blue == op2.blue) return true;
	return false;
}

int main(){
	Color red(255,0,0), blue(0,0,255), c;
	c = red + blue;
	
	c.show();
	
	Color fuchsia(255,0,255);
	
	if(c == fuchsia) cout << "보라색 맞음";
	else cout << "보라색 아님";
}
