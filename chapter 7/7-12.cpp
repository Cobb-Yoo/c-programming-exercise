#include <iostream>
using namespace std;

class SortedArray{
	int size;
	int *p;
	void sort();
	public:
		SortedArray();
		SortedArray(SortedArray& src);//얕은 복사에 의 한 댕글링포인터를 방지하기 위해 깊은 복사 사용 .
		SortedArray(int p[], int size);
		~SortedArray();
		SortedArray operator+(SortedArray& op2);
		SortedArray& operator=(const SortedArray& op2);
		void show();
};

SortedArray::SortedArray(){
	this->size = 0;
}

SortedArray::SortedArray(SortedArray& src){
	this->size=src.size;
	this->p = new int[this->size];
	
	for(int i=0;i<this->size;i++){
		this->p[i] = src.p[i];
	}
}

SortedArray::SortedArray(int p[], int size){
	this->size = size;
	this->p = new int[this->size];
	for(int i=0;i<this->size;i++){
		this->p[i] = p[i];
	}
}

SortedArray::~SortedArray(){
	delete [] p;
}

SortedArray SortedArray::operator+(SortedArray& op2){
	SortedArray tmp;
	tmp.size = this->size + op2.size;
	tmp.p = new int[tmp.size];
	
	int i;
	for(i=0;i<this->size;i++){
		tmp.p[i] = this->p[i];
	}
	
	for(int j=0;i<tmp.size;i++,j++){
		tmp.p[i] = op2.p[j];
	}
	return tmp;
}

SortedArray& SortedArray::operator=(const SortedArray& op2){
	this->size = op2.size;
	this->p = new int[this->size];
	for(int i=0;i<this->size;i++){
		this->p[i] = op2.p[i];
	}
	return *this;
}

void SortedArray::show(){
	sort();//더이상의 데이터 변화가 없기에 이곳에 출력함. 
	
	cout << "배열 출력 : ";
	for(int i=0;i<this->size;i++){
		cout << this->p[i] << ' ';
	}
	cout << endl;
}

void SortedArray::sort(){
	for(int i=0;i<this->size-1;i++){
		for(int j=i;j<this->size;j++){
			if(p[i] > p[j]) swap(p[i],p[j]);
		}
	}
}

int main(){
	int n[] = {2,20,6};
	int m[] = {10, 7,8,30};
	SortedArray a(n,3), b(m,4),c;
	
	c = a+b;
	
	a.show();
	b.show();
	c.show();
}
