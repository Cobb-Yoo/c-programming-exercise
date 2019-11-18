#include <iostream>
using namespace std;

class Printer{
	string model;
	string manufacturer;
	int printedCount;
	int availableCount;
	protected:
		Printer(string model, string manufacturer, int pages){
			this->model = model;
			this->manufacturer = manufacturer;
			this->printedCount = 0;
			this->availableCount = pages;
		}
		void print(int pages){
			this->printedCount += pages;
			this->availableCount -= pages;
		}
		string Model(){ return model;}
		string Manu(){return manufacturer;}
		int Pages(){return availableCount;}
};

class Ink:public Printer{
	int availableInk;
	public:
		Ink(string model, string manufacturer, int pages, int availableInk):Printer(model,manufacturer,pages){this->availableInk = availableInk;}
		void printInkJet(int pages);
		int getInk(){return availableInk;}
		string getModel(){ return Model();}
		string getManu(){return Manu();}
		int getPages(){return Pages();}
};

class Laser:public Printer{
	int availableToner;
	public:
		Laser(string model, string manufacturer, int pages, int availableToner):Printer(model,manufacturer,pages){this->availableToner=availableToner;}
		void printLaser(int pages);
		int getToner(){return availableToner;}
		string getModel(){ return Model();}
		string getManu(){return Manu();}
		int getPages(){return Pages();}
};

void Ink::printInkJet(int pages){
	if(this->getPages() < pages) cout << "용지가 부족하여 프린트할 수 없습니다.\n";
	else{
		this->print(pages);
		this->availableInk-=pages;
		cout << "프린트하였습니다.\n";
	}
}

void Laser::printLaser(int pages){
	if(this->getPages() < pages) cout << "용지가 부족하여 프린트할 수 없습니다.\n";
	else{
		this->print(pages);
		this->availableToner-=1;
		cout << "프린트하였습니다.\n";
	}
}

int main(){
	Ink *ink = new Ink("Officejet V40","HP",5,10);
	Laser *laser = new Laser("SCX-6x45", "삼성전자",3,20);
	
	cout << "현재 작동중인 2 대의 프린터는 아래와 같다.\n" ;
	cout << "잉크젯 : " << ink->getModel()<< " ," << ink->getManu() << " ,남은 종이" << ink->getPages() <<"장 ,남은 잉크"<< ink->getInk() << endl;
	cout << "레이저 : " << laser->getModel()<< " ," << laser->getManu() << " ,남은 종이" <<laser->getPages() <<"장 ,남은 토너"<< laser->getToner() << endl << endl;
	
	bool flag=true;
	
	while(flag){//'y' 이외의 값을 입력하면 반복문이 멈춤. 
		cout << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
		int x,y;
		cin >> x >> y;
		
		switch (x){
			case 1:
				ink->printInkJet(y);
				break;
			case 2:
				laser->printLaser(y);
				break;
			default :
				cout << "기계를 다시 설정해주세요.\n";
		}
		
		cout << "잉크젯 : " << ink->getModel()<< " ," << ink->getManu() << " ,남은 종이" << ink->getPages() <<"장 ,남은 잉크"<< ink->getInk() << endl;
		cout << "레이저 : " << laser->getModel()<< " ," << laser->getManu() << " ,남은 종이" <<laser->getPages() <<"장 ,남은 토너"<< laser->getToner() << endl;
		cout << "계속 프린트 하시겠습니다(y/n)>>";
		char tmp;
		cin >> tmp;
		if(tmp != 'y') flag = false;
		
		cout << endl;
	}
}
