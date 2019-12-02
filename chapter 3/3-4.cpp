#include <iostream>
using namespace std;

class CoffeeMachine {
private:
	int coffee;
	int water;
	int sugar;
public:
	CoffeeMachine(int a, int b, int c);
	void show();
	void drinkEspresso();
	void drinkAmericano();
	void drinkSugarCoffee();
	void fill();
	void cal_coffee(int a);
	void cal_water(int a);
	void cal_sugar(int a);
};

CoffeeMachine::CoffeeMachine(int a, int b, int c) {
	this->coffee = a;
	this->water = b;
	this->sugar = c;
}

void CoffeeMachine::drinkEspresso() { //에스프레소 커피 1 물 1
	cal_coffee(1);
	cal_water(1);
}

void CoffeeMachine::drinkAmericano() { //아메리카노 커피 1 물 2
	cal_coffee(1);
	cal_water(2);
}
void CoffeeMachine::drinkSugarCoffee() { // 설탕커피 커피 1 물 2 설탕 2
	cal_coffee(1);
	cal_water(2);
	cal_sugar(1);
}

void CoffeeMachine::cal_coffee(int a) {
	this->coffee = this->coffee - a;
}

void CoffeeMachine::cal_water(int a) {
	this->water = this->water - a;
}

void CoffeeMachine::cal_sugar(int a) {
	this->sugar = this->sugar - a;
}

void CoffeeMachine::fill() {
	this->coffee = 10;
	this->water = 10;
	this->sugar = 10;
}

void CoffeeMachine::show() {
	cout << "커피 머신 상태, 커피:" << this->coffee << " 물: " << this->water << " 설탕:" << this->sugar << endl;
}

int main() {
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();
}