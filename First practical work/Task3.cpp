//#include <iostream>
//#include <windows.h>
//using namespace std;
//
//int main() {
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    setlocale(LC_ALL, "Russian");
//
//    int int_var = 17;
//    double double_var = 3.14;
//    char char_var = 'K';
//
//    int *int_ptr = &int_var;
//    double *double_ptr = &double_var;
//    char *char_ptr = &char_var;
//
//    // ��������� ������� ����� ���������� ����������
//    size_t int_size = reinterpret_cast<char*>(int_ptr + 1) - reinterpret_cast<char*>(int_ptr);
//    size_t double_size = reinterpret_cast<char*>(double_ptr + 1) - reinterpret_cast<char*>(double_ptr);
//    size_t char_size = (char_ptr + 1) - char_ptr; // ��� char �������������� �� �����
//
//    cout << "~ ������������� ����������" << endl;
//    cout << "��������: " << int_var << endl;
//    cout << "�����: " << int_ptr << endl;
//    cout << "������: " << int_size << " ����\n" << endl;
//
//    cout << "~ �������������� ����������" << endl;
//    cout << "��������: " << double_var << endl;
//    cout << "�����: " << double_ptr << endl;
//    cout << "������: " << double_size << " ����\n" << endl;
//
//    cout << "~ ���������� ����������" << endl;
//    cout << "��������: " << char_var << endl;
//    cout << "�����: " << reinterpret_cast<void*>(char_ptr) << endl;
//    cout << "������: " << char_size << " ����" << endl;
//
//    return 0;
//}