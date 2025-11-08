// 3. Используя только работу с указателями, найти максимум из набора элементов.
// Количество и сами элементы вводятся с клавиатуры. Поиск максимума должен осуществляться ПОСЛЕ ввода ВСЕХ элементов.
// По окончании использования выделенной памяти её необходимо освободить.
// (Комментарий: квадратные скобки могут использоваться ТОЛЬКО при выделении и освобождении памяти.)


#include <iostream>
#include <vector>

int main() {
    int count;
    std::cout << "Введите количество чисел:" << std::endl;
    std::cin >> count;

    std::vector<int> nums_vector;

    std::cout << "Введите " << count << " элементов:" << std::endl;
    for (int i = 0; i < count; i++) {
        int num;
        std::cin >> num;
        nums_vector.push_back(num);
    }

    int max_num = nums_vector[0];
    int* pmn = &max_num;
    for (int i = 0; i < count; i++) {
        int a = nums_vector[i];
        int* pa = &a;
        if (*pa > *pmn) {
            *pmn = *pa;
        }
    }

    std::cout << "Максимальное число вектора: " << max_num << std::endl;

    return 0;
}
