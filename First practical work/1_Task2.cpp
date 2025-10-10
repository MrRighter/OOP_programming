#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int x = 2008;
    int *ptr = &x;
    int y = 17;
    cout << "Исходное значение переменной: " << x << endl;
    *ptr += y;
    cout << "Значение после увеличения на " << y << ": " << x << endl;

    return 0;
}
