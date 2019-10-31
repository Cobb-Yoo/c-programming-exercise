#include <iostream>
using namespace std;

class Matrix {
	int arr[4];
	public :
		Matrix (int a=0, int b=0, int c=0, int d=0){
			arr[0] = a;
			arr[1] = b;
			arr[2] = c;
			arr[3] = d;
		}
		void show(){
			cout << "Maxtrix = { ";
			for(int i=0;i<4;i++){
				cout << arr[i] << ' ';
			}
			cout << "}\n";
		}
		Matrix& operator+=(Matrix op2){
			for(int i=0;i<4;i++){
				this->arr[i] += op2.arr[i];
			}
			return *this;
		}
		Matrix operator+(Matrix op2){
			Matrix tmp;
			for(int i=0;i<4;i++){
				tmp.arr[i] = this->arr[i] + op2.arr[i];
			}
			return tmp;
		}
		bool operator==(Matrix op2){
			for(int i=0;i<4;i++){
				if(this->arr[i] != op2.arr[i]){
					return false;
				}
			}
			return true;
		}
};

int main(){
	Matrix a(1,2,3,4), b(2,3,4,5), c;
	c = a+b;
	a += b;
	a.show();
	b.show();
	c.show();
	if(a==c)
		cout << "a and c are the same" << endl;
}
