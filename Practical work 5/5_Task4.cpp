// 4. Используя рекурсию, вычислить определитель матрицы размерности n. Размерность и матрица вводятся с клавиатуры.
// (Память под все используемые матрицы должна быть необходимого размера.)


#include <iostream>

int main() {
    int size;
    std::cout << "Введите размер квадратной матрицы:" << std::endl;
    std::cin >> size;

    int array[size][size];

    std::cout << std::endl << "Введите числа для массива " << size << "*" << size << std::endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int num;
            std::cin >> num;
            array[i][j] = num;
        }
    }

    return 0;
}
