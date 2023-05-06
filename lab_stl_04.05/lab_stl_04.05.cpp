#include <iostream>
#include <Windows.h>
#include <string>
#include <vector>
#include "team.h"
#include <stdlib.h>
#include <algorithm>

using namespace std;
bool comparepunkty(Team a, Team b) {
    if (a.punkty == b.punkty) {
        if (a.wygrane == b.wygrane) {
            if (a.przegrane == b.przegrane) {
                if (a.gole == b.gole) {
                    return (a.straty < b.straty);
                }
                else return (a.gole > b.gole);
            }
            else return (a.przegrane < b.przegrane);
        }
        else return (a.wygrane > b.wygrane);
    }
    else return(a.punkty > b.punkty);
                        
};
int main()
{
    vector<Team>Liga;
    Team Roma("Roma", 9, 8, 7, 6, 5);
    Team Sevilla("Sevilla", 9, 8, 7, 6, 4);
    Team Juventus("Juventus", 9, 8, 7, 5, 5);
    Team Feyenoord("Feyenoord", 9, 8, 6, 8, 8);
    Team Szachtar("Shachtar", 9, 7, 1, 9, 1);
    Team Freiburg("Freiburg", 8, 8, 2, 10, 0);
    Team PSV("PSV", 8, 3, 5, 4, 3);
    Team Monaco("Monaco", 2, 5, 7, 4, 3);
    Team Nantes("Nantes", 6, 5, 4, 5, 0);
    Team Rennes("Rennes", 4, 5, 3, 6, 2);
    Liga.push_back(Roma); 
    Liga.push_back(Sevilla);
    Liga.push_back(Juventus);
    Liga.push_back(Feyenoord);
    Liga.push_back(Szachtar);
    Liga.push_back(Freiburg);
    Liga.push_back(PSV);
    Liga.push_back(Monaco);
    Liga.push_back(Nantes);
    Liga.push_back(Rennes);

    cout << endl;
   
    sort(Liga.begin(), Liga.end(),comparepunkty);
    cout << "Nazwa     \t\033[1;32mWygrane\t\033[0mRemisy\t\033[1;31mPrzegrane \033[1;32mGole\t\033[1;31mStracone gole\033[0m\n";
    cout << "-------------------------------------------------------------\n";
    for (auto &Team : Liga)
        cout << Team<<"-------------------------------------------------------------\n";

    return 0;
}

