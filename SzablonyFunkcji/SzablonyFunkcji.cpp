// SzablonyFunkcji.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

template <class T>
T sortuj(T tab[], int ilosc, bool czy_rosnaco)
{
	T wynik;
	wynik = tab[0];
	for (int i = 1; i < ilosc; i++)
	{
		if (tab[i] > wynik)
		{
			wynik = tab[i];
		}
		return wynik;
	}
}


int main()
{
	int tab_int[] = {1, 2, 8, 4, 5};
	double tab_double[] = {2.4, 2.7, 7.3, 1.8, 9.9};
	int tab_int_size = sizeof(tab_int) / sizeof(tab_int[0]);
	int tab_double_size = sizeof(tab_double) / sizeof(tab_double[0]);
	//cout << tab_int_size << endl;
	//cout << tab_double_size << endl;
	double wynik = sortuj(tab_int, tab_int_size, true);
	cout << wynik;
	return 0;
}
