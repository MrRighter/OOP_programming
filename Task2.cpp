#include <iostream>
using namespace std;


int main() {
	setlocale(0, "");

	/*int logings[2] = { 12 };
	int passwords[2] = { 34 };

	cout << "������� ������ ��� ������ ������������." << endl;

	cout << "������� �����: ";
	cin >> logings[1];

	cout << "������� ������: ";
	cin >> passwords[1];

	system("cls");

	bool isWrong = true;

	for (int i = 1; i <= 3; i++) {
		cout << "������� �����: ";
		int login;
		cin >> login;

		cout << "������� ������: ";
		int password;
		cin >> password;

		system("cls");

		if (login == logings[0] && password == passwords[0]) {
			cout << "�� ������� ����� � �������, ������������ 1." << endl;
			isWrong = true;
		}
		else if (login == logings[1] && password == passwords[1]) {
			cout << "�� ������� ����� � �������, ������������ 2." << endl;
			isWrong = true;
		}
		else {
			cout << "�������� ����� ��� ������. �������: " << i <<"/3" << endl;
			isWrong = false;
		}
	}

	if (!isWrong) {
		cout << endl << "������� ����� �������� �������. ��������� �����������." << endl;
	}

	return 0;*/

	// ---------------------------------------

	/*cout << "������� ���������� �����: ";
	int count;
	cin >> count;

	int buffer = INT32_MIN;
	int enteredNum;

	cout << "������� �����: " << endl;

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

	cout << "������� ����� (��� ���������� ������� 0): " << endl;

	while (isWork) {
		cin >> enteredNum;
		if (enteredNum == 0) {
			isWork = false;
			cout << endl << "��������� ���������." << endl;
			break;
		}
		else {
			if (enteredNum > buffer) {
				buffer = enteredNum;
			}
		}
	}
	cout << "������������ �����: " << buffer << endl;
}
