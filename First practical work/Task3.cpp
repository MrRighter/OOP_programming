#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    // Объявляем переменные разных типов
    int integerVar = 10;
    double doubleVar = 3.14;
    char charVar = 'A';

    // Создаем указатели на эти переменные
    int* intPtr = &integerVar;
    double* doublePtr = &doubleVar;
    char* charPtr = &charVar;

    // Используем арифметику указателей для вычисления размера переменных
    // Для этого создаем второй указатель того же типа и вычисляем разницу адресов

    // Для целочисленной переменной
    int* intPtr2 = intPtr + 1;
    size_t intSize = reinterpret_cast<char*>(intPtr2) - reinterpret_cast<char*>(intPtr);

    // Для действительной переменной
    double* doublePtr2 = doublePtr + 1;
    size_t doubleSize = reinterpret_cast<char*>(doublePtr2) - reinterpret_cast<char*>(doublePtr);

    // Для символьной переменной
    char* charPtr2 = charPtr + 1;
    size_t charSize = charPtr2 - charPtr;

    // Выводим результаты
    cout << "Целочисленная переменная:" << endl;
    cout << "Адрес: " << intPtr << endl;
    cout << "Размер: " << intSize << " байт" << endl << endl;

    cout << "Действительная переменная:" << endl;
    cout << "Адрес: " << doublePtr << endl;
    cout << "Размер: " << doubleSize << " байт" << endl << endl;

    cout << "Символьная переменная:" << endl;
    cout << "Адрес: " << reinterpret_cast<void*>(charPtr) << endl;
    cout << "Размер: " << charSize << " байт" << endl;

    return 0;
}