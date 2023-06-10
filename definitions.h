#ifndef definitions
#define definitions
#include <string>
class person
{
    private:   
    std :: string name;
    std :: string surname;
    bool citizenship;
    bool residency;
    bool marital_status;
	int age;
    bool credit_history;
    public:
    void set_name(std :: string entered_name)
    {
        name = entered_name;
    }
    std :: string get_name() const
    {
        return name;
    }
    void set_surname(std :: string entered_surname)
    {
        surname = entered_surname;
    }
    std :: string get_surname()const
    {
        return surname;
    }
    void set_citizenship(bool entered_citizenship)
    {
        citizenship = entered_citizenship;
    }
    bool get_citizenship() const
    {
        return citizenship;
    }
    void set_residency(bool entered_residency)
    {
        residency = entered_residency;
    }
    bool get_residency()const
    {
        return residency;
    }
    void set_marital_status(bool entered_marital_status)
    {
        marital_status = entered_marital_status;
    }
    bool get_marital_status()const
    {
        return marital_status;
    }
    void set_age(int entered_age)
    {
        age = entered_age;
    }
    int get_age()const
    {
        return age;
    }
    void set_credit_history(bool entered_credit_history)
    {
        credit_history = entered_credit_history;
    }
    bool get_credit_history()const
    {
        return credit_history;
    }
};
class credit
{
    private:
    int loan_amount;
    int payment_period;
    public:
    void set_loan_amount(int entered_loan_amount);
    int get_loan_amount();
    void set_payment_period(int entered_payment_period);
    int get_payment_period(); 
};
std :: string name_of_customer();
std :: string surname_of_customer();
bool citizenship_of_customer();
bool residency_of_customer();
bool marital_status_of_customer();
int age_of_customer();
bool credit_history_of_customer();
bool bank_decision(bool i1, bool i2, int i3);
#endif