

#include <iostream>
#include "trojkat.h"
#include "trojkaty.h"
#include <fstream>
using namespace std;

int main()
{
    trojkat domyslny;     //inicjacja klasy
    ifstream plik;        //wejscie do pliku
    string otwplik;       //pomocnicza do uzyskania sciezki
    cout << "Wpisz sciezke do pliku" << endl;
    cin >> otwplik;   //sciezka do pliku
    plik.open(otwplik); //wczytywanie z pliku
    if (plik.good() == true)
    {
        while (!plik.eof())
        {
            plik >> domyslny;
            cout <<"Trojkat "<< domyslny.nazwa <<" "<<  domyslny.a+domyslny.b+domyslny.c  << endl;
        }
    }
    else {
        cout << "zla sciezka";
    }
}

