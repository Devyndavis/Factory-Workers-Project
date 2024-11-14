#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int employeeNumber;
    string hireDate;

public:
    // Constructor
    Employee(string n, int en, string hd) : name(n), employeeNumber(en), hireDate(hd) {}

    // Accessors (Getters)
    string getName() const { return name; }
    int getEmployeeNumber() const { return employeeNumber; }
    string getHireDate() const { return hireDate; }

    // Mutators (Setters)
    void setName(string n) { name = n; }
    void setEmployeeNumber(int en) { employeeNumber = en; }
    void setHireDate(string hd) { hireDate = hd; }

    // Print Function
    virtual void print() const {
        cout << "Name: " << name << endl;
        cout << "Employee Number: " << employeeNumber << endl;
        cout << "Hire Date: " << hireDate << endl;
    }
};

#endif