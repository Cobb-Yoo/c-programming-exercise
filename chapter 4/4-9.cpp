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
	
	cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���." << endl;
	
	for(int i=0;i<3;i++){
		cout << "��� " << i+1 << ">> ";
		getline(cin,name,' ');
		getline(cin,tel,'\n');
		person[i].set(name,tel);
	}
	
	cout << "��� ����� �̸��� ";
	for(int i=0;i<3;i++){
		cout << person[i].getName() << ' ';
	}
	cout << endl << "��ȭ��ȣ�� �˻��մϴ�. �̸��� �Է��ϼ���>>";
	
	getline(cin,name,'\n');
	
	for(int i=0;i<3;i++){
		if(name == person[i].getName()) cout << "��ȭ��ȣ�� " << person[i].getTel();
	}
}
