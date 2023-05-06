#include "team.h"

Team::Team(string nazwa_, int wygrane_, int remisy_, int przegrane_, int gole_, int straty_) : wygrane(wygrane_), remisy(remisy_), przegrane(przegrane_), gole(gole_), straty(straty_) {
	int sizes = size(nazwa_);
	if (sizes < 15) {
		nazwa_.resize(15,' ');	
	};
	nazwa = nazwa_;
	punkty = wygrane_ * 3 + remisy_;
};
