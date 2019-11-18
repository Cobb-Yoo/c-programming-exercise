#include <iostream>
using namespace std;

class BaseArray {
private:
    int capacity; 
    int *mem;
protected:
    BaseArray(int capacity = 100) {
        this->capacity = capacity; mem = new int[capacity];
    }
    ~BaseArray() { delete[] mem; }
    void put(int index, int val) { mem[index] = val; }
    int get(int index) { return mem[index]; }
    int getCapacity() { return capacity; }
};

class MyQueue:public BaseArray{
	int front;
	int rear;
	public:
		MyQueue(int capacity):BaseArray(capacity){this->front=0;this->rear=0;}
		void enqueue(int n);
		int capacity();
		int length();
		int dequeue();
};

void MyQueue::enqueue(int n){
	this->put(rear++%getCapacity(),n);
}

int MyQueue::capacity(){
	return this->getCapacity();
}

int MyQueue::length(){
	return (rear-front)%getCapacity();
}

int MyQueue::dequeue(){
	return this->get(front++%getCapacity());
}

int main(){
	MyQueue mQ(100);
    int n;
    cout << "ť�� ������ 5���� ������ �Է��϶�>> ";
    for (int i = 0; i < 5; ++i) {
        cin >> n;
        mQ.enqueue(n);
    }
    cout << "ť�� �뷮:" << mQ.capacity() << ", ť�� ũ��:" << mQ.length() << endl;
    cout << "ť�� ���Ҹ� ������� �����Ͽ� ����Ѵ�>> ";
    while (mQ.length() != 0) {
        cout << mQ.dequeue() << ' ';
    }
    cout << endl << "ť�� ����ũ�� : " << mQ.length() << endl;
}
