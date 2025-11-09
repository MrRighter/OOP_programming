// 4. Используя рекурсию, вычислить определитель матрицы размерности n. Размерность и матрица вводятся с клавиатуры.
// (Память под все используемые матрицы должна быть необходимого размера.)


#include <iostream>
#include <vector>

int determinant(std::vector<std::vector<int>>& matrix, int size) {
    if (size == 1) {
        return matrix[0][0];
    }
    if (size == 2) {
        return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    }

    int det = 0;
    int sign = 1;

    for (int i = 0; i < size; i++) {
        std::vector<std::vector<int>> minor(size - 1, std::vector<int>(size - 1));

        for (int m_row = 0; m_row < size - 1; m_row++) {
            for (int m_col = 0; m_col < size - 1; m_col++) {
                minor[m_row][m_col] = matrix[m_row + 1][(m_col < i) ? m_col : m_col + 1];
            }
        }

        int minor_det = determinant(minor, size - 1);
        det += sign * matrix[0][i] * minor_det;
        sign = -sign;
    }

    return det;
}

int main() {
    int size;
    std::cout << "Введите размер квадратной матрицы:" << std::endl;
    std::cin >> size;

    std::vector<std::vector<int>> matrix(size, std::vector<int>(size));

    std::cout << std::endl << "Введите числа для матрицы размерностью " << size << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << "Строка " << i + 1 << ": ";
        for (int j = 0; j < size; j++) {
            int num;
            std::cin >> num;
            matrix[i][j] = num;
        }
    }

    std::cout << std::endl << "Определитель равен: " << determinant(matrix, size) << std::endl;

    return 0;
}
