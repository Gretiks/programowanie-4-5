#include <iostream>
using namespace std;

class Punkt
{
    int x, y;

    public:
    Punkt();
    Punkt(int xx, int yy);
    ~Punkt();

};

class Kolo: public Punkt 
{
    int r;

    public:
    Kolo();
    Kolo(int xx, int yy, int rr);
    ~Kolo();
};

class Kwadrat
{
    int a;

    public:
    Kwadrat();
    Kwadrat(int aa);
    ~Kwadrat();
};

class Walec: public Kolo
{
    int h;

    public:
    Walec();
    Walec(int xx, int yy, int rr, int hh);
    ~Walec();
};

class Prostopadloscian: public Kwadrat
{
    int h;
    public:
    Prostopadloscian();
    Prostopadloscian(int aa, int hh);
    ~Prostopadloscian();
};