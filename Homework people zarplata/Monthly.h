#pragma once
#pragma once
#include <iostream>
using namespace std;
#include"Emloyee.h"
#include"Hourly.h"
class Monthly :public Employee
{
    double salary;
    int work_days;
public:
    double get_salary() const;
    void set_salary(double salary);
    int get_days() const;
    void set_days(int work_days);
    //Constructors:
    Monthly
    (const string& last_name, const string& first_name,
        const string& job, int work_days, double salary
    );
    ~Monthly();
    //Methods
    void print() const;
    double count_salary();
};