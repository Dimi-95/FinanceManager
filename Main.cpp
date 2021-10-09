#include <iostream>
#include <cmath>


float money_in_bank;
float income;
float expenses;
float goal;


int main()
{
    // Create profiles that will split the remaining money into percentages, to make a saving plan
    //https://n26.com/en-eu/blog/50-30-20-rule <-- 50/30/20 rule 50% needs - 30% wants - 20% savings
  
    money_in_bank = 1500;
    income = 1725;
    expenses = 1300;

    float remaining_money = ( money_in_bank + income ) - expenses;

    std::cout << "Your reminaing Money is: "<<remaining_money << "Eur" << std::endl;

    goal = 10000;

    //put 10% of income away 
    float save_money = (income - expenses) * 0.40;
    float wants_money = (income - expenses) * 0.60;

    std::cout << "Put away: " << save_money << "Eur" << std::endl;
    std::cout << "Use: " << wants_money << "Eur" << std::endl;

    float achieved_goal = goal/save_money;

    std::cout << "Your goal of reaching " << goal << "Eur will be achived in: " << std::round(achieved_goal) << " Months" << std::endl;

    
    

    return 0;
}