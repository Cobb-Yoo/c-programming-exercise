#include <iostream>
using namespace std;

class MyIntStack{
	int p[10];
	int top;
	public :
		MyIntStack();
		bool push(int n);
		bool pop(int &n);
};

MyIntStack::MyIntStack(){
	top = 0;
	for(int i =0;i< 10;i++)	{
		p[i] = '\0';
	}
}

bool MyIntStack::push(int n){
	if(top == 10) return false;
	p[top++] = n;
	return true;
}

bool MyIntStack::pop(int &n){
	if(top == 0) return false;
	n = p[--top];
	return true;
}

int main(){
	MyIntStack a;
	for (int i=0;i<11;i++){
		if(a.push(i)) cout << i << ' ';
		else cout << endl << i+1 << " 번째 stack full" << endl;
	}
	
	int n;
	
	for(int i=0;i<11;i++){
		if(a.pop(n)) cout << n << ' ';
		else cout << endl << i+1 << " 번째 stack empty";
	}
	
	cout << endl;
	
}
