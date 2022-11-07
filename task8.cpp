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

    //calculating the medians of the new triangle using the function. Triangles are similar (check why on the Internet),
    // so we can divide the medians by 3
    first_median = median_Of_Triangle(first_side, second_side, third_side) / 3;
    second_median = median_Of_Triangle(first_side, third_side, second_side) / 3;
    third_median = median_Of_Triangle(second_side, third_side, first_side) / 3;

    std::cout<<"The first median is equal to: " << first_median << std::endl;
    std::cout<<"The second median is equal to: " << second_median << std::endl;
    std::cout<<"The third median is equal to: " << third_median << std::endl;

    return 0;
}
