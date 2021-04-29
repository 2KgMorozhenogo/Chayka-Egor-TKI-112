#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	int a, b, c, f;
	cout << "Введите а - ";
	cin >> a;
	cout << "Введите b - ";
	cin >> b;
	cout << "Выберите алгоритм ((1) - с 3 переменными; (2) - без) - ";
	cin >> f;
	if (f == 1) {
		f = a;
		a = b;
		b = f;
		cout << "Значение а после перестановки - " << a << '\n';
		cout << "Значение b после перестановки - " << b << '\n';
	}
	else {
		swap(a, b);
		cout << "Значение а после перестановки - " << a << '\n';
		cout << "Значение b после перестановки - " << b << '\n';
	}
}
