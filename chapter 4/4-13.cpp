#include <iostream>
#include <string>
using namespace std;

class Histogram {
	string data;//사용자로 부터 입력받은 문자들 
	int count = 0;
	int alpha[26] = { 0 }; // 문자들의 각 알파벳의 갯수를 저장 
public:
	Histogram(string s);
	void put(string s);
	void putc(char c);
	void print();
	void Count(string s);
	void printStar(int n);
};

Histogram::Histogram(string s) {
	data = s + '\n';
}

void Histogram::put(string s) {
	data = data + s;
}

void Histogram::putc(char c) {
	data = data + c;
}

void Histogram::printStar(int n) {//각 알파벳의 갯수에 맞는 별을 출력함 
	cout << (char)('a' + n) << " (" << alpha[n] << ")	: ";
	for (int i = 0; i < alpha[n]; i++) {
		cout << '*';
	}
	cout << endl;
}

void Histogram::print() {//사용자로 부터 입력받은 문자들과 알파벳수와 별을 출력함 
	cout << data << endl << endl;

	cout << "총 알파벳 수 " << this->count << endl;

	Count(data);

	for (int i = 0; i < 26; i++) {
		printStar(i);
	}
}

void Histogram::Count(string s) {//사용자로 부터 입력받은 문자들에서 각 알파벳의 숫자를 계산함. 
	for (int i = 0; i < s.length(); i++) {
		if ('a' <= s.at(i) && s.at(i) <= 'z') {
			alpha[s.at(i) - 'a']++;
			this->count++;
		}
		else if ('A' <= s.at(i) && s.at(i) <= 'Z') {
			alpha[s.at(i) - 'A']++;
			this->count++;
		}
	}
}

int main() {
	Histogram elvinsHisto("Wise men say, only fools rush in But I can`t help, ");
	elvinsHisto.put("falling in love with you");
	elvinsHisto.putc('-');
	elvinsHisto.put("Elvins Presley");
	elvinsHisto.print();
}
