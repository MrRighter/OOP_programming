#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    int x = 2008;
    int *ptr = &x;
    int y = 17;
    cout << "�������� �������� ����������: " << x << endl;
    *ptr += y;
    cout << "�������� ����� ���������� �� " << y << ": " << x << endl;

    return 0;
}
