#include <iostream>
#include <cstring>
using namespace std;

char &find(char a[], char c,bool &success){	
	int i;
	for(i=0;i<strlen(a);i++){//'M'�� �ִ� �κ��� ã��. 
		if(a[i] == c){
			success = true;
			break;
		}
	}
	return *(a+i); //M�� ��ġ�ϰ� �ִ� �κ��� ����. 
}

int main(){
	char s[] = "Mike";
	bool b = false;
	char &loc = find (s,'M',b);
	if(b == false){
		cout << "M�� �߰��� �� ����." << endl;
		return 0;
	}
	
	cout << loc << endl;
	loc = 'm';
	cout << s << endl;
}
