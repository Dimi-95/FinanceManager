#include <iostream>
#include <cmath>
#include <string>
#include "expenses.h"

double percentage_1 = 0;
double percentage_2 = 0;





int main()
{
    //DB REPLACEMENT
    //static_expenses
    double income = 1578;
    std::string name_of_static_expense = "Rent";
    double amount_of_money_expense = 760;
    double set_goal = 2000;
    
    //dynamic_expenses
    double money_in_bank = 1500;
    int importance_of_purchase = 0;
    std::string date_of_purchase = "09.10.2021";
    double amount_of_money = 2.50;
    std::string name_of_dynamic_expense = "Chocolate Bar";

    

    //Add the expenses together
    calculating_all_expenses calculate;
    double all_expenses { calculate.calculate_expense(amount_of_money_expense, amount_of_money)};

    //User types in the desired mode after being prompted
    int mode;
    std::cout << "Enter 0 for the normal saving plan or enter 1 for the aggressive saving plan" << std::endl;
    std::cin >> mode;

    //Set mode to decide on the percentages numbers
    double result;
    set_mode result_of_mode;
    double after_calculations{result_of_mode.selected_percentages(result, mode, income, all_expenses, money_in_bank)};

    //Determine importance of dynamic purchase
    dynamic_expenses importance;
    std::string importance_message {importance.importance(importance_of_purchase)};
    
    // function for achieving goal
    goals needed_months;
    needed_months.calculate_months(after_calculations, set_goal);


    return 0;
}