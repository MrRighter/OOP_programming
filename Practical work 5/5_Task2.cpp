// 2. Ввести с клавиатуры количество строк и сами строки. Строки вводятся на РУССКОМ языке.
// В ПРОЦЕССЕ ВВОДА СТРОК расположить их по алфавиту. Вывести результат на экран.
// Вставку строк по алфавиту осуществлять, используя возможности работы с векторами.


#include <iostream>
#include <vector>

int main() {
    setlocale(0, "");

    int count;
    std::wcout << L"Введите количество строк:" << std::endl;
    std::wcin >> count;

    std::vector<std::wstring> alfabet_array;

    std::wcout << std::endl << L"Введите желаемые строки:" << std::endl;
    for (int i = 0; i < count; i++) {
        std::wstring new_string;
        std::wcin >> new_string;

        int insert_pos = 0;
        while (insert_pos < alfabet_array.size() and alfabet_array[insert_pos] < new_string) {
            insert_pos++;
        }

        alfabet_array.insert(alfabet_array.begin() + insert_pos, new_string);
    }

    std::wcout << std::endl << L"Отсортированный вектор:" << std::endl;
    for (int i = 0; i < count; i++) {
        std::wcout << alfabet_array[i] << std::endl;
    }

    return 0;
}
