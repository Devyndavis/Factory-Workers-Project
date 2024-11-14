#include <iostream>
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
#include "TeamLeader.h"

int main() {
    // Create ProductionWorker objects
    ProductionWorker pw1("Paul Jones", 12345, "10/28/2024", 1, 20.25);
    ProductionWorker pw2("Harriet Smith", 54321, "6/15/2024", 2, 25.50);

    // Create ShiftSupervisor object
    ShiftSupervisor ss("Elmer Velasquez", 100325, "1/17/2024", 70000.00, 1000.00);

    // Create TeamLeader object
    TeamLeader tl("Mike Rogers", 64327, "2/7/2024", 2, 25.50, 150.00, 20, 10);

    // Print reports for each employee
    cout << "\nProduction Worker 1:" << endl;
    pw1.print();
    cout << "\nProduction Worker 2:" << endl;
    pw2.print();
    cout << "\nShift Supervisor:" << endl;
    ss.print();
    cout << "\nTeam Leader:" << endl;
    tl.print();

    return 0;
}