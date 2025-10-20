// 1. Написать функцию, находящую максимум из двух чисел, которые вводятся в Main.
// Вывод максимума осуществить в Main.
// (Найденный максимум передавать с помощью возвращаемого значения, используя оператор return.)


#include <iostream>

std::string max2(int num1, int num2)
{
    if (num1 > num2)
    {
        return "первое число = " + std::to_string(num1);
    }
    else
    {
        return "второе число = " + std::to_string(num2);
    }
}

int main()
{
    int num1, num2;
    std::cout <<  "Введите 1 число: ";
    std::cin >> num1;
    std::cout << "Введите 2 число: ";
    std::cin >> num2;

    std::cout << "Наибольшее: " << max2(num1, num2) << std::endl;
}
