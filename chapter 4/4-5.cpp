#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main() {
	string s; // 입력을 저장할 문자열 
	srand((unsigned)time(0)); // 랜덤변수를 위한 설정
	int n; // 랜덤으로 나온 숫자를 저장하는 변수
	int loopcount; // 문장이 알파벳 이외의 것으로 구성되어 있을때 무한 루프를 방지하기 위함

	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다.)" << endl;

	for (;;) {
		cout << ">>";
		getline(cin, s, '\n');
		if (s == "exit") break;

		loopcount = 0;

		for (;;) {
			n = rand() % s.length();
			if (('a' <= s.at(n) && s.at(n) <= 'z') || ('A' <= s.at(n) && s.at(n) <= 'Z')) { // 범위를 정해서 알파벳을 선별하는 조건문
				if (rand() % 2) { // 대소문자로 나눌 조건문
					s[n] = (char)('a' + rand() % ('z' - 'a'));
				}
				else {
					s[n] = (char)('A' + rand() % ('Z' - 'A'));
				}
				break;
			}
			else {
				loopcount++;
				if (1000 > loopcount) break;//입력된 문장이 알파벳으로 이루어져 있지 않은면 무한 루프가 돌기 때문에 제한을 두었음. 
			}
		}

		cout << s << endl;
	}
}
