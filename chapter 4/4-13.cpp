#include <iostream>
#include <string>
using namespace std;

class Histogram {
	string data;//����ڷ� ���� �Է¹��� ���ڵ� 
	int count = 0;
	int alpha[26] = { 0 }; // ���ڵ��� �� ���ĺ��� ������ ���� 
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

void Histogram::printStar(int n) {//�� ���ĺ��� ������ �´� ���� ����� 
	cout << (char)('a' + n) << " (" << alpha[n] << ")	: ";
	for (int i = 0; i < alpha[n]; i++) {
		cout << '*';
	}
	cout << endl;
}

void Histogram::print() {//����ڷ� ���� �Է¹��� ���ڵ�� ���ĺ����� ���� ����� 
	cout << data << endl << endl;

	cout << "�� ���ĺ� �� " << this->count << endl;

	Count(data);

	for (int i = 0; i < 26; i++) {
		printStar(i);
	}
}

void Histogram::Count(string s) {//����ڷ� ���� �Է¹��� ���ڵ鿡�� �� ���ĺ��� ���ڸ� �����. 
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
