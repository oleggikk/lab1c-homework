#include <iostream>

std:: string perfect_Weight(int height, int weight)   //function for recommendations regarding one's weight
{
    if (height - weight == 100)
    {
        return "Your weight is perfect, no need to worry about it!";
    }
    else if (height - weight > 100)
    {
        return "You're underweight. You should consider gaining some weight.";
    }
    else
    {
        return "You're overweight. You should consider losing some weight.";
    }

}

int main()
{
    int height;
    int weight;

    std::cout<<"Enter your height in cm: ";
    std::cin>>height;

    std::cout<<"Enter your weight in kg: ";
    std::cin>>weight;

    std::cout<<perfect_Weight(height, weight); //calling the function, giving it the received arguments

    return 0;
}
