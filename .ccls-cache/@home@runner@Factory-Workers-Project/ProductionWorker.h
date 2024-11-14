#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H

#include "Employee.h"

class ProductionWorker : public Employee {
private:
    int shift; // 1 for Day, 2 for Night
    double hourlyPayRate;

public:
    // Constructor
    ProductionWorker(string n, int en, string hd, int s, double hpr)
        : Employee(n, en, hd), shift(s), hourlyPayRate(hpr) {}

    // Accessors (Getters)
    int getShift() const { return shift; }
    double getHourlyPayRate() const { return hourlyPayRate; }

    // Mutators (Setters)
    void setShift(int s) { shift = s; }
    void setHourlyPayRate(double hpr) { hourlyPayRate = hpr; }

    // Override print() function
    void print() const override {
        Employee::print();
        cout << "Shift: " << (shift == 1 ? "Day" : "Night") << endl;
        cout << "Hourly Pay Rate: $" << hourlyPayRate << endl;
    }
};

#endif