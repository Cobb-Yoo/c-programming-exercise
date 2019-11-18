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
	if(this->getPages() < pages) cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�.\n";
	else{
		this->print(pages);
		this->availableInk-=pages;
		cout << "����Ʈ�Ͽ����ϴ�.\n";
	}
}

void Laser::printLaser(int pages){
	if(this->getPages() < pages) cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�.\n";
	else{
		this->print(pages);
		this->availableToner-=1;
		cout << "����Ʈ�Ͽ����ϴ�.\n";
	}
}

int main(){
	Ink *ink = new Ink("Officejet V40","HP",5,10);
	Laser *laser = new Laser("SCX-6x45", "�Ｚ����",3,20);
	
	cout << "���� �۵����� 2 ���� �����ʹ� �Ʒ��� ����.\n" ;
	cout << "��ũ�� : " << ink->getModel()<< " ," << ink->getManu() << " ,���� ����" << ink->getPages() <<"�� ,���� ��ũ"<< ink->getInk() << endl;
	cout << "������ : " << laser->getModel()<< " ," << laser->getManu() << " ,���� ����" <<laser->getPages() <<"�� ,���� ���"<< laser->getToner() << endl << endl;
	
	bool flag=true;
	
	while(flag){//'y' �̿��� ���� �Է��ϸ� �ݺ����� ����. 
		cout << "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
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
				cout << "��踦 �ٽ� �������ּ���.\n";
		}
		
		cout << "��ũ�� : " << ink->getModel()<< " ," << ink->getManu() << " ,���� ����" << ink->getPages() <<"�� ,���� ��ũ"<< ink->getInk() << endl;
		cout << "������ : " << laser->getModel()<< " ," << laser->getManu() << " ,���� ����" <<laser->getPages() <<"�� ,���� ���"<< laser->getToner() << endl;
		cout << "��� ����Ʈ �Ͻðڽ��ϴ�(y/n)>>";
		char tmp;
		cin >> tmp;
		if(tmp != 'y') flag = false;
		
		cout << endl;
	}
}
