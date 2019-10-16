Book::Book(const char* title, int price){
	int len = strlen(title);
	this->title = new char [len + 1];
	strcpy(this->title, title);
	this->price = price;
}

Book::~Book(){
	delete this->title;
}

void Book::set(const char* title, int price){
	if(this->title)	delete this->title;
	
	int len = strlen(title);
	this->title = new char[len+1]; 
	strcpy(this->title,title);
	
	this->price = price;
}
