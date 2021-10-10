#include <iostream>
#include <cmath>
#include <string>
#include "expenses.h"



double percentage_1;
double percentage_2;

//mode will be defined by the user, which will influence the percentage that is being used to calculate.
//mode 0 is the normal saving plan. mode 1 is the aggressice saving plan.
int mode;



// Create profiles that will split the remaining money into percentages, to make a saving plan
//https://n26.com/en-eu/blog/50-30-20-rule <-- 50/30/20 rule 50% needs - 30% wants - 20% savings

int main()
{
    //DB REPLACEMENT
    //static_expenses
    double income = 1578;
    std::string name_of_expense = "Rent";
    double amount_of_money_expense = 760;
    double set_goal = 2000;
    
    //dynamic_expenses
    double money_in_bank = 1500;
    int importance_of_purchase = 0;
    std::string date_of_purchase = "09.10.2021";
    double amount_of_money = 2.50;
    std::string name_of_expense = "Chocolate Bar";

    //Add the expenses together and calculate the total amount by adding them together
    calculating_all_expenses calculate;
    double all_expenses { calculate.calculate_expense(amount_of_money_expense, amount_of_money)};

    //Determine importance of dynamic purchase
    dynamic_expenses importance;
    std::string importance_message {importance.importance(importance_of_purchase)};
    
    //parse in the data from the DB



    std::cout << "Enter 0 for the normal saving plan or enter 1 for the aggressive saving plan" << std::endl;
    std::cin >> mode;

    if (mode == 0)
    {   // The % of savings. percentage_1 is the percentage of money that will be saved. percentage_2 is the percentage of money that will be used up.
        percentage_1 = 0.40;
        percentage_2 = 0.60;

        //put 10% of income away 
        double save_money = (income - all_expenses) * percentage_1;
        double wants_money = (income - all_expenses) * percentage_2;
        //This outputs the money that the bank account will have over all
        double remaining_money = ( money_in_bank + income ) - all_expenses;
        std::cout << "Your remaining Money is: "<<remaining_money << "Eur" << std::endl;
        //This outputs what the suer should save up and what the user can use for the month
        std::cout << "Put away: " << save_money << "Eur" << std::endl;
        std::cout << "Use: " << wants_money << "Eur" << std::endl;
        //The user defines how much he wants to save, in the variable goal, and the code below informs the user of how many months he will need to achieved goal.
        double achieved_goal = set_goal/save_money;
        std::cout << "Your goal of reaching " << set_goal << "Eur will be achieved in: " << std::round(achieved_goal) << " Months" << std::endl;
    }

    else if (mode == 1)
    {
        // The % of savings. percentage_1 is the percentage of money that will be saved. percentage_2 is the percentage of money that will be used up.
        percentage_1 = 0.60;
        percentage_2 = 0.40;

        //put 10% of income away 
        double save_money = (income - all_expenses) * percentage_1;
        double wants_money = (income - all_expenses) * percentage_2;
        //This outputs the money that the bank account will have over all
        double remaining_money = ( money_in_bank + income ) - all_expenses;
        std::cout << "Your remaining Money is: "<<remaining_money << "Eur" << std::endl;
        //This outputs what the suer should save up and what the user can use for the month
        std::cout << "Put away: " << save_money << "Eur" << std::endl;
        std::cout << "Use: " << wants_money << "Eur" << std::endl;
        //The user defines how much he wants to save, in the variable goal, and the code below informs the user of how many months he will need to achieved goal.
        double achieved_goal = set_goal/save_money;
        std::cout << "Your goal of reaching " << set_goal << "Eur will be achieved in: " << std::round(achieved_goal) << " Months" << std::endl;
    }
    else
    {

    }
        

        

        

        
    
    

    return 0;
}