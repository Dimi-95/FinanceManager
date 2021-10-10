#include <iostream>
#include <cmath>
#include <string>
#include "expenses.h"


double calculating_all_expenses::calculate_expense(double dynamic_expenses, double static_expenses)
{
    double all_expenses = dynamic_expenses + static_expenses;
    return all_expenses;
}

std::string dynamic_expenses::importance(int m_importance_of_purchase)
{
    if (m_importance_of_purchase == 0)
    {
        std::cout << "The item is Important \n" << std::endl;
    }
    else if (m_importance_of_purchase == 1)
    {
        std::cout << "The item is NOT Important \n" << std::endl;
    }
}


double set_mode::selected_percentages( double &result, int mode, double income, double all_expenses, double money_in_bank)
{

   if (mode == 0)
        {
            
            double percentage_1 = 0.40;
            double percentage_2 = 0.70;

            //Add logic, send results

            double save_money = (income - all_expenses) * percentage_1;
            double wants_money = (income - all_expenses) * percentage_2;

            double remaining_money = (money_in_bank + income) - all_expenses;
            std::cout << "Your remaining Money is: "<<remaining_money << "Eur" << std::endl;
            //This outputs what the suer should save up and what the user can use for the month
            std::cout << "Put away: " << save_money << "Eur" << std::endl;
            std::cout << "Use: " << wants_money << "Eur" << std::endl;

            result = save_money;
            return result;



        }
        else if (mode == 1)
        {
            double percentage_1 = 0.60;
            double percentage_2 = 0.40;

            double save_money = (income - all_expenses) * percentage_1;
            double wants_money = (income - all_expenses) * percentage_2;

            double remaining_money = (money_in_bank + income) - all_expenses;
            std::cout << "Your remaining Money is: "<<remaining_money << "Eur" << std::endl;
            //This outputs what the suer should save up and what the user can use for the month
            std::cout << "Put away: " << save_money << "Eur" << std::endl;
            std::cout << "Use: " << wants_money << "Eur" << std::endl;

            result = save_money;
            return result;


        } 
}

void goals::calculate_months(double after_calculations, double set_goal)
{
    double months = set_goal/after_calculations;
    std::cout << "Your goal of reaching " << set_goal << "Eur will be achieved in: " << std::round(months) << " Months" << std::endl;
    
}