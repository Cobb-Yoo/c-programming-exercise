#include <iostream>
#include <string>
using namespace std;

class exchang{
	string k;
	public:
		void read();
		string check();
		void exchg();
		void write();
};

void exchang::read(){
	cout << ">> ";
	getline(cin, k, '\n');
}

string exchang::check(){
	return k;
}

void exchang::exchg(){
	string tmp;
	
	for(int i=0;i <= k.length();i++){
		tmp[i] = k[k.length()-i];
	}
	
	for(int i=0;i<=k.length();i++){
		cout << tmp[i];
	}
	
	k = tmp;
}

void exchang::write(){
	cout << k << endl;
}

int main(){
	exchang s;
	
	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다.)" << endl;
	
	for(;;){
		s.read();
		if(s.check() == "exit") break;
		s.exchg();
		s.write();
	}
}
