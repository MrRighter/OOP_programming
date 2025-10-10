#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "");

    int int_var = 17;
    double double_var = 3.14;
    char char_var = 'K';

    int *int_ptr = &int_var;
    double *double_ptr = &double_var;
    char *char_ptr = &char_var;

    // вычисляем размеры через арифметику указателей
    size_t int_size = reinterpret_cast<char*>(int_ptr + 1) - reinterpret_cast<char*>(int_ptr);
    size_t double_size = reinterpret_cast<char*>(double_ptr + 1) - reinterpret_cast<char*>(double_ptr);
    size_t char_size = (char_ptr + 1) - char_ptr;  // для char преобразование не нужно

    cout << "~ Целочисленная переменная" << endl;
    cout << "Значение: " << int_var << endl;
    cout << "Адрес: " << int_ptr << endl;
    cout << "Размер: " << int_size << " байт\n" << endl;

    cout << "~ Действительная переменная" << endl;
    cout << "Значение: " << double_var << endl;
    cout << "Адрес: " << double_ptr << endl;
    cout << "Размер: " << double_size << " байт\n" << endl;

    cout << "~ Символьная переменная" << endl;
    cout << "Значение: " << char_var << endl;
    cout << "Адрес: " << reinterpret_cast<void*>(char_ptr) << endl;
    cout << "Размер: " << char_size << " байт" << endl;

    return 0;
}
