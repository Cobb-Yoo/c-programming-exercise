#include <iostream>
using namespace std;

class Stack{
	int arr[100];
	int top;
	public:
		Stack() {this->top = -1;}
		bool operator!();
		Stack& operator<<(int n);
		Stack& operator>>(int &x);
};

bool Stack::operator!(){
	if(this->top == -1) return true;
	return false;
}

Stack& Stack::operator<<(int n){
	if(this->top < 100)
		this->arr[++this->top] = n;
	return *this;
}

Stack& Stack::operator>>(int& x){
	if(this->top > -1)
		x = this->arr[this->top--];
	return *this;
}

int main(){
	Stack stack;
	stack << 3 << 5 << 10;
	while(true){
		if(!stack) break;
		int x;
		stack >> x;
		cout << x << ' ';
	}
	cout << endl;
}
