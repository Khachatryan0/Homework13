#include <iostream>
#include "definitions.h"
#include <string>

int main(int argc, char** argv)
{
    person customer1;
    customer1.set_name(name_of_customer());
    customer1.set_surname(surname_of_customer());
    customer1.set_age(age_of_customer());
    customer1.set_citizenship(citizenship_of_customer());
    if (customer1.get_citizenship() == 0)
    {
        customer1.set_residency(residency_of_customer());
    }
    customer1.set_marital_status(marital_status_of_customer());
    customer1.set_credit_history(credit_history_of_customer());
    std :: cout << "Name: \t" << customer1.get_name() << "\n";
    std :: cout << "Surname: \t" << customer1.get_surname() << "\n";
    std :: cout << "Age: \t" << customer1.get_age() << "\n";
    bank_decision(customer1.get_citizenship(),customer1.get_credit_history(),customer1.get_age());    
    return 0;
}