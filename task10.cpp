#include <iostream>

bool isosceles_Triangle(double a, double b, double c)  //function for checking if the triangle is isosceles
{
    if (a == b || a == c || b == c)
        return true;
    else
        return false;
}


int main()
{
    double first_Side;
    double second_Side;
    double third_Side;

    //entering values of each side of the triangle
    std::cout<<"Enter the first side of the triangle: ";
    std::cin>>first_Side;

    std::cout<<"Enter the second side of the triangle: ";
    std::cin>>second_Side;

    std::cout<<"Enter the third side of the triangle: ";
    std::cin>>third_Side;

    //calling the function to check if the triangle is isosceles
    if (isosceles_Triangle(first_Side, second_Side, third_Side))
    {
        std::cout<<"The triangle is isosceles";
    }
    else
    {
        std::cout<<"The triangle is not isosceles";
    }

	return 0;
}