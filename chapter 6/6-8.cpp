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
		cout << "----- 모든 Trace 정보를 출력합니다. -----"<<endl;
		for(int i=1;i<=count;i++)
			cout << Trace::debug[i][0] << ':' << Trace::debug[i][1] << endl;
	}
	else{
		cout << "----- " << f<<"태그의 Trace 정보를 출력합니다. -----"<<endl;
		for(int i=0;i<count;i++){
			if(Trace::debug[i][0] == f){
				cout << Trace::debug[i][0] << ':' << Trace::debug[i][1] << endl;
			}
		}
	}
	
	

}

void f(){
	int a,b,c;
	cout << "두 개의 정수를 입력하세요>>";
	cin >> a >> b;
	Trace::put("f()", "정수를 입력 받았음");
	c = a+b;
	Trace::put("f()", "합 계산") ;
	cout << "합은 " << c << endl;
}

int main(){
	Trace::put("main()", "프로그램 시작합니다");
	f();
	Trace::put("main()","종료");
	
	Trace::print("f()");
	Trace::print();
} 
