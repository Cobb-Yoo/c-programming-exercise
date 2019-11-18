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
	cout << "\n\n예약:1, 취소:2, 보기:3, 끝내기:4>> ";
	int n;
	cin >> n;
	return n;
}

int Console::timeTable(){
	cout << "07시:1, 12시:2, 17시3>> ";
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
				cout << "예약된 이름과 같지 않습니다. 다시 확인 부탁드립니다.\n";
		}
};

class AirlineBook{
	Schedule *s;
	public:
		AirlineBook(){
			s = new Schedule[4];
			s[1].setTime("07시");
			s[2].setTime("12시");
			s[3].setTime("17시");
			
		}
		~AirlineBook(){delete [] s;}
		void book(int n){
			s[n].show();
			cout << "좌석번호>>";
			int num = Console::num();
			cout << "이름입력>>";
			string name = Console::name();
			s[n].bookSeat(num,name);
		}
		void cancle(int n){
			s[n].show();
			cout << "좌석번호>>";
			int num = Console::num();
			cout << "이름입력>>";
			string name = Console::name();
			s[n].cancleSeat(num,name);
		}
		void view(){
			for(int i=1;i<=3;i++) s[i].show();
		}
};


int main(){
	cout << "***** 한성항공에 오신것을 환영합니다 *****\n";
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
	cout<< "예약 시스템을 종료합니다.\n";
	
}
