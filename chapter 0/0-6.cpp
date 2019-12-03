#include <iostream>
using namespace std;

void swapArray(int *p, int *q, int size); // 배열 p와 배열 q의 데이터를 바꾸는 함수
void printArray(int *p, int size); // 배열을 출력하는 함수

int main() {
	int a[] = { 1,2,3,4,5 };
	int b[] = { 9,8,7,6,5 };

	cout << "배열 a = ";
	printArray(a, 5);
	cout << "배열 b = ";
	printArray(b, 5);

	cout << "swapArray() 실행..." << endl;
	
	swapArray(a, b, 5);

	cout << "배열 a = ";
	printArray(a, 5);
	cout << "배열 b = ";
	printArray(b, 5);

	return 0;
}

void swapArray(int *p, int *q, int size) {
	int tmp;

	for (int i = 0; i < size; i++) {
		tmp = *(p + i);
		*(p + i) = *(q + i);
		*(q + i) = tmp;
	}
}

void printArray(int *p, int size) {
	for (int i = 0; i < size; i++) cout << *(p + i) << ' ';
	cout << endl;
}