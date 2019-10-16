#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Random{
	public:
		static void seed() {srand((unsigned)time(0));}
		static int nextInt(int min, int max);
		static char nextAlphabet();
		static double nextDouble();
};

int Random::nextInt(int min=0, int max=32767){
	return rand()%(max-min+1) + min;
}

char Random::nextAlphabet(){
	if(rand()%2){
		cout << (char)(Random::nextInt(97, 122));
	}
	else{
		cout << (char)(Random::nextInt(65, 90));
	}
}

double Random::nextDouble(){
	return (double)(rand()%100000)/100000;
}

int main(){
	Random::seed();
	
	cout << "1에서 100까지 랜덤한 정수 10개를 출력합니다." << endl;
	for(int i=0;i<10;i++)
		cout << Random::nextInt(0,100) << ' ';
	cout << endl;
	
	cout << "알파벳을 랜덤하게 10개를 출력합니다." << endl;
	for(int i=0;i<10;i++)
		cout << Random::nextAlphabet() << ' ';
	cout << endl;
	
	cout <<"랜덤한 실수를 10개를 출력합니다."<<endl;
	for(int i=0;i<10;i++){
		cout << Random::nextDouble() << " ";
		if(i == 1) cout << endl;
	}
	
}
