#include <iostream>

bool lucky_Number (int number)  //function for checking if the number consisting of 6 digits is lucky
{
    int sum_First;
    int sum_Second;

    sum_First = (number / 100000) + (number % 100000 / 10000) + (number % 10000 / 1000); //sum of the first 3 digits
    sum_Second = (number % 1000 / 100) + (number % 1000 % 100 / 10) + (number % 1000 % 100 % 10); // sum of the
    // last 3 digits

    if (sum_First == sum_Second)  //returns True if sums are equal
        return true;

    else    // returns False otherwise
        return false;
}


int main()
{
    int number;

    std::cout<<"Enter a 6-digit number: ";
    std::cin>>number;

    if (lucky_Number(number))
        std::cout<<"Your number is lucky! Congrats!";

    else
        std::cout<<"Unfortunately, your number is not lucky.";

    return 0;
}