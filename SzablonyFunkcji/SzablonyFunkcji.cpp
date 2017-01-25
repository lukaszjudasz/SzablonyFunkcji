#include "stdafx.h"
#include <iostream>
using namespace std;

template <class T>
T wez_min_max(T tab[], int ilosc, bool czy_rosnaco)
{
	T wynik, temp, maks, min;
	T* nowa = new T[ilosc];

	if (czy_rosnaco)
	{
		for (int i = 0; i < ilosc - 1; i++)
		{
			maks = i;
			for (int j = i + 1; j < ilosc; j++)
			{
				if (tab[j] < tab[maks])
				{
					maks = j;
				}
			}
			temp = tab[maks];
			tab[maks] = tab[i];
			tab[i] = temp;
		}
		wynik = tab[ilosc - 1];
	}
	else
	{
		for (int i = 0; i < ilosc - 1; i++)
		{
			min = i;
			for (int j = i + 1; j < ilosc; j++)
			{
				if (tab[j] > tab[min])
				{
					min = j;
				}
			}
			temp = tab[min];
			tab[min] = tab[i];
			tab[i] = temp;
		}
		wynik = tab[0];
	}
	for (int i = 0; i < ilosc; ++i)
	{
		cout << tab[i] << endl;
	}
	return wynik;


	/*for (int i = 1; i < ilosc; i++)
	{
		if (tab[i] > wynik)
		{
			wynik = tab[i];
		}
	}
}
else
{
	for (int i = 1; i < ilosc; i++)
	{
		if (tab[i] < wynik)
		{
			wynik = tab[i];
		}
	}
}*/
}

int main()
{
	int tab_int[] = {1, 7, 84, 0, -9};
	double tab_double[] = {2.4, 2.7, -7.3, 1.8, 9.9};
	int tab_int_size = sizeof(tab_int) / sizeof(tab_int[0]);
	int tab_double_size = sizeof(tab_double) / sizeof(tab_double[0]);

	int min_int = wez_min_max(tab_int, tab_int_size, false);
	int max_int = wez_min_max(tab_int, tab_int_size, true);
	//	double min_double = wez_min_max(tab_double, tab_double_size, false);
	//	double max_double = wez_min_max(tab_double, tab_double_size, true);
	//
	cout << "Minimalna wartosc z tablicy int[] wynosi: " << min_int << endl;
	cout << "Maksymalna wartosc z tablicy int[] wynosi: " << max_int << endl;
	//	cout << "Minimalna wartosc z tablicy double[] wynosi: " << min_double << endl;
	//	cout << "Maksymalna wartosc z tablicy double[] wynosi: " << max_double << endl;


	return 0;
}
