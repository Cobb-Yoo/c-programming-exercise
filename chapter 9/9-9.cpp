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
		Ink(string model, string manu, int pages, int availableInk):Printer(model,manu,pages){
			this->availableInk = availableInk;
		}
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
		cout << "프린트하였습니다.\n";
	}
	else{
		if (pages > this->availableCount()){
			cout << "용지가 부족하여 프린트할 수 없습니다.\n";
		}
		else {
			cout << "잉크가 부족하여 프린트할 수 없습니다.\n";
		}
	}
}

void Ink::show(){
	cout << "잉크젯 : " << this->Model() << " ," << this->Manu() << " , 남은 종이 " << this->availableCount()<< " ,남은 잉크 " << this->ableInk() << endl;
}

class Laser:public Printer{
	private:
		int availableToner;
	public:
		Laser(string model, string manu, int pages, int availableToner):Printer(model,manu,pages){
			this->availableToner = availableToner;
		}
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
		this->availableToner -= pages;
		this->setPrintedCount(pages);
		cout << "프린트하였습니다.\n";
	}
	else{
		if (pages > this->availableCount()){
			cout << "용지가 부족하여 프린트할 수 없습니다.\n";
		}
		else {
			cout << "토너가 부족하여 프린트할 수 없습니다.\n";
		}
	}
}

void Laser::show(){
	cout << "잉크젯 : " << this->Model() << " ," << this->Manu() << " , 남은 종이 " << this->availableCount()<< " ,남은 잉크 " << this->ableToner() << endl;
}


int main(){
	Ink *ip = new Ink("Officeget V40","HP",5,10);
	Laser *lp = new Laser("SCX-6x45","삼성전자",3,20);
	
	cout << "현재 작동중인 2대의 프린터는 아래와 같다.\n";
	ip->show();
	lp->show();
	cout << endl;
	
	for(;;){
		cout << "프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
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
			cout << "정확한 번호를 입력하세요.\n";
		}
		
		cout << "계속 프린트 하시겠습니까(y/n)>>"; 
		cin >> c;
		if(c == 'y') {
			cout << endl;
			continue;
		}
		else if(c == 'n') break;
		else {
			cout << "ERROR로 인해서 프린트를 멈춤니다.\n";
		}
	}
}
