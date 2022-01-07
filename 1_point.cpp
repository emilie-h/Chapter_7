#include "1_point.h"
#include <iostream>
using namespace std;
//Constructor
Point::Point(float x, float y){
	coordonneeX = x;
	coordonneeY = y;
}

void Point::deplacer(float MoveX, float MoveY) {
	coordonneeX += MoveX;
	coordonneeY += MoveY;
}
void Point::afficher() const{
	cout << "(" << this->coordonneeX << ", " << this->coordonneeY << ")" << endl;
}