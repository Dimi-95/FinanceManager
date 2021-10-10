#pragma once
#include <iostream>
#include <cmath>
#include <string> 


//This classes should contain importance of bought product/or expens, amount of money the product cost, date the propdcut was bought
//Each class is supposed to create a template for either a dynamic or a static expense.
//Static expenses are supposed to stay in the DB while Dynamic Expenses are supposed to be whiped after a cycle (one week).
class static_expenses 
{

    private:

    public:

    double set_goal;
    double income;
    std::string name_of_expense;
    double amount_of_money_expense;
    double payment_date;


    

};

class dynamic_expenses
{
    private:

    public:

    double money_saved;
    double money_in_bank;
    std::string name_of_expense;
    double amount_of_money;
    std::string date_of_purchase;
    int importance_of_purchase;

};

//This class will accumulate the expenses into one sum (into the variable expenses in Main.cpp)
class calculating_all_expenses
{
    public:
    double calculate_expense(double dynamic_expenses, double static_expenses)
    {
        double all_expenses = dynamic_expenses + static_expenses;
        return all_expenses;
    }

};

//This will calculate the months that are needed to reach the savings goal
class goals
{


};