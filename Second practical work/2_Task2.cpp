//#include <iostream>
//using namespace std;
//
//int main() {
//    setlocale(0, "");
//
//    int count;
//    cout << "Сколько чисел вводить? ";
//    cin >> count;
//
//    if (count <= 0) {
//        cout << "Неверное количество!" << endl;
//        return 0;
//    }
//
//    int max_number;
//    cout << "Введите число 1: ";
//    cin >> max_number;  // первое число сразу становится максимумом
//
//    // обрабатываем остальные числа
//    for (int i = 2; i <= count; i++) {
//        int current_number;
//        cout << "Введите число " << i << ": ";
//        cin >> current_number;
//
//        // если текущее число больше максимума - обновляем максимум
//        if (current_number > max_number) {
//            max_number = current_number;
//        }
//    }
//
//    cout << "Наибольшее число: " << max_number << endl;
//
//    return 0;
//}
