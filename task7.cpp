#include <iostream>
#include <valarray>

double count_Discriminant(double a, double b, double c) // функция для подсчета дискриминанта по формуле б^2 - 4ac
{
    double D;
    D = pow(b, 2) - 4 * a * c;
    return D;
}

std:: string count_Solution(double a, double b, double D)
{
    double x1;
    double x2;
    x1 = (-b - pow(D, 0.5))/(2 * a);
    x2 = (-b + pow(D, 0.5))/(2 * a); // считаем иксы
    if (x1 == x2)
    {
        return std::to_string(x1);
    }
    else
    {
        return std::to_string(x1) + std::string("; ") + std::to_string(x2);
    }
}

int main()
{
    double a;
    double b;
    double c; // выделяем память под переменные
    double D;

    std::cout << "a, b, c - coefficients of quadratic problem. \nax^2 + bx + c" << std::endl;
    std::cout << "Enter a: " << std::endl;
    std::cin >> a;
    std::cout << "Enter b: " << std::endl;
    std::cin >> b;
    std::cout << "Enter c: " << std::endl;
    std::cin >> c;

    D = count_Discriminant(a, b, c);

    if (D < 0) // если дискриминат меньше нуля - нет решений, если есть - в функцию по подсчету
    {
        std::cout << "There are no solution of this problem ;(";
    }
    else
    {
        std::cout << "Solution(s): " + count_Solution(a, b, D) << std::endl;
    }

    return 0;
}