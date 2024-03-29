#include <iostream>
using namespace std;

class Book{
	string title;
	int price, pages;
public :
	Book(string title="",int price=0,int pages=0){
		this->title=title;
		this->price=price;
		this->pages=pages;
	}
	void show();
	string getTitle() {return title;}
	Book& operator+=(int price);
	Book& operator-=(int price);
};

void Book::show(){
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
}

Book& Book::operator+=(int price){
	this->price += price;
	return *this;
}

Book& Book::operator-=(int price){
	this->price -= price;
	return *this;
}

int main(){
	Book a("청춘",20000,300), b("미래",30000,500);
	a += 500;
	b -= 500;
	a.show();
	b.show();
}
