#include <iostream>

void whichMonth(int month)
{
    switch (month) {
        case 1:
            std::cout << std::endl << " January, Winter";
            break;
        case 2:
            std::cout << std::endl << " Febuary, Winter";
            break;
        case 3:
            std::cout << std::endl << " March, Spring";
            break;
        case 4:
            std::cout << std::endl << " April, Spring";
            break;
        case 5:
            std::cout << std::endl << " May, Spring";
            break;
        case 6:
            std::cout << std::endl << " June, Summer";
            break;
        case 7:
            std::cout << std::endl << " July, Summer";
            break;
        case 8:
            std::cout << std::endl << " August, Summer";
            break;
        case 9:
            std::cout << std::endl << " September, Autumn";
            break;
        case 10:
            std::cout << std::endl << " October, Autumn";
            break;
        case 11:
            std::cout << std::endl << " November, Autumn";
            break;
        case 12:
            std::cout << std::endl << " December, Winter";
    }

}


int main()
{
    int month; // ыделяем память под переменную

    std::cout << "Enter number of month: " << std::endl;
    std::cin >> month; // вводим номер месяца

    if (month < 1 or month > 12) // роверяем, не пытается пользователь нас обмануть
    {
        std::cout << "Month number " << month << " does not exist" << std::endl;
    }
    else
    {
        std:: cout << "Month number "<< month << " is";
        whichMonth(month);
    }

    return 0;
}