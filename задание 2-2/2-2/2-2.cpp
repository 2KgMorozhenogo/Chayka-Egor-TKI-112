
#include <iostream>
#include <cmath>

using namespace std;

const int a = 2.5; // инициализация константы
double x, y;   // инициализация переменных

void input() //функция ввода
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите x = "; 
	cin >> x;
}

void solution() //функция поиска решений
{
	if (x > a) 
	{
		y = (x * (pow(sin(x), 2)));
		cout << "Значение y равно " << y << endl;
	}
	else
	{
		y = (x * (pow(cos(x), 2)));
		cout << "Значение y равно " << y << endl;
	}
}
int main()
{
	input();

	solution();

	return 0;
}
