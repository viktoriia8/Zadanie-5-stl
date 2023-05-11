#include <iostream>
#include <string>
using namespace std;

class Team {
	string nazwa;
	int punkty;
	int wygrane;
	int remisy;
	int przegrane;
	int gole;
	int straty;
public:
	int getWygrane() { return wygrane; };
	int getRemisy() { return remisy; };
	int getPrzegrane() { return przegrane; };
	int getGole() { return gole; };
	int getStraty() { return straty; };
	int getPunkty() { return punkty; };
	friend ostream& operator<<(ostream& os, const Team t1) {
		os << t1.nazwa << "\t" << "\033[1;32m" << t1.wygrane << "\t" << "\033[0m" << t1.remisy << "\t" << "\033[1;31m" << t1.przegrane << "\t" << "\033[1;32m  " << t1.gole << "\t" << "\033[1;31m" << t1.straty << "\033[0m" << "\n";
		return os;
	};

	Team(string nazwa_,int wygrane_,int remisy_,int przegrane_,int gole_,int straty_);
};