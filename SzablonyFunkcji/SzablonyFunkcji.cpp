// SzablonyFunkcji.cpp : Defines the entry point for the console application. TEST
//

#include "stdafx.h"
#include <iostream>
using namespace std;

template <class T>
T pobierz_max(T a, T b)
{
	T wynik;
	wynik = (a > b) ? a : b;
	return wynik;
}


int main()
{
	int max_int;
	double max_double;

	max_int = pobierz_max(-7, -7);
	max_double = pobierz_max(52.10, -5414.36);

	cout << "int_max " << max_int<<endl;
	cout << "int_double " << max_double << endl;

	return 0;
}
