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
<<<<<<< HEAD
		}
		virtual void show()=0;
		void setLink(Shape *n){
			this->link = n;
		}
=======
			name = "";
		}
		virtual void show(int n)=0;
		void setName(int n);
>>>>>>> 1508d44f6396d5f041bcab91a323ffb31e1797e2
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
<<<<<<< HEAD
		Line():Shape(){}
		void show(){
			cout << ": Line\n";
=======
		Line():Shape(){
			setName(1);
>>>>>>> 1508d44f6396d5f041bcab91a323ffb31e1797e2
		}
};

class Circle:public Shape{
	public:
<<<<<<< HEAD
		Circle():Shape(){}
		void show(){
			cout << ": Circle\n";
=======
		Circle():Shape(){
			setName(2);
>>>>>>> 1508d44f6396d5f041bcab91a323ffb31e1797e2
		}
};

class Rect:public Shape{
	public:
<<<<<<< HEAD
		Rect():Shape(){}
		void show(){
			cout << ": Rect\n";
=======
		Rect():Shape(){
			setName(3);
>>>>>>> 1508d44f6396d5f041bcab91a323ffb31e1797e2
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
<<<<<<< HEAD
		void view();
};

void GraphicEditor::view(){
	Shape *head = this->pStart;
	for(;;){
		if(head == this->pLase) break;
		
		head->show();
		head = head->getLink();
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
	
	
	if(this->pStart == NULL && this->pLase == NULL){ // ����Ʈ�� ó�� �����ϴ� ��� 
		this->pStart->setLink(tmp);
		this->pLase->setLink(tmp)z;
	}
	else{
		for(;;){
			if(this->pStart->getLink() == NULL){
				this->pStart->setLink(tmp);
				this->pLase->setLink(tmp);
			}
			else {
				this->pStart = this->pStart->getLink();
			}
=======
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
			
>>>>>>> 1508d44f6396d5f041bcab91a323ffb31e1797e2
		}
	} 
}

int main(){
	GraphicEditor *graphic = new GraphicEditor();
	
	int n;
	while(UI::menu(n) && n!=4){
		switch (n){
<<<<<<< HEAD
			case 1://���� 
				UI::shapeMenu(n);
				graphic->ins(n);
				break;
			case 2: //����
				break;
			case 3: //��κ���
				graphic->view();
				break;
=======
			case 1:
				UI::shapeMenu(n);
				switch (n){
					case 1:
						break;
				}
>>>>>>> 1508d44f6396d5f041bcab91a323ffb31e1797e2
		}
	}
}
