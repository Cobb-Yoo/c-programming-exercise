#include <iostream>
using namespace std;

class ArrayUtility2{
	public :
		static int* concat(int s1[],int s2[],int size);
		static int* remove(int s1[],int s2[],int size, int& retSize);
};

int* ArrayUtility2::concat(int s1[],int s2[],int size){
	cout << "합친 정수 배열을 출력한다." << endl;
	
	int *s = new int[size*2];
	int i;
	
	for(i=0;i<size;i++) s[i] = s1[i];
	for(i=size;i<size*2;i++) s[i] = s2[i-size];
	
	return s;
}

int* ArrayUtility2::remove(int s1[],int s2[],int size, int& retSize){
	retSize = 0;
	bool bo[5];
	int *s;
	
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			if(s1[i] == s2[j]){
				bo[i] = true;
				retSize++;
				break;
			}
		}
	}
	
	retSize = 5 - retSize;
	s = new int[retSize];
	
	for(int i=0;i<5;i++){
		if(!bo[i]) s[i] = s1[i];
	}
	
	return s;
}

int main(){
	int x[5];
	int y[5];
	int *z;
	int *s;
	int retSize;
	
	cout << "정수를 5 개 입력하라. 배열 x에 삽입한다.>>";
	for(int i=0;i<5;i++) cin >> x[i];
	cout << "정수를 5 개 입력하라. 배열 y에 삽입한다.>>";
	for(int i=0;i<5;i++) cin >> y[i];
	
	s = ArrayUtility2::concat(x,y,5);
	for(int i=0;i < 10;i++){
		cout << s[i] << ' ';
	}
	cout << endl;
	
	z = ArrayUtility2::remove(x,y,5,retSize);
	cout << "배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 " << retSize << endl; 
	
	for(int i=0;i<retSize;i++){
		cout << z[i] << ' ';
	}
	cout << endl;
	
	delete [] z;
	delete [] s;
}
