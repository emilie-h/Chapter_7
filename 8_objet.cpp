#include <iostream>
#include <string>
using namespace std;

using namespace std;
class Object{
public:
	Object();
	~Object(){--totalCount; --counts;};
	int no();
	int nextNo();
	static int count();
private:
	static int counts;
	static int totalCount;
	int num = 0;

};
int Object::counts = 0;
int Object::totalCount = 0;

Object::Object(){
	++counts;
	num = counts;
}
int Object::no(){
	return num;
}
int Object::nextNo(){
	return num + 1;
}
int Object::count() {
	totalCount = counts;
	return totalCount;
}
void f(){
	Object a;
	cout << Object::count();
	//detruit l'objet
}

int main(){
	Object first;
	cout << first.no() << ' ';
	Object sec;
	Object* third = new Object;
	cout << third->no() <<' ';
	cout << sec.no() << endl;
	cout << sec.nextNo() << ' ';
	cout << Object::count() << ' ';
	delete third;
	cout << Object::count();
	f();
	cout << Object::count();
	return EXIT_SUCCESS;
}
