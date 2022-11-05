#include <iostream>
#include <random>
#include <cstdlib>

int generateProblem()
{
    int x;
    int y;
    srand(time(0)); // без stand  time функция будет выдавать одни и те же "случайные" числа
    x = std::rand() % 9 + 1; // енерация сл. чисел
    y = std::rand() % 9 + 1; // %9 ограничивает максимальное число до 8 и +1 - начинаем отсчет не с нуля, а с ЕДИНИЦЫ и ликвидирует проблему, что максимальное значение 8
    std::cout << "solve problem: " << x << " * " << y << std::endl;
    return x*y;
}

int main()
{
    int result;
    int right_result;
    right_result = generateProblem(); // получаем решение сгенерированнного примера и выводим сам пример

    std::cout << "Enter result of counting: " << std::endl;
    std::cin >> result; // получаем решение от пользователя, далее сравниваем верное оно или нет

    if (result == right_result)
    {
        std::cout << "Congratulate you! You are absolutely right!";
    }
    else
    {
        std::cout << "Wooops. You incorrectly solve this problem!";
    }

    return 0;
}