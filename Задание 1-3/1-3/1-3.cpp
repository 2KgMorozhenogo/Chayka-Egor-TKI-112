#include <iostream>
using namespace std;


/**
* \brief Вычисление давления
* \param m - масса
* \param s - площадь
* \param g - ускорение свободного падения
*/
void davlenie(double s, double m, double const g);


void davlenie(double s, double m, double const g)
{
	cout << "Давление равно - " << (m * g) / s << endl;
}

/**
* \brief точка входа в программу
* \param m - масса
* \param s - площадь
* \param g - ускорение свободного падения
* \return Код ошибки(0 - успех)
*/
int main()
{
	setlocale(LC_ALL, "Russian");
	double s, m;
	double const g = 9.8;
	cout << "Введите S - ";
	сin >> s;
	cout << "Введите m - ";
	cin >> m;;

	davlenie(s, m, g);
}



