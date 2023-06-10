#include <iostream>
#include "definitions.h"
#include <string>
    name_of_customer()
    {
    std :: cout << "Hello dear customer. \n";
    std :: cout << "Please enter your name \n";
    std :: string name;
    std :: cin  >> name;
    return name;
    }
    surname_of_customer()
    {
        std :: cout << "Now please enter your surname \n";
        std :: string surname;
        std :: cin  >> surname;
        return surname;
    }
    citizenship_of_customer()
    {
        std :: cout << "Are you a citizen of the Republic of Armenia? \n (if you are, please enter \"yes\". \n if no enter \"no\" \n";
        std :: string entered_value;
        std :: cin  >> entered_value;
        if (entered_value == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    residency_of_customer()
    {
        std :: cout << "Are you a resident citizen of Armenia? \n (if you are, please enter \"yes\". if no enter \"no\") \n";
        std :: string entered_value1;
        std :: cin  >> entered_value1;
        if (entered_value1 == "yes")
        {
            return true;
        }
        else
        {
            std :: cout << "You cant take out a loan \n";
            return 1;
        }
    }
    marital_status_of_customer()
    {
        std :: cout << "Are you married? \n(if you are, please enter \"yes\". if no enter \"no\") \n";
        std :: string entered_value2;
        std :: cin  >> entered_value2;
        if (entered_value2 == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    age_of_customer()
    {
        std :: cout << "Please enter your age \n";
        int entered_age = 0;
        std :: cin >> entered_age;
            return entered_age;
    }
    credit_history_of_customer()
    {
        std :: cout << "Have you ever taken out a loan (if you are, please enter \"yes\". if no enter \"no\") \n";
        std :: string entered_value3;
        std :: cin  >> entered_value3;
        if (entered_value3 == "yes")
        {
            return true;
        }
        else
        {
            std :: cout << "You can take a loan only with collateral \n";
            return 1;
        }
    }
    bool bank_decision(bool i1; bool i2; int i3)
    {
        if ((i1 && i2 && (i3 >= 21)) == true)
        {
            std :: cout "You can use our loan service \n";
        }
        else
        {
            std :: cout << "You can't use our loan service \n";
        }
        
    }
    
