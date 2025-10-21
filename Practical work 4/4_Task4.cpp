// 4. Написать функцию, осуществляющую ввод количества элементов (не более 20) и самого массива.
// Вернуть в Main сам массив и количество его элементов. В Main вывести массив на экран.
// (Возвращаться должны и количество элементов, и сам массив.)


#include <iostream>

void input_array(int arr[], int& size) {
    std::cout << "Введите количество элементов: ";
    std::cin >> size;

    std::cout << "Введите " << size << " элементов массива:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << "Элемент " << i + 1 << ": ";
        std::cin >> arr[i];
    }
}

int main() {
    int array[20];
    int count = 0;

    input_array(array, count);

    std::cout << "Введенный массив: ";
    for (int i = 0; i < count; i++) {
        std::cout << array[i] << ", ";
    }

    return 0;
}
