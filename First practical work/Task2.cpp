#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    // объ€вл€ем целочисленную переменную и инициализируем еЄ значением
    int myVariable = 10;

    // объ€вл€ем указатель на целочисленную переменную
    int* ptr = &myVariable;

    // номер в списке группы
    const int groupNumber = 7;

    // выводим исходное значение переменной
    cout << "»сходное значение переменной: " << myVariable << endl;

    // увеличиваем значение переменной через указатель
    *ptr += groupNumber;

    // выводим результат
    cout << "«начение после увеличени€ на " << groupNumber << ": " << myVariable << endl;

    return 0;
}