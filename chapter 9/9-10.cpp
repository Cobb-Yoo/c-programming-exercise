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
		Shape *pLase;
	public:
		GraphicEditor(){
			this->pStart = NULL;
			this->pLase = NULL;
		}
		void ins(int n);
		void del(int n);
		void view();
};

void GraphicEditor::view(){
	for(;;){
		if(this->pStart == this->pLase) break;
		
		pStart->show();
		pStart = pStart->getLink();
	}
}

void GraphicEditor::ins(int n){
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
	
	if(this->pStart == NULL && this->pLase == NULL){ // 리스트에 처음 삽입하는 경우 
		this->pStart = tmp;
		this->pLase = tmp;
	}
	else{
		Shape *head = this->pStart;
		for(;;){
			if(head->getLink() == this->pLase){
				head->setLink(tmp);
				this->pLase->setLink(tmp);
			}
			else {
				head = head->getLink();
			}
		}
	}
};

int main(){
	GraphicEditor *graphic = new GraphicEditor();
	
	int n;
	while(UI::menu(n) && n!=4){
		switch (n){
			case 1://삽입 
				UI::shapeMenu(n);
				graphic->ins(n);
				break;
			case 2: //삭제
				break;
			case 3: //모두보기
				graphic->view();
				break;
		}
	}
}
