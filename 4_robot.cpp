#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

using namespace std;
class Robot{
public:
	Robot(int posInit = 0);
	void move(int movePos);
	void halfTurn(int movePos);
	void getPosition() const;
private:
	bool directionRight = true;
	int pos = 0;
	const int i = 15;
	string robotImage = "(+_+)";

};

Robot::Robot(int posInit){
	pos = posInit;
}
void Robot::move(int n = 1){
	if(!directionRight){
		pos -= n;
	}else {
		pos += n;
	}
	cout << setw(i + pos) << robotImage << endl;

}
void Robot::halfTurn(int movePos){
	if(directionRight) {
		pos -= movePos;
		directionRight = false;
	}
	else {
		directionRight = true;
		pos += movePos;
	}
	cout << setw(i + pos) << robotImage << endl;
}
void Robot::getPosition() const{
	cout << pos;
}

int main(){
	Robot pepper;
	cout << "     76543210123456" << endl;
	pepper.move();//1
	pepper.move(3);//4
	pepper.halfTurn(8);//-4, left
	pepper.move(2); // -6
	pepper.halfTurn(10); // 4
	cout << endl;
	pepper.getPosition();
	cout << endl;



}
//#include <iostream>
//#include <iomanip>
//#include <string>
//using namespace std;
//
//using namespace std;
//class Robot{
//public:
//	Robot(int posInit = 0);
//	int move(int movePos);
//	int halfTurn(int movePos);
//	void getPosition() const;
//private:
//	bool directionRight = true;
//	int pos = 0;
//	string robotImage = "(+_+)";
//
//};
//
//Robot::Robot(int posInit){
//	pos = posInit;
//}
//int Robot::move(int n = 1){
//	if(!directionRight){
//		pos -= n;
//	}else {
//		pos += n;
//	}
//	return pos;
//
//}
//int Robot::halfTurn(int movePos){
//	if(directionRight) {
//		pos -= movePos;
//		directionRight = false;
//	}
//	else {
//		directionRight = true;
//		pos += movePos;
//	}
//	return pos;
//}
//void Robot::getPosition() const{
//	cout << pos;
//}
//
//int main(){
//	Robot pepper;
//	cout << pepper.move() << ' ';//1
//	cout << pepper.move(4) << ' ';//5
//	cout << pepper.halfTurn(4) << ' ';//1, left
//	cout << pepper.move(2) << ' '; // -1
//	cout << pepper.halfTurn(2) << ' '; // 1
//	pepper.getPosition();
//	cout << endl;
//int i = 45;
//	cout << right << setw(i + 1) << "(+_+)";
//
//
//}