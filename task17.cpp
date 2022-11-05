#include <iostream>
// #include <Windows.h> // попытка включить русский язык

void wordForm(int money) // функция для окончания
{
    int end;
    if (money < 0 or money > 99) // проверка на "дурака" относительно условия
    {
        std::cout << "Read the conditions please, you cannot write number more than 99 or less than 1.";
    }
    else
    {
        end = money % 10;
        if (end == 0 or end >= 5) // смотрим что нам надо написать ек/йка/йки
        {
            std::cout << money << " kopeek";
        }
        else if (end == 1)
        {
            std::cout << money << " kopeika";
        }
        else
        {
            std::cout << money << " kopiki";
        }
    }
}

int main()
{
    // setlocale(LC_ALL, "ru_RU.UTF-8"); // попытка включить русский язык

    int money; // выделяем память под переменную

    std::cout << "Enter amount of money you have: " << std::endl;
    std::cin >> money; // вводим количество копеек

    wordForm(money); // активируем функцию

    return 0;
}