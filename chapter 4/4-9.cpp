#include <iostream>
using namespace std;

class Person{
	string name;
	string tel;
	public :
		Person(){name=""};
		string getName(){return name;}
		string getTel(){return tel;}
		void set(string name, string tel) {
			this->name = name;
			this->tel = tel;
		};
};

int main(){
	Person person[3];
	string name, tel;
	
	cout << "이름과 전화 번호를 입력해 주세요." << endl;
	
	for(int i=0;i<3;i++){
		cout << "사람 " << i+1 << ">> ";
		getline(cin,name,' ');
		getline(cin,tel,'\n');
		person[i].set(name,tel);
	}
	
	cout << "모든 사람의 이름은 ";
	for(int i=0;i<3;i++){
		cout << person[i].getName() << ' ';
	}
	cout << endl << "전화번호를 검색합니다. 이름을 입력하세요>>";
	
	getline(cin,name,'\n');
	
	for(int i=0;i<3;i++){
		if(name == person[i].getName()) cout << "전화번호는 " << person[i].getTel();
	}
}
