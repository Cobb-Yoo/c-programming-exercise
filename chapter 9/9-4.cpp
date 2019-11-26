#include <iostream>
#include <string>
using namespace std;

class LoopAdder{
		string name;
		int x,y,sum;
		void read();
		void write();
	protected:
		LoopAdder(string name=""){
			this->name=name;
		}
		int getX(){return x;}
		int getY(){return y;}
		virtual int calculate() = 0;
	public:
		void run();
};

void LoopAdder::read(){
	cout << name << ":" << endl;
	cout << "ó�� ������ �ι�° ������ ���մϴ�.�� ���� �Է��ϼ��� >> ";
	cin >> x >> y;
}

void LoopAdder::write(){
	cout << x << "���� " << y << "������ �� = " << sum << " �Դϴ�." << endl; 
}

void LoopAdder::run(){
	read();
	sum = calculate();
	write();
}

class WhileLoopAdder:public LoopAdder{
	protected:
		virtual int calculate();
	public:
		WhileLoopAdder(string name):LoopAdder(name){}
};

int WhileLoopAdder::calculate(){
	int sum=0;
	int count = this->getX();
	
	while(this->getY()+1 != count){
		sum += count++;
	}
	
	return sum;
}

class DoWhileLoopAdder:public LoopAdder{
	protected:
		virtual int calculate();
	public:
		DoWhileLoopAdder(string name):LoopAdder(name){}
};

int DoWhileLoopAdder::calculate(){
	int sum=0;
	int count = this->getX();
	
	do{
		sum += count++;
	}while(this->getY()+1 != count);
	
	return sum;
}

int main(){
	WhileLoopAdder whileLoop("While Loop");
	DoWhileLoopAdder doWhileLoop("Do while Loop");
	
	whileLoop.run();
	doWhileLoop.run();
}
