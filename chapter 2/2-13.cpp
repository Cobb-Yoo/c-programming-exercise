#include <iostream>
using namespace std;

int main() {
	int oder;
	int peaple;

	cout << "***** 승리장에 오신 것을 환영합니다. *****" << endl;

	for (;;) {
		for (;;) {
			cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>>  ";
			cin >> oder;

			if (!(1 <= oder && oder <= 4)) cout << "다시 주문하세요.!!" << endl;
			else break;
		}

		if (oder == 4) {
			cout << "오늘 영업은 끝났습니다." << endl;
			break;
		}

		for (;;) {
			cout << "몇인분?";
			cin >> peaple;

			if ((1 <= peaple)) break;
		}

		switch (oder) {
		case 1:
			cout << "짬뽕" << peaple << "인분 나왔습니다" << endl;
			break;
		case 2:
			cout << "짜장" << peaple << "인분 나왔습니다" << endl;
			break;
		case 3:
			cout << "군만두" << peaple << "인분 나왔습니다" << endl;
			break;
		default:
			break;
		}
	}

	return 0;
}