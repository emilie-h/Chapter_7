#include <iostream>
using namespace std;
class Point{
public:
	//Point(float x, float y); voir ex 1 ou 2
	Point(){}
	// on peut initialiser les parametre avant la declaration
	Point(float x, float y) : coordonneeX (x), coordonneeY (y) {}
	Point operator+(const Point& p) const;
	float abscisse() const;
	float ordonnee() const;

	void afficher() const;

private:
	float coordonneeX;
	float coordonneeY;
};

//Constructor

float Point::abscisse() const{
	return coordonneeX;
}
float Point::ordonnee() const{
	return coordonneeY;
}
Point Point::operator+(const Point &p) const {
	Point temp;
	temp.coordonneeX = coordonneeX + p.coordonneeX;
	temp.coordonneeY = coordonneeY + p.coordonneeY;
	return temp;
}

void Point::afficher() const{
	cout << "(" << this->coordonneeX << ", " << this->coordonneeY << ")" << endl;
}
int main() {
	Point point1(0,1);
	Point point2(2,3);
	Point sum = point1 + point2;
	sum.afficher();
	return 0;
}
