#include "2_point.h"
#include <iostream>
using namespace std;
//Constructor
Point::Point(float x, float y){
	coordonneeX = x;
	coordonneeY = y;
}

float Point::abscisse() const{
	return coordonneeX;
}
float Point::ordonnee() const{

	return coordonneeX;
}
void Point::afficher() const{
	cout << "(" << this->coordonneeX << ", " << this->coordonneeY << ")" << endl;
}