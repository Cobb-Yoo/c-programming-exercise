#include <iostream>
using namespace std;

class Matrix{
	int arr[4];
	public :
		Matrix(int a=0,int b=0,int c=0, int d=0){
			arr[0] = a;
			arr[1] = b;
			arr[2] = c;
			arr[3] = d;
		}
		void show();
		Matrix operator>>(int x[]);
		Matrix operator<<(int y[]);
};

Matrix Matrix::operator>>(int x[]){
	for(int i=0;i<4;i++){
		x[i] = this->arr[i];
	}
}

Matrix Matrix::operator<<(int y[]){
	for(int i=0;i<4;i++){
		this->arr[i] = y[i];
	}
}

void Matrix::show(){
	cout << "Matrix = { ";
	for(int i=0;i<4;i++){
		cout << this->arr[i] << ' ';
	}
	cout << "}\n";
}

int main(){
	Matrix a(4,3,2,1), b;
	int x[4], y[4] = {1,2,3,4};
	a >> x;
	b << y;
	
	for(int i=0;i<4;i++) cout << x[i] << ' ';
	cout << endl;
	b.show();
}
