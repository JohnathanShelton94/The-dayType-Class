// This is the main function of The dayType Class project

#include "dayType.h"
#include <iostream>
using namespace std;

int main() {
    cout << "Testing the dayType class:\n";

            // constructors
    dayType defaultDay;
    cout << "Default constructor day: ";
    defaultDay.printDay();

                
    string userDay;
    cout << "Enter a day (e.g., Monday): ";
    cin >> userDay;
    dayType userDayType(userDay);
    cout << "User-supplied day: ";
    userDayType.printDay();

            // Display the current day
    cout << "Current day: " << userDayType.getDay() << endl;

            // Display the next day
    cout << "Next day: " << userDayType.getNextDay() << endl;

            // Display the previous day
    cout << "Previous day: " << userDayType.getPreviousDay() << endl;

            // Set current day to Monday and add 4 days
    dayType testDay1("Monday");
    cout << "Set current day to Monday and add 4 days:\n";
    cout << "   Expected day: Friday | Actual day: " << testDay1.addDays(4) << endl;

            // Set current day to Tuesday and add 13 days
    dayType testDay2("Tuesday");
    cout << "Set current day to Tuesday and add 13 days:\n";
    cout << "   Expected day: Monday | Actual day: " << testDay2.addDays(13) << endl;

    return 0;
}
