#include <iostream>

// function for checking if it is possible to fit one triangle into the other one
bool rectangles_Fit(double a, double b, double c, double d)
{
    if ((a <= c && b <= d) || (a <= d && b <= c))  //rotating the triangle to check if it fits
        return true;

    else
        return false;
}

int main()
{
    double a;
    double b;
    double c;
    double d;

    std::cout<<"Enter the height of the first rectangle: ";
    std::cin>>a;
    std::cout<<"Enter the width of the first rectangle: ";
    std::cin>>b;

    std::cout<<"Enter the height of the second rectangle: ";
    std::cin>>c;
    std::cout<<"Enter the width of the second rectangle: ";
    std::cin>>d;

    if (rectangles_Fit(a, b, c, d))
        std::cout<<"You can fit the first rectangle into the second one.";

    else
        std::cout<<"Unfortunately, you cannot fit the first rectangle into the second one.";

    return 0;
}
