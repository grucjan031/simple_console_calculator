
#include "pch.h"
#include <iostream>
#include <windows.h>

using namespace std;

int a, b, c;

int main()
{
    cout << "podaj 3 liczby: ";
	cout << endl;
	//wczytujemy 3 zmienne 
	cin >> a >> b >> c;
	
	//jesli a jest mniejsze lub równe b
	if (a<=b) {
		//jesli b jest mniejsze lub równe c
		if (b <= c) {
			
			cout << "najwieksza liczba to: " << c;
		}
		//jesli b jest mniejsze lub równe c
		else {
			cout << "najwieksza liczba to: " << b;
		}
	}
	//else czyli co alogrytm robi dalej jeśli nie spełnieni się warunek z if(a<=b) czyli jesli a nie jest mniejsze lub równe b 
	else {

		if (a <= c) {
			cout << "najwieksza liczba to: " << c;
		}

		else {
			cout << "najwieksza liczba to: " << a;
		}
	}

	system("PAUSE");
	
	return 0;
}

