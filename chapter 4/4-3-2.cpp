#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int count = 0;

	cout << "문자열 입력>> ";
	getline(cin, s, '\n');

	for (int i = 0; i < s.length(); i++) {
		i = s.find('a', i);
		if (i < 0) break;//무한 루프를 막기 위한 코드. 
		count++;
	}

	cout << "문자 a는 " << count << "개 있습니다.";
}
