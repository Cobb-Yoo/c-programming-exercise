#include <iostream>
#include <string>
using namespace std;

class Trace{
	static string debug[100][2];
	static int count;
public:
	static void put(string f, string line);
	static void print(string f= " ");
};

string Trace::debug[100][2];
int Trace::count=0;

void Trace::put(string f, string line){
	count++;
	
	Trace::debug[count][0] = f;
	Trace::debug[count][1] = line;
}

void Trace::print(string f){
	if(f == " "){
		cout << "----- ��� Trace ������ ����մϴ�. -----"<<endl;
		for(int i=1;i<=count;i++)
			cout << Trace::debug[i][0] << ':' << Trace::debug[i][1] << endl;
	}
	else{
		cout << "----- " << f<<"�±��� Trace ������ ����մϴ�. -----"<<endl;
		for(int i=0;i<count;i++){
			if(Trace::debug[i][0] == f){
				cout << Trace::debug[i][0] << ':' << Trace::debug[i][1] << endl;
			}
		}
	}
	
	

}

void f(){
	int a,b,c;
	cout << "�� ���� ������ �Է��ϼ���>>";
	cin >> a >> b;
	Trace::put("f()", "������ �Է� �޾���");
	c = a+b;
	Trace::put("f()", "�� ���") ;
	cout << "���� " << c << endl;
}

int main(){
	Trace::put("main()", "���α׷� �����մϴ�");
	f();
	Trace::put("main()","����");
	
	Trace::print("f()");
	Trace::print();
} 
