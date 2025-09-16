#include <iostream>
#include <iomanip>  // для вывода таблицы
#include <string>
#include <windows.h>
using namespace std;

int main() {
    // установка русского языка
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    const int USERS_COUNT = 3; // кол-во людей
    const int DAYS_IN_MONTH = 30; // дней в месяце по условию

    // массивы для хранения данных пользователей
    string surnames[USERS_COUNT]; // массив строк для хранения фамилий
    string names[USERS_COUNT]; // массив строк для хранения имен
    int years[USERS_COUNT]; // массив целых чисел для хранения лет
    int months[USERS_COUNT]; // массив целых чисел для хранения месяцев

    // ввод данных для каждого пользователя
    for (int i = 0; i < USERS_COUNT; ++i) {
        cout << "\nПользователь " << (i + 1) << ":\n";

        cout << "Введите фамилию: ";
        cin >> surnames[i];

        cout << "Введите имя: ";
        cin >> names[i];

        cout << "Введите полное кол-во лет: ";
        cin >> years[i];

        cout << "Введите неполное кол-во лет в месяцах: ";
        cin >> months[i];
    }

    // вывод таблицы
    cout << "\nРезультат:\n";
    cout << left << setw(15) << "Фамилия"
        << setw(15) << "Имя"
        << setw(15) << "Возраст (мес)"
        << setw(15) << "Возраст (дней)"
        << endl;

    // вычисление и вывод результатов для каждого пользователя
    for (int i = 0; i < USERS_COUNT; ++i) {
        int total_months = years[i] * 12 + months[i]; // общий возраст в месяцах
        int total_days = total_months * DAYS_IN_MONTH; // общий возраст в днях

        cout << left << setw(15) << surnames[i]
            << setw(15) << names[i]
            << setw(15) << total_months
            << setw(15) << total_days
            << endl;
    }

    return 0;
}
