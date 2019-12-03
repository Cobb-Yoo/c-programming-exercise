#include <iostream>
using namespace std;

void swapArray(int *p, int *q, int size); // �迭 p�� �迭 q�� �����͸� �ٲٴ� �Լ�
void printArray(int *p, int size); // �迭�� ����ϴ� �Լ�

int main() {
	int a[] = { 1,2,3,4,5 };
	int b[] = { 9,8,7,6,5 };

	cout << "�迭 a = ";
	printArray(a, 5);
	cout << "�迭 b = ";
	printArray(b, 5);

	cout << "swapArray() ����..." << endl;
	
	swapArray(a, b, 5);

	cout << "�迭 a = ";
	printArray(a, 5);
	cout << "�迭 b = ";
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