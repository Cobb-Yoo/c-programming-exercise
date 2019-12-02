#include <iostream>
using namespace std;

class UI{//only static members
	public:
		static void start(){
			cout << "그래픽 에디터입니다.\n";
		}
		static int menu(int& n){
			cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";
			cin >> n;
		}
		static int shapeMenu(int& n){
			cout << "선:1, 원:2, 사각형:3 >> ";
			cin >> n;
		}
		static int deleteShape(int &n){
			cout << "삭제하고자 하는 도형의 인덱스 >> " ;
			cin >> n;
		}
};

class Shape{
	Shape *link;
	public:
		Shape(){
			this->link = NULL;
		}
		virtual void show()=0;
		void setLink(Shape *n){
			this->link = n;
		}
		Shape *getLink(){
			return this->link;
		}
};

class Line:public Shape{
	public:
		Line():Shape(){}
		void show(){
			cout << ": Line\n";
		}
};

class Circle:public Shape{
	public:
		Circle():Shape(){}
		void show(){
			cout << ": Circle\n";
		}
};

class Rect:public Shape{
	public:
		Rect():Shape(){}
		void show(){
			cout << ": Rect\n";
		}
};

class GraphicEditor{
	private:
		Shape *pStart;
		Shape *pLast;
		int len;
	public:
		GraphicEditor(){
			this->pStart = NULL;
			this->pLast = NULL;
			len = 0;
		}
		void ins(int n);
		void del(int n);
		void view();
		void lenU(){len++;}
		void lenD(){len--;}
		int getLen(){
			return len;
		}
};

void GraphicEditor::view(){
	Shape *head = this->pStart;
	for(int i=0;;i++){
		if(head == NULL) break;
		
		cout << i;
		head->show();
		head = head->getLink();
	}
}

void GraphicEditor::ins(int n){
	this->lenU();
	
	Shape *tmp;
	switch (n){
		case 1:
			tmp = new Line;
			break;
		case 2:
			tmp = new Circle;
			break;
		case 3:
			tmp = new Rect;
			break;
	}
	
	if(this->pStart == NULL && this->pLast == NULL){ // 리스트에 처음 삽입하는 경우 
		this->pStart = tmp;
		this->pLast = tmp;
	}
	else{// 여기를 바꿔야함 처음에 넣는건 잘 되는데 그 이후가 문제임 
		Shape *head = this->pStart;
		for(;;){
			if(head->getLink() == NULL){
				head->setLink(tmp);
				this->pLast = head->getLink();
				break;
			}
			else {
				head = head->getLink();
			}
		}
	}
};

void GraphicEditor::del(int n){//? 왜 연결이 안되는 것이야 
	Shape *head = this->pStart;
	if(n == 0){
		this->pStart = this->pStart->getLink();
		this->lenD();
	}
	else if(n == this->getLen()-1){
		for(int i=0;i<n-1;i++) head = head->getLink();
		this->pLast = head;
		delete head->getLink();
		head->setLink(NULL);
		this->lenD();
	}
	else{
		for(int i=0;i<n-1;i++) head = head->getLink();
		
		Shape *tmp = head->getLink();
		head->setLink(tmp->getLink());
		delete tmp;
		
		this->lenD();
	}
}

int main(){
	GraphicEditor *graphic = new GraphicEditor();
	UI::start();
	int n;
	while(UI::menu(n) && n!=4){
		switch (n){
			case 1://삽입 
				UI::shapeMenu(n);
				graphic->ins(n);
				break;
			case 2: //삭제
				UI::deleteShape(n);
				graphic->del(n);
				break;
			case 3: //모두보기
				graphic->view();
				break;
		}
	}
}
