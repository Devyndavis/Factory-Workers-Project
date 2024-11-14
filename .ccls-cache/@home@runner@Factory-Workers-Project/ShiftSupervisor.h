#ifndef SHIFTSUPERVISOR_H
#define SHIFTSUPERVISOR_H

#include "Employee.h"

class ShiftSupervisor : public Employee {
private:
    double annualSalary;
    double annualBonus;

public:
    // Constructor
    ShiftSupervisor(string n, int en, string hd, double salary, double bonus)
        : Employee(n, en, hd), annualSalary(salary), annualBonus(bonus) {}

    // Accessors (Getters)
    double getAnnualSalary() const { return annualSalary; }
    double getAnnualBonus() const { return annualBonus; }

    // Mutators (Setters)
    void setAnnualSalary(double salary) { annualSalary = salary; }
    void setAnnualBonus(double bonus) { annualBonus = bonus; }

    // Override print() function
    void print() const override {
        Employee::print();
        cout << "Annual Salary: $" << annualSalary << endl;
        cout << "Annual Bonus: $" << annualBonus << endl;
    }
};

#endif