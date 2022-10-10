#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <iostream> 
#include "Date.h"
using namespace std; 

class Employee
{
    protected:
        string name;
        int id;
        int phone;
        int age;
        char gender;
        string job;
        double salary;
        Date date;
    public:
        Employee();
        Employee(string name, int id, int phone, int age, char gender, string job, double salary, Date date);
        void setName(string name);
        void setID(int ID);
        void setPhone(int num);
        void setAge(int age);
        void setJob(string job);
        void setSalary(double salary);
        void setDate(Date date); 
        void printInfo(); 
};

class Programmer: public Employee
{
    private:
        int deptNum;
        string supervisor;
        double salaryIncrease;
        bool cpp;
        bool java; 
    public:
        Programmer();
        Programmer(string name, int id, int phone, int age, char gender, string job, double salary, Date date, int deptNum, string superVisor, double salaryIncrease, bool cpp, bool java);
        void setDeptNum(int deptNum);
        void setSupervisor(string sv);
        void setSalaryInc(double salaryInc);
        void setCPP(bool cpp);
        void setJava(bool java);
        void printInfo();
};

class Architect: public Employee
{
    private: 
        int deptNum;
        string supervisor;
        double salaryIncrease;
        int yoe;
    public:
        Architect();
        Architect(string name, int id, int phone, int age, char gender, string job, double salary, Date date, int deptNum, string superVisor, double salaryIncrease, int yoe);
        void setDeptNum(int deptNum);
        void setSupervisor(string sv);
        void setSalaryInc(double salaryInc);
        void setYoe(int yoe);
        void printInfo();
};

#endif