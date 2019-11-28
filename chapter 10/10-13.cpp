#include <iostream>
#include <map>
using namespace std;

int main(){
	map<string, int> arr;
	
	int n;
	string name;
	int score;
	
	cout << "***** 점수관리 프로그램 HIGH SCORE을 시작합니다 *****\n" << "입력:1, 조회:2, 종료:3 >>";
	while(cin >> n && n != 3){
		if(n==1){
			cout << "이름과 점수>> ";
			cin >> name >> score;
			
			arr.insert(make_pair(name, score));
		}
		else if(n == 2){
			cout << "이름>> ";
			cin >> name;
			cout << name <<"의 점수는 " << arr[name] << endl;
		}
		else break;
		
		cout << "입력:1, 조회:2, 종료:3 >>";
	}
	cout << "프로그램을 종료합니다...\n";
}
