#include <iostream>
#include <string>
#include "Employee.cpp"
#include "Date.cpp"

using namespace std;

int main()
{
    Employee employee("Juno", 25037, 911, 19, 'M', "Student", 0, Date(3, 12, 2003)); 
    employee.printInfo();
    employee.setName("Buno");
    employee.setID(250370);
    employee.setPhone(9110);
    employee.setAge(190);
    employee.setJob("Junior Engineer"); 
    employee.setSalary(100000);
    employee.setDate(Date(30, 120, 20030));
    employee.printInfo(); 

    Programmer programmer("Juno Lee", 25037, 911, 19, 'M', "Programmer", 10, Date(3, 12, 2003), 1, "Juno Sr.", 200.0, true, true);
    programmer.printInfo();
    programmer.setName("Buno");
    programmer.setID(250370);
    programmer.setPhone(9110);
    programmer.setAge(190);
    programmer.setJob("Junior Engineer"); 
    programmer.setSalary(100000);
    programmer.setDate(Date(30, 120, 20030));
    programmer.setDeptNum(100);
    programmer.setSupervisor("Jujujuno");
    programmer.setSalaryInc(400.0);
    programmer.setCPP(false);
    programmer.setJava(false);
    programmer.printInfo();

    Architect architect("Juno Lee", 25037, 119, 19, 'M', "Sigma landlord", 2500000, Date(03, 12, 2003), 2, "Myself", 800, 3);
    architect.printInfo();
    architect.setName("Buno");
    architect.setID(250370);
    architect.setPhone(9110);
    architect.setAge(190);
    architect.setJob("Junior Engineer"); 
    architect.setSalary(100000);
    architect.setDate(Date(30, 120, 20030));
    architect.setDeptNum(100);
    architect.setSupervisor("Jujujuno");
    architect.setSalaryInc(400.0);
    architect.setYoe(4);
    architect.printInfo();
}