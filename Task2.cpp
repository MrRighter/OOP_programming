#include <iostream>
using namespace std;


int main() {
	setlocale(0, "");

	/*int logings[2] = { 12 };
	int passwords[2] = { 34 };

	cout << "Введите данные для нового пользователя." << endl;

	cout << "Введите логин: ";
	cin >> logings[1];

	cout << "Введите пароль: ";
	cin >> passwords[1];

	system("cls");

	bool isWrong = true;

	for (int i = 1; i <= 3; i++) {
		cout << "Введите логин: ";
		int login;
		cin >> login;

		cout << "Введите пароль: ";
		int password;
		cin >> password;

		system("cls");

		if (login == logings[0] && password == passwords[0]) {
			cout << "Вы успешно вошли в систему, Пользователь 1." << endl;
			isWrong = true;
		}
		else if (login == logings[1] && password == passwords[1]) {
			cout << "Вы успешно вошли в систему, Пользователь 2." << endl;
			isWrong = true;
		}
		else {
			cout << "Неверный логин или пароль. Попытка: " << i <<"/3" << endl;
			isWrong = false;
		}
	}

	if (!isWrong) {
		cout << endl << "Слишком много неверных попыток. Программа завершилась." << endl;
	}

	return 0;*/

	// ---------------------------------------

	/*cout << "Введите количество чисел: ";
	int count;
	cin >> count;

	int buffer = INT32_MIN;
	int enteredNum;

	cout << "Введите числа: " << endl;

	for (int i = 0; i < count; i++) {
		cin >> enteredNum;
		if (enteredNum < count) {
			buffer = enteredNum;
		}
	}
	cout << buffer << endl; */

	// ----------------------------------------


	int enteredNum;
	bool isWork = true;

	int buffer = INT32_MIN;

	cout << "Введите числа (для завершения введите 0): " << endl;

	while (isWork) {
		cin >> enteredNum;
		if (enteredNum == 0) {
			isWork = false;
			cout << endl << "Программа завершена." << endl;
			break;
		}
		else {
			if (enteredNum > buffer) {
				buffer = enteredNum;
			}
		}
	}
	cout << "Максимальное число: " << buffer << endl;
}
