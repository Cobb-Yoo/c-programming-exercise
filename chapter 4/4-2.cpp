#include <iostream>
using namespace std;

int main(){
	int *num = new int[5];
	double avg = 0;
	
	cout << "정수 5개 입력>> ";
	
	for(int i =0;i<5;i++){
		cin >> num[i];
		avg += num[i];
	}
	
	avg = avg / 5;
	
	cout << "평균 " << avg << endl;
	
	delete [] num;//메모리 반환. 
}
