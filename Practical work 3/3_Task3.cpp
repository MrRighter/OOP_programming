// 3. В строке, которая вводится с клавиатуры, найти количество вхождений буквы, с которой начинается Ваша фамилия.
// Данная буква должна быть указана в коде программы


#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "");

    wstring input_string;

    wcout << L"Введите строку: ";
    wcin >> input_string;

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
