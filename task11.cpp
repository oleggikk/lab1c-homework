#include <iostream>

double countPriceToPay(double cost)
{
    if (cost > 1000) // если больше 1000, то даем скидку 10%
    {
        cost = cost * 0.9;
    }
    return cost;
}

int main()
{
    double cost; // выделяем память под переменную

    std::cout << "Enter the cost: " << std::endl;
    std::cin >> cost; // присваиваем значение

    std::cout << "You have to pay: " << countPriceToPay(cost) << " rub" << std::endl; //вывод с использованием функции

    return 0;
}