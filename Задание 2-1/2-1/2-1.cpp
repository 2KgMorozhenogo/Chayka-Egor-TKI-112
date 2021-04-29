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
		cout << "Введите а - " << a << '\n';
		cout << "Введите b - " << b << '\n';
	}
	else {
		swap(a, b);
		cout << "Введите а - " << a << '\n';
		cout << "Введите b - " << b << '\n';
	}
}