#include <iostream>
#include <map>
using namespace std;

int main(){
	map<string, int> arr;
	
	int n;
	string name;
	int score;
	
	cout << "***** �������� ���α׷� HIGH SCORE�� �����մϴ� *****\n" << "�Է�:1, ��ȸ:2, ����:3 >>";
	while(cin >> n && n != 3){
		if(n==1){
			cout << "�̸��� ����>> ";
			cin >> name >> score;
			
			arr.insert(make_pair(name, score));
		}
		else if(n == 2){
			cout << "�̸�>> ";
			cin >> name;
			cout << name <<"�� ������ " << arr[name] << endl;
		}
		else break;
		
		cout << "�Է�:1, ��ȸ:2, ����:3 >>";
	}
	cout << "���α׷��� �����մϴ�...\n";
}
