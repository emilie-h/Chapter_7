#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;


class Mailbox{
public:
	~Mailbox(){};
	void addMsg(string& text);
	string findMsg(size_t i);
	void deleteMsg(size_t i);
	size_t allMsg();
private:
	string txt;
	vector<string> inbox;
	size_t totalMsg = 0;
};

void Mailbox::addMsg(string& msg){
	auto it = find(inbox.begin(), inbox.end(), msg);
	if (it == inbox.end())
		inbox.push_back(msg);

}
string Mailbox::findMsg(size_t i){
	return inbox.at(i);
}
size_t Mailbox::allMsg(){
	return totalMsg = inbox.size();
}
void Mailbox::deleteMsg(size_t i){
	if(!inbox.empty() or i > inbox.size())
		inbox.erase(inbox.begin() + i);
}

int main(){
	Mailbox m;
	string s = "hello";
	string hey = "hey";
	m.addMsg(s);
	m.addMsg(hey);
	cout << m.allMsg() << endl;

	string foundMsg = m.findMsg(1);
	cout << foundMsg << endl;
	//cout << m.findMsg(4) << endl; out of range error
	m.deleteMsg(0);
	cout << m.allMsg() << endl;

}
