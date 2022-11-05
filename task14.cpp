#include <iostream>

//function for calculating the cost of the given call
double cost_Of_Calls(int initial_Cost, int duration_Of_Call, int day)
{
    double total_Cost;

    if (day == 6 || day == 7)
    {
        total_Cost = 0.8 * initial_Cost * duration_Of_Call;
        return total_Cost;
    }

    else
    {
        total_Cost = initial_Cost * duration_Of_Call;
        return total_Cost;
    }
}


int main()
{
    int cost;
    int duration;
    int day_Of_Week;

    std::cout<<"Enter the initial cost per 1-minute call in roubles: "; //asking the user to enter the cost to
    // calculate the expenses
    std::cin>>cost;

    std::cout<<"Enter the duration of the call in minutes: ";
    std::cin>>duration;

    std::cout<<"Enter the day of the week: ";
    std::cin>>day_Of_Week;

    std::cout<<"The cost of your call is equal to: ";
    std::cout<<cost_Of_Calls(cost, duration, day_Of_Week); //giving the function all the
    //received arguments
    std::cout<<" roubles";

    return 0;
}