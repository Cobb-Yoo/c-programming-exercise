#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	int count=0;
	int sum = 0;
	vector<int> arr;
	
	cout << "������ �Է��ϼ���(0�� �Է��ϸ� ����)>>";
	while(cin >> n && n != 0){
		arr.push_back(n);
		sum = 0;
		for(int i=0;i<arr.size();i++){
			cout << arr[i] << ' ';
			sum += arr[i];
		}
		cout << endl;
		
		double avg = sum;
		cout << "��� = " << avg/arr.size() << endl;
		
		cout << "������ �Է��ϼ���(0�� �Է��ϸ� ����)>>";
	}
}
