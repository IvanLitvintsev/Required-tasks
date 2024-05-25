// Homework_M26.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Helpers.h"

int main() {
    double num1 = 3.0;
    double num2 = 4.0;

    double result = squareOfSum(num1, num2);

    std::cout << "The square of the sum of " << num1 << " and " << num2 << " is " << result << std::endl;

    return 0;
}