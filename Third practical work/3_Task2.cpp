// 2. С клавиатуры ввести количество срок и столбцов (не более 20) двумерного массива (матрицы) и сам массив чисел.
// Найти минимакс матрицы (минимаксным значением называется максимум среди построчных минимумов).
// Исходный массив не должен изменяться


#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int matrix[20][20];
    int rows, cols;

    cout << "Введите количество строк и столбцов:" << endl;
    cin >> rows >> cols;

    cout << "Введите элементы матрицы " << rows << "x" << cols << " :" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    int minmax_value;
    bool first_minimum = true;

    for (int i = 0; i < rows; i++) {
        // находим минимум в текущей строке
        int row_min = matrix[i][0];
        for (int j = 1; j < cols; j++) {
            if (matrix[i][j] < row_min) {
                row_min = matrix[i][j];
            }
        }

        // обновляем минимакс
        if (first_minimum) {
            // для первой строки просто запоминаем ее минимум
            minmax_value = row_min;
            first_minimum = false;
        } else {
            // для последующих строк сравниваем с текущим минимаксом
            if (row_min > minmax_value) {
                minmax_value = row_min;
            }
        }
    }

    cout << "Минимакс матрицы (максимум среди минимумов строк): " << minmax_value << endl;

    cout << endl << "Исходная матрица:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
