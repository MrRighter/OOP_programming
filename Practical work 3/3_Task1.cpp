// 1. С клавиатуры ввести количество чисел (не более 20) и сами числа.
// Числа записать в массив. ПОСЛЕ ЭТОГО выбрать наибольшее число в массиве.
// Вывести на экран найденное число и его номер в массиве.
// Исходный массив не должен изменяться


#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int arr[20];
    int n;

    cout << "Введите количество чисел:\n";
    cin >> n;

    cout << "Введите " << n << " чисел:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_value = arr[0];
    int max_index = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > max_value) {
            max_value = arr[i];
            max_index = i + 1;
        }
    }

    cout << "Наибольшее число: " << max_value << endl;
    cout << "Его позиция в массиве: " << max_index << endl;
    cout << "Исходный массив: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ", ";
    }

    return 0;
}
