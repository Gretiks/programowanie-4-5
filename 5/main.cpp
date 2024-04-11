#include "klasa.h"


int main()
{
	cout << "Walec domyslny: ";
	Walec w1 = Walec();
	cout << "\nWalec parametryczny: ";
	Walec w2 = Walec(1, 2, 3, 4);

	cout << "\nProstopadloscian domyslny: ";
	Prostopadloscian p1 = Prostopadloscian();
	cout << "\nProstopadloscian parametryczny: ";
	Prostopadloscian p2 = Prostopadloscian(5, 10);
}