#include "klasa.h"

Punkt::Punkt()
{
    x = 0;
    y = 0;
    cout << "cstr domyslny Punkt ";
}

Punkt::Punkt(int xx, int yy)
{
    int x = xx;
    int y = yy;
    cout << "cstr parametryczny Punkt ";
}

Punkt::~Punkt()
{
    // cout << "dstr Punkt ";
}

Kolo::Kolo():Punkt()
{
    r = 1;

    cout << "cstr domyslny Kolo ";
}

Kolo::Kolo(int xx, int yy, int rr):Punkt(xx, yy)
{
    int r = rr;
    cout << "cstr parametryczny Kolo ";
}

Kolo::~Kolo()
{
    // cout << "dstr Kolo ";
}

Kwadrat::Kwadrat()
{
    a = 1;
    cout << "cstr domyslny kwadrat ";
}

Kwadrat::Kwadrat(int aa)
{
    a = aa;
    cout << "csrt parametryczny kwadrat ";
}

Kwadrat::~Kwadrat()
{
    //cout << "dstr kwadrat";
}

Walec::Walec(): Kolo()
{
    h = 1;
    cout << "cstr domyslny walec ";
}

Walec::Walec(int xx, int yy, int rr, int hh): Kolo(xx, yy ,rr)
{
    h = hh;
    cout << "cstr parametryczny walec ";
}

Walec::~Walec()
{
    //cout << "dstr walec";
}

Prostopadloscian::Prostopadloscian(): Kwadrat()
{
    h = 1;
    cout << "cstr domyslny Prostopadloscian ";
}

Prostopadloscian::Prostopadloscian(int aa, int hh): Kwadrat(aa)
{
    h = hh;
    cout << "cstr parametryczny Prostopadloscian ";
}

Prostopadloscian::~Prostopadloscian()
{
    //cout << "dstr parametryczny"
}