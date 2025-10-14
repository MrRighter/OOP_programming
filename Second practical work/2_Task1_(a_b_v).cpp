// 1а. Осуществить ввод пароля с клавиатуры. Проверить, верно ли введён пароль. Верный пароль задаётся числом в коде.
// 1б. Осуществить ввод логина и пароля с клавиатуры для ОДНОГО пользователя (логин и пароль должны вводиться в различные переменные).
// Проверить соответствие пары "логин-пароль", если всего в системе зарегистрировано два пользователя
// (у каждого свой логин и пароль, они заданы соответствующими числами в коде).
// 1в. Дополнительно к варианту 1б предусмотреть возможность 3 попыток ввода пары "логин-пароль".


#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(0, "");

    string user1_password = "12345";
    string user1_login = "peter";
    string user2_password = "67890";
    string user2_login = "kirill";
    int count = 3;

    while (count > 0) {
        string input_login, input_password;

        cout << "Осталось попыток: " << count << endl;
        cout << "Введите логин: ";
        cin >> input_login;
        cout << "Введите пароль: ";
        cin >> input_password;

        if ((input_login == user1_login and input_password == user1_password) or
            (input_login == user2_login and input_password == user2_password)) {
            cout << "Успешный вход!" << endl;
            break;  // выходим из цикла при успехе
        }
        else {
            cout << "Ошибка! Неверный логин или пароль.\n" << endl;
            count--;  // уменьшаем количество попыток
        }
    }

    if (count == 0) {
        cout << "Попытки закончились!" << endl;
    }

    return 0;
}
