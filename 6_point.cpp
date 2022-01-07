#include <iostream>
#include <cmath>
#define PI 3.14159265
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
	void rotate(double degrees);
	double rho(double degrees);
	double theta(double degrees);
	void afficher() const;

private:
	float coordonneeX;
	float coordonneeY;
	double r;
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
void Point::rotate(double radiant) {
	//formula: x'= x*cos(degr) + y*sin(degr)
	//formula: y'= y*cos(degr) - x*sin(degr)
	double xP = coordonneeX * cos(radiant) + coordonneeY * sin(radiant);
	double yP = coordonneeY * cos(radiant) - coordonneeX * sin(radiant);
	coordonneeX = xP;
	coordonneeY = yP;
}
double Point::rho(double radiant) {
	// r = sqr(x^2 + y^2)
	r = sqrt(coordonneeX * coordonneeX + coordonneeY * coordonneeY);
	return r;
}
double Point::theta(double radiant) {
	// theta = tan^-1(y/x)
	double theta = atan(coordonneeY/coordonneeX);
	return theta;
}
void Point::afficher() const{
	cout << "(" << this->coordonneeX << ", " << this->coordonneeY << ")" << endl;
}
int main() {
	double degreeToRadiant = 45 * PI / 180.0;
	Point point1(1,0);// check if correct :)
	cout << point1.rho(degreeToRadiant) << ' ';
	cout << point1.theta(degreeToRadiant) << endl;
	for(int i = 0; i < 8; ++i) {
		point1.rotate(degreeToRadiant);
		point1.afficher();
		cout << point1.rho(degreeToRadiant) << ' ';
		cout << point1.theta(degreeToRadiant) << endl;
	}

	return 0;
}
