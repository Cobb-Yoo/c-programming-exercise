#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

void print(int alpha[], int n);

int main() {
	int alpha[26] = { 0 };
	char data[10000];
	int count = 0;

	cin.getline(data, 10000, ';');

	for (int i = 0; i < strlen(data); i++) {
		if ('a' <= data[i] && data[i] <= 'z') {
			alpha[data[i] - 'a']++;
		}
		else if ('A' <= data[i] && data[i] <= 'Z') {
			alpha[data[i] - 'A']++;
		}
		else
			continue;

		count++;
	}

	cout << "ÃÑ ¾ËÆÄºª ¼ö " << count << endl;
	for (int i = 0; i < 26; i++) {
		print(alpha, i);
	}

	return 0;
}

void print(int alpha[], int num) {

	cout << (char)('a' + num) << " (" << alpha[num] << ')' << " : ";

	for (int i = 0; i < alpha[num]; i++) {
		cout << "*";
	}

	cout << endl;
}