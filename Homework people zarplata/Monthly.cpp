using namespace std;
#include "Hourly.h"
#include"Emloyee.h"
#include"Monthly.h"

double Monthly::get_salary() const
{
    return salary;
}
void Monthly::set_salary(double salary)
{
    this->salary = salary;
}int Monthly::get_days() const
{
    return work_days;
}
void Monthly::set_days(int work_days)
{
    this->work_days = work_days;
}
//Constructors:
Monthly::Monthly
(const string& last_name, const string& first_name,
    const string& job, int work_days, double salary
) :Employee(last_name, first_name, job)
{
    set_salary(salary);
    set_days(work_days);
    cout << "M_Constructor: \t" << this << endl;
}
Monthly::~Monthly()
{
    cout << "M_Destructor: \t" << this << endl;
}
//Methods
void Monthly::print() const
{
    Employee::print();
    cout << "Заработная плата " << salary << " руб. в месяц" << endl;
    cout << "Отработано дней: " << work_days << endl;
}
 double Monthly::count_salary()
{
    return (get_salary() / 31) * get_days();
}
