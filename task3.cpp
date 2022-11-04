#include <iostream>
#include <valarray>

double count_Hypotenuse(double a, double b) // функция для подсчета гипотенузы треугольника
{
    double c;
    c = pow((pow(a, 2) + pow(b, 2)), 0.5); //Считаем гипотенузу, используем метод pow для возведения в степень
    return c;
}

double count_Square(double a, double b) // функция для подсчета площади треугольника
{
    double S;
    S = 0.5 * a * b; //Считаем площадь
    return S;
}

int main()
{
	double a;
	double b;

	std::cout << "Enter fist base: " << std::endl;
	std::cin >> a; //Вводим катет
	std::cout << "Enter second side: " << std::endl;
	std::cin >> b; //Вводим катет

	std::cout << "Hypotenuse = " << count_Hypotenuse(a, b) << std::endl;
	std::cout << "Square = " << count_Square(a, b) << std::endl; //Вывод

	return 0;
}