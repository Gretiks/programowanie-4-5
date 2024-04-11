#include "klasa.h"


choinka::choinka(int xx)
{
    x = xx;
}

void choinka::rysuj()
{
    int max_gwiazdek = 1;
    int dlug = x;
    int odleglosc = 0;
    int curr_gwiazdek = 1;

    for(int i = 1; i < dlug; i++)
        max_gwiazdek+=2;

    max_gwiazdek-=2;



    for(int i = 1; i < dlug+2; i++)
        max_gwiazdek+=2;

    max_gwiazdek-=6;

    for(int i = 0; i < dlug+2; i++)
        max_gwiazdek+=2;

    max_gwiazdek-=2;
    
    odleglosc = max_gwiazdek/2;

    for(int i = 0; i < dlug; i++)
    {
        for(int j = 0; j < odleglosc; j++)
            cout << " ";
        for(int j = 0; j < curr_gwiazdek; j++)
            cout << "*";

            odleglosc--;
            curr_gwiazdek += 2;
            cout << '\n';
    }

    odleglosc += 2;
    curr_gwiazdek -= 4;

    for(int i = 0; i < dlug+2; i++)
    {
        for(int j = 0; j < odleglosc; j++)
            cout << " ";
        for(int j = 0; j < curr_gwiazdek; j++)
            cout << "*";

            odleglosc--;
            curr_gwiazdek += 2;
            cout << '\n';
    }

    odleglosc += 4;
    curr_gwiazdek -= 8;

    for(int i = 0; i < dlug+2; i++)
    {
        for(int j = 0; j < odleglosc; j++)
            cout << " ";
        for(int j = 0; j < curr_gwiazdek; j++)
            cout << "*";

            odleglosc--;
            curr_gwiazdek += 2;
            cout << '\n';
    }

    for(int i = 0; i < dlug; i++)
    {
        for(int j = 0; j < max_gwiazdek/2; j++)
            cout << " ";
        cout << "*\n";
    }

}

choinka::~choinka()
{

}