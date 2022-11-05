#include <iostream>
#include <valarray>

int count_Hours(int k) // в кажом часу 3600 секунд, по такой лоогике находится количество часов в одном часу
{
    int hours;
    hours = k / 3600;
    return hours;
}

int count_Minutes(int k) // считаем сколько ЦЕЛЫХ минут прошло с начала последнего часа
{
    int minutes;
    minutes = k / 60 - (count_Hours(k)) * 60;
    return minutes;
}

int main()
{
    int k; // выделяем память под переменную

    std::cout << "Enter seconds: " << std::endl;
    std::cin >> k; // присваиваем значение
    if (k > 60 * 60 * 24) // по услови мы находимся в рамках одних суток, не может быть более 24 часов в одних сутках
    {
        std::cout << "You've entered  a second value that is greater than one day.\nWe are within one day.\nAccording to contition:  It's the k-th second of the day.\nIt is impossible to have " << k << " seconds in a day";
    }
    else
    {
        std::cout << "Hours: " << count_Hours(k) << std::endl; // вызываем соответствующие методы для подсчета часов и минут 
        std::cout << "Minutes: " << count_Minutes(k) << std::endl;
    }

    return 0;
}