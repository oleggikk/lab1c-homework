#include <iostream>

bool if_Palindrome(int number)
{
    int first_Digit;
    int second_Digit;
    int third_Digit;
    int fourth_Digit;
    int fifth_Digit;
    int sixth_Digit;

    // calculating the first 3 digits of the number
    first_Digit = number / 100000;
    second_Digit = number % 100000 / 10000;
    third_Digit = number % 10000 / 1000;

    // calculating the las 3 digits of the number
    fourth_Digit = number % 1000 / 100;
    fifth_Digit = number % 1000 % 100 / 10;
    sixth_Digit = number % 1000 % 100 % 10;

    // checking if palindrome
    if (first_Digit == sixth_Digit && second_Digit == fifth_Digit && third_Digit == fourth_Digit)
        return true;

    else
        return false;
}


int main()
{
    int number;

    std::cout<<"Enter a 6-digit number: ";
    std::cin>>number;

    if (if_Palindrome(number))
        std::cout<<"Your number is a palindrome!";

    else
        std::cout<<"Your number is not a palindrome.";

    return 0;
}