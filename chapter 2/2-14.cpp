#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char coffee[100];
	int oder;
	int total = 0;
	int cost = 0;

	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원 입니다." << endl;

	while (total <= 20000) {
		cout << "주문>> ";
		cin >> coffee >> oder;
		if (!strcmp(coffee, "에스프레소")) {
			total += 2000 * oder;
			cout << 2000 * oder << "원입니다. 맛있게 드세요." << endl;
		}
		else if (!strcmp(coffee, "아메리카노")) {
			total += 2300 * oder;
			cout << 2300 * oder << "원입니다. 맛있게 드세요." << endl;
		}
		else if (!strcmp(coffee, "카푸치노")) {
			total += 2500 * oder;
			cout << 2500 * oder << "원입니다. 맛있게 드세요." << endl;
		}
	}
	cout << "오늘 " << total << "원을 판매하여 카페를 닫습니다. 내일 봐요~~" << endl;

	return 0;
}