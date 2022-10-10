#include <iostream>
#include <string> 
#include "Employee.h"
using namespace std; 

Employee::Employee()
{
    this->name = "";
    this->id = 0;
    this->phone = 0;
    this->age = 0;
    this->gender = ' ';
    this->job = "";
    this->salary = 0;
    this->date =  Date(0, 0, 0);
}

Employee::Employee(string name, int id, int phone, int age, char gender, string job, double salary, Date date)
{
    this->name = name;
    this->id = id;
    this->phone = phone;
    this->age = age;
    this->gender = gender;
    this->job = job;
    this->salary = salary;
    this->date = date; 
}

void Employee::setName(string name)
{
    this->name = name; 
}

void Employee::setID(int ID)
{
    this->id = ID;
}

void Employee::setPhone(int phone)
{
    this->phone = phone;
}

void Employee::setAge(int age)
{
    this->age = age;
}

void Employee::setJob(string job)
{
    this->job = job; 
}

void Employee::setSalary(double salary)
{
    this->salary = salary; 
}

void Employee::setDate(Date date)
{
    this->date = date; 
}

void Employee::printInfo()
{
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "Phone: " << phone << endl;
    cout << "Age: " << age << endl;
    cout << "Gender " << gender << endl;
    cout << "Job: " << job << endl;
    cout << "Salary: " << salary << endl;
    cout << "Date: " << endl;
    date.printDate();
    cout << endl << endl;
}


    
Programmer::Programmer()
: Employee()
{
    this->deptNum = 0;
    this->supervisor = "";
    this->salaryIncrease = 0;
    this->cpp = true;
    this->java = true;
}

Programmer::Programmer(string name, int id, int phone, int age, char gender, string job, double salary, Date date, int deptNum, string superVisor, double salaryIncrease, bool cpp, bool java) 
: Employee(name, id, phone, age, gender, job, salary, date)
{
    this->deptNum = deptNum;
    this->supervisor = superVisor;
    this->salaryIncrease = salaryIncrease;
    this->cpp = cpp;
    this->java = java;
}

void Programmer::setDeptNum(int deptNum)
{
    this->deptNum = deptNum;
}

void Programmer::setSupervisor(string sv)
{
    this->supervisor = sv;
} 

void Programmer::setSalaryInc(double salaryInc)
{
    this->salaryIncrease = salaryInc;
}

void Programmer::setCPP(bool cpp)
{
    this->cpp = cpp;
}

void Programmer::setJava(bool java)
{
    this->java = java; 
}

void Programmer::printInfo()
{
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "Phone: " << phone << endl;
    cout << "Age: " << age << endl;
    cout << "Gender " << gender << endl;
    cout << "Job: " << job << endl;
    cout << "Salary: " << salary << endl;
    cout << "Date: \n";
    date.printDate();
    cout << "Department Number: " << deptNum << endl;
    cout << "Supervisor: " << supervisor << endl;
    cout << "Salary Increase " << salaryIncrease << endl;
    cout << "Java Experience: " << java << endl;
    cout << "CPP Experience: " << cpp << endl << endl;
}

Architect::Architect()
: Employee()
{
    this->deptNum = 0;
    this->supervisor = "";
    this->salaryIncrease = 0;
    this->yoe = 0;
}

Architect::Architect(string name, int id, int phone, int age, char gender, string job, double salary, Date date, int deptNum, string superVisor, double salaryIncrease, int yoe)
: Employee(name, id, phone, age, gender, job, salary, date)
{
    this->deptNum = deptNum;
    this->supervisor = superVisor;
    this->salaryIncrease = salaryIncrease; 
    this->yoe = yoe; 
}

void Architect::setDeptNum(int deptNum)
{
    this->deptNum = deptNum;
}

void Architect::setSupervisor(string sv)
{
    this->supervisor = sv;
} 

void Architect::setSalaryInc(double salaryInc)
{
    this->salaryIncrease = salaryInc;
}

void Architect::setYoe(int yoe)
{
    this->yoe = yoe;
}

void Architect::printInfo()
{
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "Phone: " << phone << endl;
    cout << "Age: " << age << endl;
    cout << "Gender " << gender << endl;
    cout << "Job: " << job << endl;
    cout << "Salary: " << salary << endl;
    cout << "Date: \n";
    date.printDate();
    cout << "Department Number: " << deptNum << endl;
    cout << "Supervisor: " << supervisor << endl;
    cout << "Salary Increase: " << salaryIncrease << endl;
    cout << "Years of Software Architecture Experience: " << yoe << endl << endl;
}

