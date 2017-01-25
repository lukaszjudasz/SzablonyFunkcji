#include "stdafx.h"
#include <iostream>
using namespace std;

template <class T>
T wez_min_max(T tab[], int ilosc, bool czy_rosnaco)
{
	T wynik, temp;
	T nowa;
	wynik = tab[0];
	if (czy_rosnaco)
	{
		do
		{
			for (int i = 0; i < ilosc - 1; i++)
			{
				if (tab[i] > tab[i + 1])
				{
					temp = tab[i];
					tab[i] = tab[i + 1];
					tab[i + 1] = temp;
					cout << tab[i];
				}
				else
				{
					cout << tab[i];
				}
			}
			ilosc--;
		}
		while (ilosc > 1);
		for (int i = 1; i < ilosc; i++)
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
	}
	return wynik;
}

template <class T>
void sort(int tab[])
{
	int temp;
	int ilosc = 5;
	do
	{
		for (int i = 0; i < ilosc - 1; i++)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
				cout << tab[i];
			}
			else
			{
				cout << tab[i];
			}
		}
		ilosc--;
	}
	while (ilosc > 1);
}

int main()
{
	int tab_int[] = {1, 7, 8, 0, -9};
	double tab_double[] = {2.4, 2.7, -7.3, 1.8, 9.9};
	int tab_int_size = sizeof(tab_int) / sizeof(tab_int[0]);
	int tab_double_size = sizeof(tab_double) / sizeof(tab_double[0]);

	double min_int = wez_min_max(tab_int, tab_int_size, true);
	//	double max_int = wez_min_max(tab_int, tab_int_size, true);
	//	double min_double = wez_min_max(tab_double, tab_double_size, false);
	//	double max_double = wez_min_max(tab_double, tab_double_size, true);
	//
	cout << "Minimalna wartosc z tablicy int[] wynosi: " << min_int << endl;
	//	cout << "Maksymalna wartosc z tablicy int[] wynosi: " << max_int << endl;
	//	cout << "Minimalna wartosc z tablicy double[] wynosi: " << min_double << endl;
	//	cout << "Maksymalna wartosc z tablicy double[] wynosi: " << max_double << endl;


	return 0;
}
