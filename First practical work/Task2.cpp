#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    // ��������� ������������� ���������� � �������������� � ���������
    int myVariable = 10;

    // ��������� ��������� �� ������������� ����������
    int* ptr = &myVariable;

    // ���������� ����� �� ��������
    const int groupNumber = 7;

    // ������� �������� �������� ����������
    cout << "�������� �������� ����������: " << myVariable << endl;

    // ����������� �������� ���������� ����� ���������
    *ptr += groupNumber;

    // ������� ���������
    cout << "�������� ����� ���������� �� " << groupNumber << ": " << myVariable << endl;

    return 0;
}
