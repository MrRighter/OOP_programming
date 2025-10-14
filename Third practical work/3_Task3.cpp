#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "");

    wchar_t input_string[256]; // буфер для ввода строки

    wcout << L"Введите строку: ";
    wcin.getline(input_string, 256);

    wchar_t target_letter_u = L'Ш';
    wchar_t target_letter_l = L'ш';

    int count = 0;
    for (int i = 0; input_string[i] != L'\0'; i++) {
        if (input_string[i] == target_letter_u or input_string[i] == target_letter_l) {
            count++;
        }
    }

    wcout << L"Количество вхождений: " << count << endl;
    
    return 0;
}
