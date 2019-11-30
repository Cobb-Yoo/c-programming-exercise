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
	string name;
	public:
		Shape(){
			this->link = NULL;
			name = "";
		}
		virtual void show(int n)=0;
		void setName(int n);
		Shape *getLink(){
			return this->link;
		}
};

void Shape::setName(int n){
	switch (n){
		case 1:
			this->name = "Line";
			break;
		case 2:
			this->name = "Circle";
			break;
		case 3:
			this->name = "Rect";
			break;
	}
}

class Line:public Shape{
	public:
		Line():Shape(){
			setName(1);
		}
};

class Circle:public Shape{
	public:
		Circle():Shape(){
			setName(2);
		}
};

class Rect:public Shape{
	public:
		Rect():Shape(){
			setName(3);
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
};

void GraphicEditor::ins(int n){
	switch (n){
		case 1:
			Line tmp;
			break;
		case 2:
			Circle tmp;
			break;
		case 3:
			Rect tmp;
			break;
	}
	
	Shape *head = this->pStart;
	
	if(this->pStart == NULL && this->pLase == NULL){ // 리스트에 처음 삽입하는 경우 
		this->pStart = tmp;
		this->pLase = tmp;
	}
	else{
		for(;;){
			
		}
	} 
}

int main(){
	GraphicEditor *graphic;
	graphic = new GraphicEditor();
	
	int n;
	while(UI::menu(n) && n!=4){
		switch (n){
			case 1:
				UI::shapeMenu(n);
				switch (n){
					case 1:
						break;
				}
		}
	}
}
