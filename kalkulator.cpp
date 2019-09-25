#include <iostream>
#include <Windows.h>
#include <math.h>
#include <locale.h>

using namespace std;

#define PI 3.14159265

double a, b, wynik;
bool repeat = true;
int menu;


double oblicz(double x, double y) {
	switch (menu) {

	case 1: {

		wynik = (log(y) / log(x));
		break;
	}
	case 2: {
		wynik = x + y;

		break;
	}
	case 3: {
		wynik = x - y;

		break;
	}
	case 4: {
		wynik = pow(x, y);

		break;
	}
	case 5: {
		wynik = x / y;

		break;
	}
	case 6: {
		wynik = x * y;

		break;
	}
	case 7: {
		double tempx = 1;
		for (int i = 1; i <= x; i++) {
			tempx *= i;
		}
		wynik = tempx;

		break;
	}
	case 8: {
		wynik = pow(x, 1 / y);

		break;
	}
	case 9: {
		wynik = abs(x);

		break;
	}
	case 10: {
		wynik = tan(x * PI / 180.0);

		break;
	}
	case 11: {
		wynik = cos(x * PI / 180.0);

		break;
	}
	case 12: {
		wynik = sin(x * PI / 180.0);

		break;
	}
	}


	return wynik;
}


void printmenu() {
	repeat = false;
	cout << "\t Kalkulator który jest niespełna rozumu" << endl;
	cout << "1 - Logarytm" << endl;
	cout << "2 - Suma" << endl;
	cout << "3 - Różnica" << endl;
	cout << "4 - Potęga" << endl;
	cout << "5 - Dzielenie" << endl;
	cout << "6 - Mnożenie" << endl;
	cout << "7 - Silnia" << endl;
	cout << "8 - Pierwiastkowanie" << endl;
	cout << "9 - Wartość bezwzględna" << endl;
	cout << "10 - Tanges" << endl;
	cout << "11 - Cosinus" << endl;
	cout << "12 - Sinus" << endl;

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

		oblicz(a, b);

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

		oblicz(a, b);

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

		oblicz(a, b);

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

		oblicz(a, b);

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

		oblicz(a, b);

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

		oblicz(a, b);

		cout << "Wynik to: " << wynik << endl;

		break;
	}
	case 7: {
		cout << "Podaj liczbę: ";
		cin >> a;
		cout << endl;

		oblicz(a,0);

		cout << "Wynik to: " << wynik << endl;

		break;
	}
	case 8: {
		cout << "Podaj liczbę z której chcesz obliczyć pierwiastek: ";
		cin >> a;
		cout << endl;
		cout << "Którego stopnia jest to pierwiastek: ";
		cin >> b;
		cout << endl;

		oblicz(a, b);

		cout << "Wynik to: " << wynik << endl;

		break;
	}
	case 9: {
		cout << "Podaj liczbę z której chcesz obliczyć wartośc bezwzględną: ";
		cin >> a;
		cout << endl;
	

		oblicz(a,0);

		cout << "Wynik to: " << wynik << endl;

		break;
	}
	case 10: {
		cout << "Podaj liczbę: ";
		cin >> a;
		cout << endl;

		oblicz(a,0);

		cout << "Wynik to: " << wynik << endl;

		break;
	}
	case 11: {
		cout << "Podaj liczbę: ";
		cin >> a;
		cout << endl;

		oblicz(a,0);

		cout << "Wynik to: " << wynik << endl;

		break;
	}
	case 12: {
		cout << "Podaj liczbę: ";
		cin >> a;
		cout << endl;

		oblicz(a,0);

		cout << "Wynik to: " << wynik << endl;

		break;
	}





	}
	system("PAUSE");
	repeat = true;
	system("cls");

}

int main()
{
	setlocale(LC_ALL, "");
	while (repeat = true) {
		printmenu();

	}
	

	

	system("PAUSE");
	return 0;

}

/*
double logarytm(double x , double y) {
	wynik = (log(y) / log(x));
	return wynik;
}
double suma(double x, double y) {
	wynik = x + y;
	return wynik;
}
double roznica(double x, double y) {
	wynik = x - y;
	return wynik;
}
double potega(double x, double y) {
	wynik = pow(x,y);
	return wynik;
}
double dzielenie(double x, double y) {
	wynik = x / y;
	return wynik;
}
double mnozenie(double x, double y) {
	wynik = x * y;
	return wynik;
}
double silnia(double x) {
	double tempx = 1;
	for (int i = 1; i <=x; i++) {
		tempx *= i;
	}
	wynik = tempx;
	return wynik;
}
double pierwiastkowanie(double x, double y) {
	wynik = pow(x, 1/y);
	return wynik;
}
double wartoscbezwzgledna(double x) {
	if (x >= 0) {
		wynik = x;
	}
	else {
		wynik = x -(2 * x);
	}
	return wynik;
}*/
