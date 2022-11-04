#include <iostream>

double countSquare(b1, b2, h) // функция для подсчета площади
{
	double S;
	S = (b1 + b2) / 2 * h; //Cчитаем площадь трапеции
	return S;
}

int main()
{
	double b1;
	double b2;
	double h; //Объявляем переменные

	std::cout << "Enter fist base: ";
	std::cin >> b1; //Вводим значении b1

	std::cout << "Enter second base: ";
	std::cin >> b2; //Вводим значении b2

	std::cout << "Enter height: ";
	std::cin >> h; //Вводим значении h


	std::cout << "Square = " << countSquare(b1, b2, h) << std::endl; //Выводим ответ
	return 0;
}
