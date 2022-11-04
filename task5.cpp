#include <iostream>
#include <cmath>

double count_Radius(double x, double y) // функция для подсчета гипотенузы треугольника
{
    double r;
    r = pow((pow(x, 2) + pow(y, 2)), 0.5); // считаем радиус, как гипотенузу треугольника
    return r;
}

std::string count_Angle(double x, double y)
{
    double tg_of_angle = y/x;
    return std::string("arctan(") + std::to_string(tg_of_angle) + std::string(")");
}


int main()
{
    double x;
    double y;
    std::cout<<"Enter the value of x: " << std::endl;
    std::cin>>x;
    std::cout<<"Enter the value of y: " << std::endl;
    std::cin>>y;


    std::cout<<"Radius of Polar System of Coordinates is " << count_Radius(x, y) << std::endl;  // вывод радиуса с вызовом функции, ответственной за подсчет радиуса

    std::cout<<"Angle of Polar System of Coordinates is " << count_Angle(x, y) << std::endl;   // вывод угла с вызовом функцц, ответственной за подсчет угла

    return 0;
}