#include <iostream>
#include <string>
#include <string.h>
#include <fstream>

using namespace std;

int main()
{
    fstream plik;
    plik.open("hacking.html", ios::in);
    string linia;
    string cena = "constprice=";

    while(getline(plik, linia))
    {
        bool found = linia.find(cena) != string::npos;
        if (found)
        {
            cout << "Cena bez znizki: " << linia << endl;
        }
    }
    return 0;
}
