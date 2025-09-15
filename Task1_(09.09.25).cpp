#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;

int main1() {
    setlocale(0, "");

    /*SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int ages[3] = {};
    int months[3] = {};

    string names[3] = {};
    string secondNames[3] = {};


    for (int i = 0; i < 3; i++) {
        system("cls");

        cout << "Введите своё имя: " << endl;
        cin >> names[i];

        cout << "Введите свою фамилию: " << endl;
        cin >> secondNames[i];

        cout << endl;

        cout << "Введите ваш возраст (полных лет): " << endl;
        cin >> ages[i];

        cout << "Введите кол-во месяцев: " << endl;
        cin >> months[i];
    }
    cout << endl
        << left << setw(15) << "Имя:" << setw(15) << "Фамилия:" << setw(20) << "Возраст в месяцах:" << setw(20) << "Возраст в днях:" << endl;

    for (int i = 0; i < 3; i++) {
        cout << left << setw(15) << names[i] << setw(15) << secondNames[i] << setw(20) << (ages[i] * 12 + months[i]) << setw(20) << ((ages[i] * 365) + (months[i] * 30)) << endl;
    }
    */

    // ------------------------------

    /*int a = 30;

    int* p = &a;

    *p += 18;

    cout << a << endl;*/

    // ------------------------------

    int a = 10;
    double b = 1.2;
    char c = 'a';

    int* pa = &a;
    double* pb = &b;

    cout << "Addresses: " << endl;
    cout << pa << endl;
    cout << pb << endl;
    cout << (void*)&c << endl;

    cout << endl;

    cout << "Sizes: " << endl;
    cout << "Int: " << (char*)(pa + 1) - (char*)pa << "bytes" << endl;
    cout << "Double: " << (char*)(pb + 1) - (char*)pb << "bytes" << endl;
    cout << "Char: " << (char*)(&c + 1) - (char*)&c << "bytes" << endl;
    return 0;


}
