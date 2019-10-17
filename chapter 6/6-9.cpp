#include <iostream>
using namespace std;

class Board{
	public:
		static int count;
		static string data[100];
		static void add(string s);
		static void print();
};

string Board::data[100];
int Board::count = 0;

void Board::add(string s){
	Board::data[count++] = s;
}

void Board::print(){
	cout << "************ �Խ����Դϴ�. ************\n";
	for(int i=0;i < Board::count;i++)
		cout << i << ": " << Board::data[i] << endl;
	cout << '\n';
}

int main(){
	Board::add("�߰����� ���� ���� ���� �����Դϴ�.");
	Board::add("�ڵ� ����� ���� �̿��� �ּ���.");
	Board::print();
	Board::add("���Ҹ� �л��� ������ȸ �Ի��Ͽ����ϴ�. �������ּ���") ;
	Board::print();
}
