#include <iostream>

void checkLessOrMoreThanB(int number, int b)
{
    int result_of_multyply;
    result_of_multyply = (number / 100) * ((number / 10) % 10) * (number % 10); // аходим произведение цифр
    if (result_of_multyply > b)
    {
        std::cout << "Multiplication of numbers of" << number << " is more than " << b << std::endl;
    }
    else
    {
        std::cout << "Multiplication of numbers of " << number << " is not more than " << b << std::endl;
    }
}

void checkForSeven(int number)
{
    int result_of_sum;
    result_of_sum = (number / 100) + ((number / 10) % 10) + (number % 10); // находим сумму цифр
    if (result_of_sum % 7 == 0)
    {
        std::cout << "Summ of numbers of " << number << " can be divided by 7" << std::endl;
    }
    else
    {
        std::cout << "Summ of numbers of " << number << " cannot be divided by 7" << std::endl;
    }
}

int main()
{

    int number; // выделяем память под переменную
    int b;

    std::cout << "Enter number: " << std::endl;
    std::cin >> number; // вводим число
    std::cout << "Enter b: " << std::endl;
    std::cin >> b; // вводим b
    if (number < 100 or number >= 1000)
    {
        std::cout << "please next time enter number between 100 and 999";
    }
    else
    {
        checkLessOrMoreThanB(number, b);
        checkForSeven(number);
    }


    return 0;
}