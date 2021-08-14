#include "Hourly.h"
#include"Emloyee.h"

double Hourly::get_salary() const
{
    return salary;
}
double Hourly::get_hours() const
{
    return work_hours;
}
void Hourly::set_salary(double salary)
{
    this->salary = salary;
}
void Hourly::set_hours(double work_hours)
{
    this->work_hours = work_hours;
}

/////////////////// Constructors

Hourly::Hourly
(const string& last_name, const string& first_name,
    const string& job, double work_hours, double salary
) :Employee(last_name, first_name, job)
{
    set_salary(salary);
    set_hours(work_hours);
    cout << "H_Constructor: \t" << this << endl;
}
Hourly::~Hourly()
{
    cout << "H_Destructor: \t" << this << endl;
}
//   Methods

void Hourly::print() const
{
    Employee::print();
    cout << "Заработная плата " << salary << " руб. в час" << endl;
    cout << "Отработано " << work_hours << " часов" << endl;
}

double Hourly::count_salary()
{
    double total_salary;
    total_salary = get_salary() * get_hours();
    return total_salary;
}