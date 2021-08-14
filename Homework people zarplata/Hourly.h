#pragma once
#include <iostream>
using namespace std;
#include"Emloyee.h"
class Hourly : public Employee
{
    double salary;
    double work_hours;
public:

    double get_salary() const;
    double get_hours() const;
    void set_salary(double salary);
    void set_hours(double work_hours);

    /////////////////// Constructors

    Hourly
    (const string& last_name, const string& first_name,
        const string& job, double work_hours, double salary
    );
    ~Hourly();
    //   Methods

    void print() const;

    double count_salary();
};