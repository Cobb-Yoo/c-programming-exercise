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
		Shape();
		virtual void show(int n)=0;
		void setName(string name) {
			this->name = name;
		}
};

class Line:public Shape{
	public:
		Line():Shape(){
			setName("Line");
		}
};

class Circle:public Shape{
	public:
		Circle():Shape(){
			setName("Circle");
		}
};

class Rect:public Shape{
	public:
		Rect():Shape(){
			setName("Rect");
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
		void insert(int n);
		void delete(int n);
};

int main(){
	GraphicEditor *graphic;
	graphic = new GraphicEditor();
	
	int n;
	while(UI::menu(n) && n!=4){
		switch (n):
			case 1:
				UI::shapeMenu(n);
				switch (n):
					case 1:
						
	}
}
