#include <iostream>
using namespace std;
#include"Emloyee.h"
#include"Hourly.h"
#include"Monthly.h"

#define delim "\n------------------------\n"



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