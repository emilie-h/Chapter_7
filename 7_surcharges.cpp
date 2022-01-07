#include <iostream>
#include <iomanip>
#include <cmath>
#define PI 3.14159265
using namespace std;
class C{
	friend ostream& operator<<(ostream& lhs, const C& a);
	friend C operator+(C a, const C& b);
	friend bool operator==(const C& a, const C& b);
	friend bool operator!=(const C& a, const C& b){return !(a == b);};
public:
	C(){}
	// on peut initialiser les parametre avant la declaration
	C(int num) : num (num){}
	C& operator+=(const C& a);
	C& operator++();
	C operator++(int);

private:
	int num = 0;
};


ostream& operator<<(ostream& lhs, const C& a) {
	lhs << "n = " << a.num;
	return lhs;
}
C operator+(C a, const C& b){
	a += b;
	return a;
}
C& C::operator+=(const C& a){
	num += a.num;
	return *this;
}
bool operator==(const C& a, const C& b) {
	return a.num == b.num;
}
C& C::operator++()  { //prefix ++n
	++num;
	return *this;
}
C C::operator++(int)  { //n++
	C temp = *this;
	++*this;
	return temp;
}

int main() {
	C c0, c1(1), c2 = 5;
	const C C3{7};
	cout << c0 << endl << c1 << endl;

	cout << boolalpha;
	cout << (c0 == c1) << endl;
	cout << (c0 != c1) << endl;
	cout << noboolalpha;

	cout << c1++ << endl;
	cout << c1 << endl;
	cout << ++c1 << endl;
	cout << c1 + c2 << endl;
	c1 += c2;
	cout << c1 << endl;
	cout << C3 + c2 << endl;
	return EXIT_SUCCESS;
}

