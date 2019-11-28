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
	cout << "입고할 책을 입력하세요. 년도에 -1을 입력하면 입고를 종료합니다.\n";
	
	vector<Book> arr;
	
	int year;
	string name;
	string author;

	cout << "년도>>";
	while(cin >> year && year != -1){
		cin.ignore();
		
		cout << "책이름>>";
		getline(cin,name);
		cout << "저자>>";
		getline(cin,author);
		
		arr.push_back(Book(year,name,author));
		cout << "년도>>";
	}
	cout << "총 입고된 책은 " << arr.size() << "권입니다.\n";
	
	cin.ignore();
	cout << "검색하고자 하 저자 이름을 입력하세요.>>";
	getline(cin,author);
	
	for(int i=0;i<arr.size();i++){
		if(author == arr[i].getAuthor()){
			cout << arr[i].getYear() <<"년도, " << arr[i] .getName() << ", " << arr[i].getAuthor() << endl;
		}
	}
	cout << "검색하고자 하는 년도를 입력하세요.>>";
	cin >> year;
	
	for(int i=0;i<arr.size();i++){
		if(year == arr[i].getYear()){
			cout << arr[i].getYear() <<"년도, " << arr[i] .getName() << ", " << arr[i].getAuthor() << endl;
		}
	}
	
}
