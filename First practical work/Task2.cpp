#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    // объявляем целочисленную переменную и инициализируем её значением
    int myVariable = 10;

    // объявляем указатель на целочисленную переменную
    int* ptr = &myVariable;

    // увеличение числа на значение
    const int groupNumber = 7;

    // выводим исходное значение переменной
    cout << "Исходное значение переменной: " << myVariable << endl;

    // увеличиваем значение переменной через указатель
    *ptr += groupNumber;

    // выводим результат
    cout << "Значение после увеличения на " << groupNumber << ": " << myVariable << endl;

    return 0;
}
