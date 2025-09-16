#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

    // ��������� ���������� ������ �����
    int integerVar = 10;
    double doubleVar = 3.14;
    char charVar = 'A';

    // ������� ��������� �� ��� ����������
    int* intPtr = &integerVar;
    double* doublePtr = &doubleVar;
    char* charPtr = &charVar;

    // ���������� ���������� ���������� ��� ���������� ������� ����������
    // ��� ����� ������� ������ ��������� ���� �� ���� � ��������� ������� �������

    // ��� ������������� ����������
    int* intPtr2 = intPtr + 1;
    size_t intSize = reinterpret_cast<char*>(intPtr2) - reinterpret_cast<char*>(intPtr);

    // ��� �������������� ����������
    double* doublePtr2 = doublePtr + 1;
    size_t doubleSize = reinterpret_cast<char*>(doublePtr2) - reinterpret_cast<char*>(doublePtr);

    // ��� ���������� ����������
    char* charPtr2 = charPtr + 1;
    size_t charSize = charPtr2 - charPtr;

    // ������� ����������
    cout << "������������� ����������:" << endl;
    cout << "�����: " << intPtr << endl;
    cout << "������: " << intSize << " ����" << endl << endl;

    cout << "�������������� ����������:" << endl;
    cout << "�����: " << doublePtr << endl;
    cout << "������: " << doubleSize << " ����" << endl << endl;

    cout << "���������� ����������:" << endl;
    cout << "�����: " << reinterpret_cast<void*>(charPtr) << endl;
    cout << "������: " << charSize << " ����" << endl;

    return 0;
}