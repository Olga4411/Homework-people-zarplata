#include<iostream>
#include"Emloyee.h"

//Employee:: double count_salary() = 0;
const string& Employee:: get_last_name() const
{
    return last_name;
}
const string& Employee:: get_first_name() const
{
    return first_name;
}
const string& Employee:: get_job() const
{
    return job;
}
void Employee::set_last_name(const string& last_name)
{
    this->last_name = last_name;
}
void Employee:: set_first_name(const string& first_name)
{
    this->first_name = first_name;
}
void Employee::set_job(const string& job)
{
    this->job = job;
}

/////////////////// Constructors

Employee:: Employee(const string& last_name, const string& first_name, const string& job)
{
    set_last_name(last_name);
    set_first_name(first_name);
    set_job(job);
    cout << "E_Constructor: \t" << this << endl;

}
Employee::~Employee()
{
    cout << "E_Destructor: \t" << this << endl;
}

///////////////////  Methods

 void Employee:: print() const
{
    cout << last_name << "  " << first_name << ", " << job;
    cout << endl;
}