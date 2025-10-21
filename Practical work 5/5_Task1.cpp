// 1. Используя работу с векторами найти максимум из набора элементов.
// Количество и сами элементы вводятся с клавиатуры.
// Поиск максимума должен осуществляться ПОСЛЕ ввода ВСЕХ элементов


#include  <iostream>
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
    for (int i = 0; i < count; i++) {
        if (nums_vector[i] > max_num) {
            max_num = nums_vector[i];
        }
    }

    std::cout << "Максимальное число вектора: " << max_num << std::endl;

    return 0;
}
