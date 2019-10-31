#include <iostream>
using namespace std;

class Statistics{
	int data[10];
	int count;
	public:
		Statistics() {this->count=0;}
		Statistics& operator<<(int n);
		void operator>>(int &n);
		bool operator!();
		void operator~();
};

Statistics& Statistics::operator<<(int n){
	this->data[count++] = n;
	return *this;
}

void Statistics::operator>>(int& n){
	int sum=0;
	for(int i=0;i<count;i++){
		sum += this->data[i];
	}
	n = sum / count;
}

bool Statistics::operator!(){
	if(this->count==0) return true;
	return false;
}

void Statistics::operator~(){
	for(int i=0;i<count;i++){
		cout << this->data[i] << ' ';
	}
	cout << endl;
}

int main(){
	Statistics stat;
	if(!stat) cout << "현재 통계 데이타가 없습니다." << endl;
	
	int x[5];
	cout << "5 개의 정수를 입력하라>>";
	for(int i=0;i<5;i++) cin >> x[i];
	
	for(int i=0;i<5;i++) stat << x[i];
	stat << 100 << 200;
	~stat;
	
	int avg;
	stat >> avg;
	cout << "avg=" << avg << endl;
}
