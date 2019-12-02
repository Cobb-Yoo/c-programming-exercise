#include <iostream>
using namespace std;

class UI{//only static members
	public:
		static void start(){
			cout << "ê·¸ëž˜í”½ ì—ë””í„°ìž…ë‹ˆë‹¤.\n";
		}
		static int menu(int& n){
			cout << "ì‚½ìž…:1, ì‚­ì œ:2, ëª¨ë‘ë³´ê¸°:3, ì¢…ë£Œ:4 >> ";
			cin >> n;
		}
		static int shapeMenu(int& n){
			cout << "ì„ :1, ì›:2, ì‚¬ê°í˜•:3 >> ";
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
	
	
	if(this->pStart == NULL && this->pLase == NULL){ // ¸®½ºÆ®¿¡ Ã³À½ »ðÀÔÇÏ´Â °æ¿ì 
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
	
	if(this->pStart == NULL && this->pLase == NULL){ // ë¦¬ìŠ¤íŠ¸ì— ì²˜ìŒ ì‚½ìž…í•˜ëŠ” ê²½ìš° 
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
			case 1://»ðÀÔ 
				UI::shapeMenu(n);
				graphic->ins(n);
				break;
			case 2: //»èÁ¦
				break;
			case 3: //¸ðµÎº¸±â
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
