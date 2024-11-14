#ifndef TEAMLEADER_H
#define TEAMLEADER_H

#include "ProductionWorker.h"

class TeamLeader : public ProductionWorker {
private:
    double monthlyBonus;
    int requiredTrainingHours;
    int attendedTrainingHours;

public:
    // Constructor
    TeamLeader(string n, int en, string hd, int s, double hpr, double bonus, int reqHours, int attHours)
        : ProductionWorker(n, en, hd, s, hpr), monthlyBonus(bonus), requiredTrainingHours(reqHours), attendedTrainingHours(attHours) {}

    // Accessors (Getters)
    double getMonthlyBonus() const { return monthlyBonus; }
    int getRequiredTrainingHours() const { return requiredTrainingHours; }
    int getAttendedTrainingHours() const { return attendedTrainingHours; }

    // Mutators (Setters)
    void setMonthlyBonus(double bonus) { monthlyBonus = bonus; }
    void setRequiredTrainingHours(int reqHours) { requiredTrainingHours = reqHours; }
    void setAttendedTrainingHours(int attHours) { attendedTrainingHours = attHours; }

    // Override print() function
    void print() const override {
        ProductionWorker::print();
        cout << "Monthly Bonus: $" << monthlyBonus << endl;
        cout << "Required Training Hours: " << requiredTrainingHours << endl;
        cout << "Attended Training Hours: " << attendedTrainingHours << endl;
    }
};

#endif