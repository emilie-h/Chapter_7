#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

using namespace std;
class Voiture{
public:
	Voiture(int reservoir, double consommation);
	~Voiture(){};
	static double getPrixEssence();
	static double setPrixEssence(double prixEssence);
	double coutTrajet(double km);
	int getReservoir() const{return reservoir;};
	double getConsommation() const{return consommation;};
	double getLitresRestant() const{return litresRestant;};

	double static prix;
	double static coutParKm;
	double static consommation;
private:
	double litresRestant;
	double kmTotaux;
	int reservoir;
};
double Voiture::prix = 1.50;
double Voiture::coutParKm = 0;
double Voiture::consommation = 0;

Voiture::Voiture(const int reservoirV, double consommationV){
	reservoir = reservoirV;
	consommation = consommationV;
	litresRestant = reservoir;
}
double Voiture::getPrixEssence(){
	return prix;
}
double Voiture::setPrixEssence(double prixEssence){
	prix = prixEssence;
	return prix;
}
double Voiture::coutTrajet(double km){
	kmTotaux = km;
	litresRestant = litresRestant - km * (consommation/100);
	if(litresRestant < 0){
		litresRestant += reservoir;
	}
	return kmTotaux;
}
const string frs = " Frs";
void afficherPrixEssence(double prixEssence){
	cout << "Prix de l'essence : " << setprecision(2) << fixed << prixEssence
	<< frs << endl << endl;
}
void afficherVoiture(const Voiture& v){
	cout << fixed << setprecision(1);
	cout << "Capacite du reservoir [l] 			: " << v.getReservoir() << endl;
	cout << "Consommation moyenne [l/100km] 		: " << v.getConsommation() << endl;
	cout << "Nb litres restants 					: " << v.getLitresRestant() <<
	endl;
	cout << endl;
}
void afficherCoutTrajet(double km){
	Voiture::coutParKm =  Voiture::consommation * (km/100) * Voiture::prix;
	cout << "Cout du trajet : " << fixed << setprecision(2) <<
	Voiture::coutParKm <<	frs
	<< endl << endl;
}



int main(){
	//function not class
	afficherPrixEssence(Voiture::getPrixEssence());
	Voiture::setPrixEssence(1.34);
	afficherPrixEssence(Voiture::getPrixEssence());
	Voiture v(52, 6.7);
	afficherVoiture(v);
	afficherCoutTrajet(v.coutTrajet(1000)); afficherVoiture(v);
	afficherCoutTrajet(v.coutTrajet(200)); afficherVoiture(v);

}
