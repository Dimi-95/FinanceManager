#include <iostream>
#include <cmath>


float money_in_bank;
float income;
float expenses;
float goal;
float percentage_1;
float percentage_2;

//mode will be defined by the user, which will influence the percentage that is being used to calculate.
//mode 0 is the normal saving plan. mode 1 is the aggressice saving plan.
int mode;



// Create profiles that will split the remaining money into percentages, to make a saving plan
//https://n26.com/en-eu/blog/50-30-20-rule <-- 50/30/20 rule 50% needs - 30% wants - 20% savings

int main()
{
    money_in_bank = 1500;
    income = 1578;
    expenses = 1128;
    goal = 2000;

    std::cout << "Enter 0 for the normal saving plan or enter 1 for the aggressive saving plan" << std::endl;
    std::cin >> mode;

    if (mode == 0)
    {   // The % of savings. percentage_1 is the percentage of money that will be saved. percentage_2 is the percentage of money that will be used up.
        percentage_1 = 0.40;
        percentage_2 = 0.60;

        //put 10% of income away 
        float save_money = (income - expenses) * percentage_1;
        float wants_money = (income - expenses) * percentage_2;
        //This outputs the money that the bank account will have over all
        float remaining_money = ( money_in_bank + income ) - expenses;
        std::cout << "Your remaining Money is: "<<remaining_money << "Eur" << std::endl;
        //This outputs what the suer should save up and what the user can use for the month
        std::cout << "Put away: " << save_money << "Eur" << std::endl;
        std::cout << "Use: " << wants_money << "Eur" << std::endl;
        //The user defines how much he wants to save, in the variable goal, and the code below informs the user of how many months he will need to achieved goal.
        float achieved_goal = goal/save_money;
        std::cout << "Your goal of reaching " << goal << "Eur will be achieved in: " << std::round(achieved_goal) << " Months" << std::endl;
    }

    else if (mode == 1)
    {
        // The % of savings. percentage_1 is the percentage of money that will be saved. percentage_2 is the percentage of money that will be used up.
        percentage_1 = 0.60;
        percentage_2 = 0.40;

        //put 10% of income away 
        float save_money = (income - expenses) * percentage_1;
        float wants_money = (income - expenses) * percentage_2;
        //This outputs the money that the bank account will have over all
        float remaining_money = ( money_in_bank + income ) - expenses;
        std::cout << "Your remaining Money is: "<<remaining_money << "Eur" << std::endl;
        //This outputs what the suer should save up and what the user can use for the month
        std::cout << "Put away: " << save_money << "Eur" << std::endl;
        std::cout << "Use: " << wants_money << "Eur" << std::endl;
        //The user defines how much he wants to save, in the variable goal, and the code below informs the user of how many months he will need to achieved goal.
        float achieved_goal = goal/save_money;
        std::cout << "Your goal of reaching " << goal << "Eur will be achieved in: " << std::round(achieved_goal) << " Months" << std::endl;
    }
    else
    {

    }
        

        

        

        
    
    

    return 0;
}