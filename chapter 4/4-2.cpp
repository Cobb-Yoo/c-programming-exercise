#include <iostream>
using namespace std;

int main(){
	int *num = new int[5];
	double avg = 0;
	
	cout << "���� 5�� �Է�>> ";
	
	for(int i =0;i<5;i++){
		cin >> num[i];
		avg += num[i];
	}
	
	avg = avg / 5;
	
	cout << "��� " << avg << endl;
	
	delete [] num;//�޸� ��ȯ. 
}
