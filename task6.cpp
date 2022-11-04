#include <iostream>
#include <cmath>

double polar_To_Cartesian_X(double r, double phi)  //function for calculating X coordinate in Cartesian system
{
    double x_coordinate;
    x_coordinate = r * sin(phi);
    return x_coordinate;
}

double polar_To_Cartesian_Y(double r, double phi)  //function for calculating Y coordinate in Cartesian system
{
    double y_coordinate;
    y_coordinate = r * cos(phi);
    return y_coordinate;
}


int main()
{
    double radius;
    double angle;
    std::cout<<"Enter the value of r:"<<std::endl;
    std::cin>>radius;
    std::cout<<"Enter the value of phi:"<<std::endl;
    std::cin>>angle;


    std::cout<<"The X coordinate in Cartesian system is: ";
    std::cout<<polar_To_Cartesian_X(radius, angle)<<std::endl;  //calling the first function for X

    std::cout<<"The Y coordinate in Cartesian system is: ";
    std::cout<<polar_To_Cartesian_Y(radius, angle);  //calling the second function for Y

	return 0;
}