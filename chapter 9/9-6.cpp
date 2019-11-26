#include <iostream>
using namespace std;

class AbstrackStack{
	public:
		virtual bool push(int n) = 0;
		virtual bool pop(int& n) = 0;
		
		virtual int size() = 0;
};

class IntStack:public AbstrackStack{
		int top;
		int *p;
		int len;
	public:
		IntStack(int len){
			top = 0;
			p = new int [len];
			this->len = len;
		}
		~IntStack(){
			delete [] p;
		}
		virtual bool push(int n);
		virtual bool pop(int& n);
		
		virtual int size();
};

bool IntStack::push(int n){
	if (this->top == this->len) return false;
	p[this->top++] = n;
	return true;
}

bool IntStack::pop(int& n){
	if(--this->top < 0) return false;
	
	n = p[this->top];
	return true;
}

int IntStack::size(){
	return this->top;
}

int main(){
	IntStack a(5);
	for(int i=0;i<10;i++) { 
		if(a.push(i)) cout << "성공 " << endl;
		else cout << "더 이상 공간이 없습니다." << endl;
	}

	int n;
	for(int i=0; i<10; i++)  { // 처음 5 개를 성공적으로 pop되고 다음 5 개는 스택 empty로 pop 실패
		if(a.pop(n)) cout << "성공 " << n << endl;
		else cout << "비어 있습니다." << endl;
	}
}
