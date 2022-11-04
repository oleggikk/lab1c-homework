#include <iostream>
#include <cmath>

double circumference_Circle(int radius)  //function for calculating the circumference of a circle
{
    double circumference = 3.14 * radius;
    return circumference;

}

double area_Circle(int radius)  //function for calculating the area of a circle
{
    double area = 3.14 * pow(radius, 2);
    return area;

}


int main()
{
    int radius;
    std::cout<<"Enter the radius of the circle: "<<std::endl;
    std::cin>>radius;   //entering the value of radius

    std::cout<<"The circumference of the circle equals: ";
    std::cout<<circumference_Circle(radius)<<std::endl;    //if radius = 2, output: 6.28 as expected

    std::cout<<"The area of the circle equals: ";
    std::cout<<area_Circle(radius);     //if radius = 2, output: 12.56 as expected

	return 0;
}