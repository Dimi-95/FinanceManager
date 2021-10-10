#include <iostream>
#include <cmath>
#include <string>
#include "expenses.h"


std::string dynamic_expenses::importance(int m_importance_of_purchase)
{
    if (m_importance_of_purchase == 0)
    {
        std::string importance = "Important";
        return importance;
    }
    else if (m_importance_of_purchase == 1)
    {
        std::string importance = "Not Important";
        return importance;
    }
}