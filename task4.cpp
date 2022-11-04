#include <iostream>

int sum_Of_Digits(int number)
{
    int result;
    result = (number / 1000) + (number % 1000 / 100) + (number % 100 / 10) + (number % 10);  //calculating the sum of digits
    return result;
}


int main()
{
    int digits;
    std::cout<<"Enter the number: "<<std::endl;
    std::cin>>digits;   //entering the number

    std::cout<<"The sum of all the digits of the given number is: ";
    std::cout<<sum_Of_Digits(digits);  //calling the function while passing the received value to it

	return 0;
}