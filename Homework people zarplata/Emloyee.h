#pragma once
#include <iostream>
using namespace std;
class Employee
{
    string last_name;
    string first_name;
    string job;
public:
    virtual double count_salary() = 0;
    const string& get_last_name() const;
    const string& get_first_name() const;
    const string& get_job() const;
    void set_last_name(const string& last_name);
    void set_first_name(const string& first_name);
    void set_job(const string& job);

    /////////////////// Constructors

    Employee(const string& last_name, const string& first_name, const string& job);
    ~Employee();

    ///////////////////  Methods

    virtual void print() const;
};