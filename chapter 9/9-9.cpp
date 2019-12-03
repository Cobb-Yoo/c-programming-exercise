#include <iostream>
using namespace std;

class Printer{
	private:
		string model;
		string manu;
		int printedCount;
		int availableCount;
	public:
		Printer(string model, string manu,int printedCount=0, int availableCount=0){
			this->model = model;
			this->manu = manu;
			this->printedCount = printedCount;
			this->availableCount = availableCount;
		}
		virtual ~Printer(){}
		virtual void print(int pages)=0;
		virtual void show()=0;
		
		string getModel(){
			return this->model;
		}
		string getManufactor(){
			return this->manu;
		}
		int getPrintedCount(){
			return this->printedCount;
		}
		int getAvailableCount(){
			return this->availableCount;
		}
		void setPrintedCount(int n){
			this->printedCount += n;
		}
		void setAvailableCount(int n){
			this->availableCount -= n;
		}
};

class Ink:public Printer{
	private:
		int availableInk;
	public:
		Ink(string model, string manu, int pages, int availableInk):Printer(model,manu,0,pages){
			this->availableInk = availableInk;
		}
		virtual ~Ink(){}
		virtual void print(int pages);
		virtual void show();
		
		string Model() {
			return getModel();
		}
		string Manu(){
			return getManufactor();
		}
		int ableInk(){
			return availableInk;
		}
		int availableCount(){
			return getAvailableCount();
		}
};

void Ink::print(int pages){
	if(pages <= this->availableCount()&&pages <= this->availableInk){
		this->setAvailableCount(pages);
		this->availableInk -= pages;
		this->setPrintedCount(pages);
		cout << "����Ʈ�Ͽ����ϴ�.\n";
	}
	else{
		if (pages > this->availableCount()){
			cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�.\n";
		}
		else {
			cout << "��ũ�� �����Ͽ� ����Ʈ�� �� �����ϴ�.\n";
		}
	}
}

void Ink::show(){
	cout << "��ũ�� : " << this->Model() << " ," << this->Manu() << " , ���� ���� " << this->availableCount()<< " ,���� ��ũ " << this->ableInk() << endl;
}

class Laser:public Printer{
	private:
		int availableToner;
	public:
		Laser(string model, string manu, int pages, int availableToner):Printer(model,manu,0,pages){
			this->availableToner = availableToner;
		}
		virtual ~Laser(){}
		virtual void print(int pages);
		virtual void show();
		
		string Model() {
			return getModel();
		}
		string Manu(){
			return getManufactor();
		}
		int ableToner(){
			return availableToner;
		}
		int availableCount(){
			return getAvailableCount();
		}
};

void Laser::print(int pages){
	if(pages <= this->availableCount()&&pages <= this->availableToner){
		this->setAvailableCount(pages);
		this->availableToner -= 1;
	  //å���� ������ 2���� ����Ҷ� ��ʰ� 1���� �پ��µ� �̰��� ��Ÿ�� ���� �ڵ��
	  //this->availableToner -= pages; �̴�. 
		this->setPrintedCount(pages);
		cout << "����Ʈ�Ͽ����ϴ�.\n";
	}
	else{
		if (pages > this->availableCount()){
			cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�.\n";
		}
		else {
			cout << "��ʰ� �����Ͽ� ����Ʈ�� �� �����ϴ�.\n";
		}
	}
}

void Laser::show(){
	cout << "��ũ�� : " << this->Model() << " ," << this->Manu() << " , ���� ���� " << this->availableCount()<< " ,���� ��ũ " << this->ableToner() << endl;
}


int main(){
	Printer *ip = new Ink("Officeget V40","HP",5,10);
	Printer *lp = new Laser("SCX-6x45","�Ｚ����",3,20);
	
	cout << "���� �۵����� 2���� �����ʹ� �Ʒ��� ����.\n";
	ip->show();
	lp->show();
	cout << endl;
	
	for(;;){
		cout << "������(1:��ũ��, 2:������)�� �ż� �Է�>>";
		int a, b;
		char c; 
		cin >> a >> b;
		
		if(a == 1){
			ip->print(b);
			ip->show();
			lp->show();
		}
		else if(a==2){
			lp->print(b);
			ip->show();
			lp->show();
		}
		else{
			cout << "��Ȯ�� ��ȣ�� �Է��ϼ���.\n";
		}
		
		cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y/n)>>"; 
		cin >> c;
		if(c == 'y') {
			cout << endl;
			continue;
		}
		else if(c == 'n') break;
		else {
			cout << "ERROR�� ���ؼ� ����Ʈ�� ����ϴ�.\n";
			break;
		}
	}
	
	delete ip;
	delete lp;
}
