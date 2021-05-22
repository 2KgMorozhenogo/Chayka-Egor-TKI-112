
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


/**
* \brief Найти сумму отрицательных элементов, значение которых равно 10.
* \param sum - Переменная для суммы отрицательных элементов массива кратных 10
*/ 
void summa(int* arr, int n);

/**
* \brief Заменить первые k элементов массива на те же элементы в обратном порядке
* \param k - Переменная для выбора кол-ва элементов для переворота массива
* \param j - Переменная для перемены мест элементов в массиве
*/
void zamena(int* arr, int n);

/**
* \brief Определить, есть ли пара соседних элементов с произведением, равным заданному числу.
* \param b - Переменная для поиска пар с произведением
*/
void proizvedenie(int* arr, int n);

 void summa(int *arr, int n)
{
     int sum;
     sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0 and arr[i] % 10 == 0)
        {
            sum = sum + arr[i];
        }
    }
    std::cout << endl << "Сумма отрицательных элементов массива кратных 10: " << sum << endl;

    

   
}

void zamena(int *arr, int n)
{
    int k, j;
    std::cout << "Введите количество первых элементов, которое заменятся на те же переменные, но в обратном порядке - ";
    std::cin >> k;
    k -= 1;
    for (int i = 0; i < k; i++) //переворот k элементов массива
    {
        j = arr[i];
        arr[i] = arr[k - i];
        arr[k - i] = j;

    }

    std::cout << "Перевернутый массив: "; //вывод перевернутого массива
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
}

void proizvedenie(int* arr, int n)
{
    int b;
    std::cout << endl << "Введите число, которое будет значением произведения пар - ";
    std::cin >> b;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] * arr[i + 1] == b)
        {
            std::cout << "Пара элементов, произведение которых равно " << b << " - " << arr[i] << " " << arr[i + 1];
        }
    }

}
/**
* \brief Точка входа в программу
* \return Код ошибки(0 - успех)
*/
int main(void)
{
    int n, a, i;
    setlocale(LC_ALL, "Russian");
    std::cout << "Введите количество элементов массива - ";
    std::cin >> n;
    std::cout << "Как хотите заполнить массив? Введите 1 для ручного заполнения, 2 для автоматического заполнения. Способ - ";
    std::cin >> a;

    int *arr = new int[n];
    srand(time(0));
    if (a == 1)
    {
        for (int i = 0; i < n; i++) //заполнение массива с клавиатуры
        {
            std::cin >> arr[i];
        }
    }
    else if (a == 2)
    {
        for (int i = 0; i < n; i++) //заполнение массива случайными числами
        {
            arr[i] = rand() % 2000 - 1000;
        }
    }
    std::cout << "Ваш массив:"; //вывод массива на экран

    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }

    summa(arr, n);

    zamena(arr, n);

    proizvedenie(arr, n);

}   
