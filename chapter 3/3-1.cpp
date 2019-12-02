#include <iostream>
using namespace std;

class Tower {
	int height;
public:
	Tower();
	Tower(int n);
	int getHeight();
};

Tower::Tower() : Tower(1) {}
Tower::Tower(int n) { height = n; }
int Tower::getHeight() {
	return height;
}

int main() {
	Tower myTower;
	Tower seoulTower(100);
	cout << "높이는 " << myTower.getHeight() << "미터" << endl;
	cout << "높이는 " << seoulTower.getHeight() << "미터" << endl;

	return 0;
}