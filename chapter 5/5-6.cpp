#include <iostream>
#include <cstring>
using namespace std;

char &find(char a[], char c,bool &success){	
	int i;
	for(i=0;i<strlen(a);i++){//'M'이 있는 부분을 찾음. 
		if(a[i] == c){
			success = true;
			break;
		}
	}
	return *(a+i); //M이 위치하고 있는 부분을 리턴. 
}

int main(){
	char s[] = "Mike";
	bool b = false;
	char &loc = find (s,'M',b);
	if(b == false){
		cout << "M을 발견할 수 없다." << endl;
		return 0;
	}
	
	cout << loc << endl;
	loc = 'm';
	cout << s << endl;
}
