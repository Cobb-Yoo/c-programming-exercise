#include <iostream>
#include <string>
using namespace std;

class Account {
private:
	string owner;
	int money;
	int id;
public:
	Account(string s, int a, int m);
	void deposit(int n);
	int withdraw(int b);
	string getOwner();
	int inquiry();
};

Account::Account(string s, int a, int m) {
	this->money = m;
	this->owner = s;
	this->id = a;
}

void Account::deposit(int n) {
	this->money = this->money + n;
}

int Account::withdraw(int b) {
	if (this->money - b > 0) {
		this->money = this->money - b;
		return b;
	}
	else {
		b = this->money;
		this->money = 0;
		return b;
	}
}

string Account::getOwner() {
	return this->owner;
}

int Account::inquiry() {
	return this->money;
}

int main() {
	Account a("kitea", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << " ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << " ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;

	return 0;
}