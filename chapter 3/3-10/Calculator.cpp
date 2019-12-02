#include <iostream>
using namespace std;
#include "Calculator.h"

void Add::setValue(int x, int y) {
	this->a = x;
	this->b = y;
}
void Sub::setValue(int x, int y) {
	this->a = x;
	this->b = y;
}
void Mul::setValue(int x, int y) {
	this->a = x;
	this->b = y;
}
void Div::setValue(int x, int y) {
	this->a = x;
	this->b = y;
}

int Add::calculate() {
	return (this->a + this->b);
}
int Sub::calculate() {
	return this->a - this->b;
}
int Mul::calculate() {
	return this->a * this->b;
}
int Div::calculate() {
	return this->a / this->b;
}
