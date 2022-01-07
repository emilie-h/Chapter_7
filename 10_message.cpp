#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <ctime>
#include <chrono>
#include <thread>
using namespace std;

class Message{
public:
	Message(string sender, string receiver);
	~Message(){};
	string addMsg(string text);
	string toString();
	void displayMsg(){cout << fullMsg;};
	static const string date;
	static char createDate[100];
private:
	string senderName;
	string receiverName;
	string fullMsg;
	string txt;
	const int SETW = 8;
};

char Message::createDate[100];
Message::Message(string sender, string receiver){
	senderName = sender;
	receiverName = receiver;
	time_t currentTime;
	time(&currentTime);
	struct tm *tmp;
	tmp = localtime(&currentTime);
	strftime(createDate, 50, "%d/%m/%Y %H:%M:%S", tmp);
}
const string Message::date = Message::createDate;

string Message::addMsg(string text){
	txt.append(text + '\n');
	return txt;
}
string Message::toString(){
	stringstream ss;
	ss << "To" << right << setw(SETW) << ": " << senderName << '\n'
	<< "From" << right << setw(SETW)  << ": " << receiverName << '\n'
	<< "Date" << right << setw(SETW)  << ": " << createDate << '\n' << endl;
	ss << txt;
	return fullMsg = ss.str();
}

int main(){
	string sender = "Pierre Burki";
	string receiver = "Alfred Strohmeier";
	Message m(sender, receiver);
	m.addMsg("Cher ami,");
	m.addMsg("RDV demain a 9h.");
	m.addMsg("Meilleures salutations.\nPierre");
	m.toString();
	m.displayMsg();
	cout << endl;
	using namespace std::this_thread;     // sleep_for, sleep_until
	using namespace std::chrono_literals; // ns, us, ms, s, h, etc.
	using std::chrono::system_clock;
	sleep_until(system_clock::now() + 1s);

	Message m2(receiver, sender);
	m2.addMsg("Noted, thanks");
	m2.toString();
	m2.displayMsg();
}
//add sleep : https://stackoverflow.com/questions/158585/how-do-you-add-a-timed-delay-to-a-c-program