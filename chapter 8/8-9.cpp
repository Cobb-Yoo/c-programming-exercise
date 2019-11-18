#include <iostream>
using namespace std;

class Console{
	public:
		static int printMenu();
		static int timeTable();
		static int num();
		static string name();
};

int Console::printMenu(){
	cout << "\n\n����:1, ���:2, ����:3, ������:4>> ";
	int n;
	cin >> n;
	return n;
}

int Console::timeTable(){
	cout << "07��:1, 12��:2, 17��3>> ";
	int n;
	cin >> n;
	return n;
}

int Console::num(){
	int n;
	cin >> n;
	return n;
}

string Console::name(){
	string tmp;
	cin >> tmp;
	return tmp;
}

class Seat{
	string name;
	public:
		Seat(){this->name = "---";}
		string getName(){return this->name;}
		void setName(string name){this->name = name;}
};

class Schedule{
	Seat *seat;
	string time;
	public:
		Schedule(){seat = new Seat[9];}
		~Schedule(){delete [] seat;}
		void setTime(string time){this->time = time;}
		string getTime(){return this->time;}
		void show(){
			cout << this->time << ":";
			for(int i=1;i<9;i++){
				cout << "\t" << seat[i].getName();
			}
			cout << endl;
		}
		void bookSeat(int n, string name) {seat[n].setName(name);}
		void cancleSeat(int n,string name) {
			if(seat[n].getName() == name)
				seat[n].setName("---");
			else
				cout << "����� �̸��� ���� �ʽ��ϴ�. �ٽ� Ȯ�� ��Ź�帳�ϴ�.\n";
		}
};

class AirlineBook{
	Schedule *s;
	public:
		AirlineBook(){
			s = new Schedule[4];
			s[1].setTime("07��");
			s[2].setTime("12��");
			s[3].setTime("17��");
			
		}
		~AirlineBook(){delete [] s;}
		void book(int n){
			s[n].show();
			cout << "�¼���ȣ>>";
			int num = Console::num();
			cout << "�̸��Է�>>";
			string name = Console::name();
			s[n].bookSeat(num,name);
		}
		void cancle(int n){
			s[n].show();
			cout << "�¼���ȣ>>";
			int num = Console::num();
			cout << "�̸��Է�>>";
			string name = Console::name();
			s[n].cancleSeat(num,name);
		}
		void view(){
			for(int i=1;i<=3;i++) s[i].show();
		}
};


int main(){
	cout << "***** �Ѽ��װ��� ���Ű��� ȯ���մϴ� *****\n";
	AirlineBook air;
	
	bool flag=true;
	
	while(1){
		if(!flag) break;
		int n = Console::printMenu();
		int x;
		switch (n){
			case 1:
				x = Console::timeTable();
				air.book(x);
				break;
			case 2:
				x = Console::timeTable();
				air.cancle(x);
				break;
			case 3:
				air.view();
				break;
			case 4:
				flag = false;
				break;
			default:
				break;
		}
	}
	cout<< "���� �ý����� �����մϴ�.\n";
	
}
