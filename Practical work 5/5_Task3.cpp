// 3. Используя только работу с указателями, найти максимум из набора элементов.
// Количество и сами элементы вводятся с клавиатуры. Поиск максимума должен осуществляться ПОСЛЕ ввода ВСЕХ элементов.
// По окончании использования выделенной памяти её необходимо освободить.
// (Комментарий: квадратные скобки могут использоваться ТОЛЬКО при выделении и освобождении памяти.)


#include <iostream>

int main() {
    int count;
    std::cout << "Введите количество чисел:" << std::endl;
    std::cin >> count;

    int* arr = new int[count];
    int* current = arr;

    std::cout << "Введите " << count << " элементов:" << std::endl;
    for (int i = 0; i < count; i++) {
        std::cin >> *current;
        current++;
    }

    int* max_ptr = arr; // указатель на текущий максимум
    current = arr + 1; // начинаем со второго элемента

    for (int i = 1; i < count; i++) {
        if (*current > *max_ptr) {
            max_ptr = current;
        }
        current++;
    }

    std::cout << "Максимальное число вектора: " << *max_ptr << std::endl;

    delete[] arr;

    return 0;
}
