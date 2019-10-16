#include <iostream>
#include <string>
using namespace std;

class Buffer {
	string text;
public:
	Buffer(string text) { this->text = text; }
	void add(string next) { text += next; }
	void print() { cout << text << endl; }
};

Buffer& append(Buffer &buf, string s) {
	buf.add(s);
	return buf;
}

int main() {
	Buffer buf("Hellow");
	Buffer& temp = append(buf, "Guys");
	temp.print();
	buf.print();
}