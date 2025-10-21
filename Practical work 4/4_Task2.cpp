// 2. Перегрузить функцию из пункта 1, чтобы можно было находить максимум элементов массива.
// Ввод количества элементов (не более 20) и самого массива и вывод результата разместить в Main.
// (Параметрами должны быть и количество элементов, и сам массив, который передаётся по имени.)


#include <iostream>

std::string max_num(int num1, int num2) {
    if (num1 > num2) {
        return "первое число = " + std::to_string(num1);
    }
    else {
        return "второе число = " + std::to_string(num2);
    }
}

int max_num(const int arr[], int size) {
    int max_value = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max_value) {
            max_value = arr[i];
        }
    }

    return max_value;
}

int main() {
    // Работа с двумя числами. Первое задание
    int num1, num2;

    std::cout << "Введите 1 число: ";
    std::cin >> num1;
    std::cout << "Введите 2 число: ";
    std::cin >> num2;

    std::cout << "Максимум из двух чисел: " << max_num(num1, num2) << std::endl << std::endl;


    // Работа с массивом. Второе задание. Перегрузка
    int size;

    std::cout << "Введите размер массива" << std::endl;
    std::cin >> size;

    int arr[size];
    std::cout << "Введите " << size << " элементов массива: " << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    std::cout << "Максимум из массива: " << max_num(arr, size) << std::endl;
}
