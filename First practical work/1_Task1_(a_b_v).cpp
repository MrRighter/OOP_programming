#include <iostream>
#include <iomanip>  // для вывода таблицы
#include <string>  // для работы с текстом
using namespace std;

int main() {
    setlocale(LC_ALL, "");

    const int USERS_COUNT = 3;
    const int DAYS_IN_MONTH = 30;

    wstring surnames[USERS_COUNT];
    wstring names[USERS_COUNT];
    int years[USERS_COUNT];
    int months[USERS_COUNT];

    // ввод данных для каждого пользователя
    for (int i = 0; i < USERS_COUNT; ++i) {
        wcout << L"\nПользователь " << (i + 1) << ":\n";

        wcout << L"Введите фамилию: ";
        wcin >> surnames[i];

        wcout << L"Введите имя: ";
        wcin >> names[i];

        wcout << L"Введите полное кол-во лет: ";
        wcin >> years[i];

        wcout << L"Введите неполное кол-во лет в месяцах: ";
        wcin >> months[i];
    }

    // вывод таблицы
    wcout << L"\nРезультат:\n";
    wcout << left
        << setw(20) << L"Фамилия"
        << setw(20) << L"Имя"
        << setw(20) << L"Возраст (мес)"
        << setw(20) << L"Возраст (дней)"
        << endl;

    // вычисление и вывод данных для каждого пользователя
    for (int i = 0; i < USERS_COUNT; ++i) {
        int total_months = years[i] * 12 + months[i];  // общий возраст в месяцах
        int total_days = total_months * DAYS_IN_MONTH;  // общий возраст в днях

        wcout << left
            << setw(20) << surnames[i]
            << setw(20) << names[i]
            << setw(20) << total_months
            << setw(20) << total_days
            << endl;
    }

    return 0;
}
