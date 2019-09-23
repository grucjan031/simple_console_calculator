
#include "pch.h"
#include <iostream>
#include <Windows.h>
#include <math.h>
#include <locale.h>

using namespace std;

int a, b, wynik, menu;


int logarytm(int x , int y) {
	wynik = (log(y) / log(x));
	return wynik;
}

int suma(int x, int y) {
	wynik = x + y;
	return wynik;
}

int roznica(int x, int y) {
	wynik = x - y;
	return wynik;
}

int potega(int x, int y) {

	wynik = pow(x,y);
	return wynik;
}

int dzielenie(int x, int y) {
	wynik = x / y;
	return wynik;
}

int mnozenie(int x, int y) {
	wynik = x * y;
	return wynik;
}

int silnia(int x) {
	int tempx = 1;
	for (int i = 1; i <=x; i++) {
		tempx *= i;
	}
	wynik = tempx;
	return wynik;
}

void printmenu() {
	cout << "\t Kalkulator liczb całkowitych który jest niespełna rozumu" << endl;
	cout << "1 - Logarytm" << endl;
	cout << "2 - Suma" << endl;
	cout << "3 - Różnica" << endl;
	cout << "4 - Potęga" << endl;
	cout << "5 - Dzielenie" << endl;
	cout << "6 - Mnożenie" << endl;
	cout << "7 - Silnia" << endl;
}

int main()
{
	setlocale(LC_ALL, "");
	printmenu();

	cout << "Wybierz równanie: ";
	cin >> menu;
	cout << endl;

	switch (menu) {
	
		case 1: {
		
			cout << "Podaj podstawę logarytmu: ";
			cin >> a;
			cout << endl;
			cout << "Podaj liczbę logarytmowaną: ";
			cin >> b;
			cout << endl;

			logarytm(a, b);

			cout << "Wynik to: " << wynik << endl;


		
			break;
		}
		case 2: {
			cout << "Podaj a: ";
			cin >> a;
			cout << endl;
			cout << "Podaj b: ";
			cin >> b;
			cout << endl;

			suma(a, b);

			cout << "Wynik to: " << wynik << endl;

			break;
		}
		case 3: {
			cout << "Podaj a: ";
			cin >> a;
			cout << endl;
			cout << "Podaj b: ";
			cin >> b;
			cout << endl;

			roznica(a, b);

			cout << "Wynik to: " << wynik << endl;

			break;
		}
		case 4: {
			cout << "Podaj podstawę potęgi: ";
			cin >> a;
			cout << endl;
			cout << "Podaj wykładnik: ";
			cin >> b;
			cout << endl;

			potega(a, b);

			cout << "Wynik to: " << wynik << endl;

			break;
		}
		case 5: {
			cout << "Podaj a: ";
			cin >> a;
			cout << endl;
			cout << "Podaj b: ";
			cin >> b;
			cout << endl;

			dzielenie(a, b);

			cout << "Wynik to: " << wynik << endl;

			break;
		}
		case 6: {
			cout << "Podaj a: ";
			cin >> a;
			cout << endl;
			cout << "Podaj b: ";
			cin >> b;
			cout << endl;

			mnozenie(a, b);

			cout << "Wynik to: " << wynik << endl;

			break;
		}
		case 7: {
			cout << "Podaj liczbę: ";
			cin >> a;
			cout << endl;

			silnia(a);

			cout << "Wynik to: " << wynik << endl;

			break;
		}


			

	}
	system("PAUSE");
	return 0;

}

