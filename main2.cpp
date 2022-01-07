#include "2_point.h"
#include <iostream>

int main() {
Point point1(2,2);
point1.afficher();
std::cout << point1.abscisse() << ' ';
std::cout << point1.ordonnee();
	return 0;
}
