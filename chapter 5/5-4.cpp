#include <iostream>
using namespace std;

bool bigger(int a, int b, int &big){
	if (a < b){
		big = b;
		return false;
	}
	else if (a > b){
		big = a;
		return false;
	}
	else{
		big = a;
		return true;
	}
}

int main(){
	int a,b,big;
	
	cin >> a >> b;
	bigger(a,b,big);
	
	cout << big << endl;
}
