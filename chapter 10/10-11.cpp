#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book{
	int year;
	string name;
	string author;
	public:
		Book(){}
		Book(int year,string name, string author){
			this->year = year;
			this->name = name;
			this->author = author;
		}
		int getYear() {
			return this->year;
		}
		string getName(){
			return this->name;
		}
		string getAuthor(){
			return this->author;
		}
};

int main(){
	cout << "�԰��� å�� �Է��ϼ���. �⵵�� -1�� �Է��ϸ� �԰� �����մϴ�.\n";
	
	vector<Book> arr;
	
	int year;
	string name;
	string author;

	cout << "�⵵>>";
	while(cin >> year && year != -1){
		cin.ignore();
		
		cout << "å�̸�>>";
		getline(cin,name);
		cout << "����>>";
		getline(cin,author);
		
		arr.push_back(Book(year,name,author));
		cout << "�⵵>>";
	}
	cout << "�� �԰�� å�� " << arr.size() << "���Դϴ�.\n";
	
	cin.ignore();
	cout << "�˻��ϰ��� �� ���� �̸��� �Է��ϼ���.>>";
	getline(cin,author);
	
	for(int i=0;i<arr.size();i++){
		if(author == arr[i].getAuthor()){
			cout << arr[i].getYear() <<"�⵵, " << arr[i] .getName() << ", " << arr[i].getAuthor() << endl;
		}
	}
	cout << "�˻��ϰ��� �ϴ� �⵵�� �Է��ϼ���.>>";
	cin >> year;
	
	for(int i=0;i<arr.size();i++){
		if(year == arr[i].getYear()){
			cout << arr[i].getYear() <<"�⵵, " << arr[i] .getName() << ", " << arr[i].getAuthor() << endl;
		}
	}
	
}
