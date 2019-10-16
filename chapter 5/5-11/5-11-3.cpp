#include <iostream>
#include <cstring>
using namespace std;

class Book{
	char *title;
	int price;
	public :
		Book(const char* title, int price); 
		Book(const Book& b);//복사생성자. 
		~Book();
		void set(const char* title, int price);
		void show() {cout << title << ' ' << price << "원"<< endl;}
};

Book::Book(const char* title, int price){
	int len = strlen(title);
	this->title = new char [len + 1];
	strcpy(this->title, title);
	this->price = price;
}

Book::~Book(){
	delete this->title;
}

void Book::set(const char* title, int price){
	if(this->title)	delete this->title;
	
	int len = strlen(title);
	this->title = new char[len+1]; 
	strcpy(this->title,title);
	
	this->price = price;
}

Book::Book(const Book& b){//복사생성자. 
	int len = strlen(b.title);
	this->title = new char[len+1];
	strcpy(this->title, b.title);
	
	this->price = b.price;
}

int main(){
	Book cpp("명품C++", 10000);
	Book java = cpp;
	java.set("명품자바", 12000);
	cpp.show();
	java.show();
}
