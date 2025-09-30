//#include <iostream>
//#include <iomanip>  // для вывода таблицы
//#include <string>  // для работы с текстом
//#include <windows.h>
//using namespace std;
//
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    setlocale(LC_ALL, "Russian");
//
//    const int USERS_COUNT = 3;
//    const int DAYS_IN_MONTH = 30;
//
//    string surnames[USERS_COUNT];
//    string names[USERS_COUNT];
//    int years[USERS_COUNT];
//    int months[USERS_COUNT];
//
//    // ввод данных для каждого пользователя
//    for (int i = 0; i < USERS_COUNT; ++i) {
//        cout << "\nПользователь " << (i + 1) << ":\n";
//
//        cout << "Введите фамилию: ";
//        cin >> surnames[i];
//
//        cout << "Введите имя: ";
//        cin >> names[i];
//
//        cout << "Введите полное кол-во лет: ";
//        cin >> years[i];
//
//        cout << "Введите неполное кол-во лет в месяцах: ";
//        cin >> months[i];
//    }
//
//    // вывод таблицы
//    cout << "\nРезультат:\n";
//    cout << left
//        << setw(20) << "Фамилия"
//        << setw(20) << "Имя"
//        << setw(20) << "Возраст (мес)"
//        << setw(20) << "Возраст (дней)"
//        << endl;
//
//    // вычисление и вывод данных для каждого пользователя
//    for (int i = 0; i < USERS_COUNT; ++i) {
//        int total_months = years[i] * 12 + months[i];  // общий возраст в месяцах
//        int total_days = total_months * DAYS_IN_MONTH;  // общий возраст в днях
//
//        cout << left
//            << setw(20) << surnames[i]
//            << setw(20) << names[i]
//            << setw(20) << total_months
//            << setw(20) << total_days
//            << endl;
//    }
//
//    return 0;
//}
