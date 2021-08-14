#include <iostream>
using namespace std;
#include"Emloyee.h"

#define delim "\n------------------------\n"



    

class Hourly : public Employee
{
    double salary;
    double work_hours;
public:

    double get_salary() const
    {
        return salary;
    }
    double get_hours() const
    {
        return work_hours;
    }
    void set_salary(double salary)
    {
        this->salary = salary;
    }
    void set_hours(double work_hours)
    {
        this->work_hours = work_hours;
    }

    /////////////////// Constructors

    Hourly
    (const string& last_name, const string& first_name,
        const string& job, double work_hours, double salary
    ) :Employee(last_name, first_name, job)
    {
        set_salary(salary);
        set_hours(work_hours);
        cout << "H_Constructor: \t" << this << endl;
    }
    ~Hourly()
    {
        cout << "H_Destructor: \t" << this << endl;
    }
    //   Methods

    void print() const
    {
        Employee::print();
        cout << "���������� ����� " << salary << " ���. � ���" << endl;
        cout << "���������� " << work_hours << " �����" << endl;
    }

    double count_salary()
    {
        double total_salary;
        total_salary = get_salary() * get_hours();
        return total_salary;
    }
};
class Monthly :public Employee
{
    double salary;
    int work_days;
public:
    double get_salary() const
    {
        return salary;
    }
    void set_salary(double salary)
    {
        this->salary = salary;
    }int get_days() const
    {
        return work_days;
    }
    void set_days(int work_days)
    {
        this->work_days = work_days;
    }
    //Constructors:
    Monthly
    (const string& last_name, const string& first_name,
        const string& job, int work_days, double salary
    ) :Employee(last_name, first_name, job)
    {
        set_salary(salary);
        set_days(work_days);
        cout << "M_Constructor: \t" << this << endl;
    }
    ~Monthly()
    {
        cout << "M_Destructor: \t" << this << endl;
    }
    //Methods
    void print() const
    {
        Employee::print();
        cout << "���������� ����� " << salary << " ���. � �����" << endl;
        cout << "���������� ����: " << work_days << endl;
    }
    double count_salary()
    {
        return (get_salary() / 31) * get_days();
    }

};
int main()
{
    double total_office_salary = 0;
    setlocale(LC_ALL, "");
    Employee* group[] =
    {
        new Monthly("�������", "�����" , "������� �����", 22, 53000),
        new Hourly("�������", "������" , "������� ������� �����",158.5, 200),
        new Hourly("���������", "�����", "��������� �������",50.7,350),
        new Monthly("����������", "��������", "������������ ���������� ������",15, 65000),
        new Hourly("Who", "Xileo" , "Head of paintshop" ,700, 500)
    };
    for (int i = 0; i < sizeof(group) / sizeof(Employee*); i++)
    {
        group[i]->print();
        cout << delim << endl;
    }
    for (int i = 0; i < sizeof(group) / sizeof(Employee*); i++)
    {
        double buffer = 0;
        buffer += group[i]->count_salary();
        total_office_salary += buffer;
    }
    cout << "����� �������� �����: " << total_office_salary << " ���.!" << endl;

}