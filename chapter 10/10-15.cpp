#include <iostream>
#include <vector>
using namespace std;

class Circle{
		string name;
		int radius;
	public:
		Circle(int radius, string name){
			this->radius = radius;
			this->name = name;
		}
		double getArea(){return 3.14*radius*radius;}
		string getName(){return name;}
};

vector<Circle*> arr;
int radius;
string name;
 
class UI{
	public:
		static void INSERT();
		static void DELETE();
		static void DISPLAY();
};

void UI::INSERT(){
	cout << "�����ϰ��� �ϴ� ���� �������� �̸��� >> ";
	cin >> radius >> name;
	arr.push_back(new Circle(radius, name));
}

void UI::DELETE(){
	cout << "�����ϰ��� �ϴ� ���� �̸��� >> ";
	cin >> name;
		
	vector<Circle*>::iterator it = arr.begin();
	while(it != arr.end()) {
		Circle *cp = *it;
		if(cp->getName() == name) {
			it = arr.erase(it);
			delete cp;
		}
		else {
			it++;
		}
	}
}

void UI::DISPLAY(){
	vector<Circle*>::iterator it = arr.begin();
	for(it;it<arr.end();it++){
		Circle *cp = *it;
		cout << cp->getName() << endl;
		delete cp;
	}
	cout << endl;
}

int main(){
	cout << "���� �����ϰ� �����ϴ� ���α׷��Դϴ�.\n";
	
	int n;
	cout << "����:1, ����:2, ��κ���:3, ����:4  >> ";
	while(cin >> n && n != 4){
		if(n==1){
			UI::INSERT();	
		}
		else if(n==2){
			UI::DELETE();
		}
		else if(n==3){
			UI::DISPLAY();
		}
		cout << "����:1, ����:2, ��κ���:3, ����:4  >> ";
	}
}
