#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double m, S, P;
	const double g = 9.80665;
	cout << "Введите масу объекта - ";
	cin >> m;
	cout << '\n';
	cout << "Введите площадь - ";
	cin >> S;
	cout << '\n';
	P = (m * g) / S;
	cout << "Давление = " << P;
}