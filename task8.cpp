#include <iostream>
#include <cmath>

double median_Of_Triangle (double a, double b, double c)  //function for calculating medians of a triangle
{
    double median = 0.5 * sqrt(2 * a * a + 2 * b * b - c * c);
    return median;
}

int main()
{
    double first_side;
    double second_side;
    double third_side;

    double first_median;
    double second_median;
    double third_median;

    std::cout<<"Enter the first side of the triangle: ";
    std::cin>>first_side;

    std::cout<<"Enter the second side of the triangle: ";
    std::cin>>second_side;

    std::cout<<"Enter the third side of the triangle: ";
    std::cin>>third_side;

    //calculating the sides of the new triangle using the function
    first_median = median_Of_Triangle(first_side, second_side, third_side);
    second_median = median_Of_Triangle(first_side, third_side, second_side);
    third_median = median_Of_Triangle(second_side, third_side, first_side);

    //calculating the values of medians of the new triangle by calling the function
    std::cout<<"The first median of the new triangle is equal to: ";
    std::cout<<median_Of_Triangle(first_median, second_median, third_median)<<std::endl;

    std::cout<<"The second median of the new triangle is equal to: ";
    std::cout<<median_Of_Triangle(first_median, third_median, second_median)<<std::endl;

    std::cout<<"The third median of the new triangle is equal to: ";
    std::cout<<median_Of_Triangle(third_median, second_median, first_median)<<std::endl;


	return 0;
}