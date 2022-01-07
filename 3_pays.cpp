#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class Country{
public:
	Country(string countryN, long long pop, long long area);
	string countryName() const;
	long long totPop() const;
	long long totArea() const;
	static int count;
private:
	string name;
	long long population;
	long long area;
};

Country::Country(string countryN, long long pop, long long totArea){
	name = countryN;
	population = pop;
	area = totArea;
}
string Country::countryName() const {
	return name;
}
long long Country::totPop() const {
	return population;
}
long long Country::totArea() const {
	return area;
}
static bool compareArea(Country c1, Country c2){
	return c1.totArea() < c2.totArea();
}
static bool comparePop(Country c1, Country c2){
	return c1.totPop() < c2.totPop();
}
static bool compareDensity(Country c1, Country c2){

	return c1.totPop()/c1.totArea() < c2.totPop()/c2.totArea();
}
int main() {
	Country CH("Switzerland", 8636896, 41290);
	Country CHN("China", 1410929362, 3287259);
	Country US("United States", 329484123, 9831510);
	vector<Country> countries = {CH, CHN, US};

	auto maxArea = max_element(countries.begin(),countries.end(),compareArea);
	cout << maxArea->countryName() << endl;

	auto maxPop = max_element(countries.begin(),countries.end(), comparePop);
	cout << maxPop->countryName() << endl;

	auto maxDens = max_element(countries.begin(),countries.end(), compareDensity);
	cout << maxDens->countryName() << endl;





//source https://databank.worldbank.org/reports.aspx?source=2&country=USA,IND,CHN,CHE#
	return 0;
}

