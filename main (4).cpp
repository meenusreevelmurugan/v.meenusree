/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/* v.meenusree
vivekanandha college of engineering for women*/

#include <iostream>

using namespace std;

void generateDailyReport(const string& location) {
    // Code to generate daily report for the given location
    cout << "Generating daily report for " << location << endl;
}

void generateWeeklyReport(const string& location) {
    // Code to generate weekly report for the given location
    cout << "Generating weekly report for " << location << endl;
}

void generateMonthlyReport(const string& location) {
    // Code to generate monthly report for the given location
    cout << "Generating monthly report for " << location << endl;
}

int main() {
    string location;
    int reportType;

    cout << "Enter your location: ";
    getline(cin, location);

    cout << "Select report type:" << endl;
    cout << "1. Daily report" << endl;
    cout << "2. Weekly report" << endl;
    cout << "3. Monthly report" << endl;
    cout << "Enter your choice: ";
    cin >> reportType;

    // Generate report based on user's choice
    switch (reportType) {
        case 1:
            generateDailyReport(location);
            break;
        case 2:
            generateWeeklyReport(location);
            break;
        case 3:
            generateMonthlyReport(location);
            break;
        default:
            cout << "Invalid choice. Please select a valid report type." << endl;
            break;
    }

    return 0;
}