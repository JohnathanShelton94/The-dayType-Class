// This is the implementation file of The dayType Class project

#include "dayType.h"
#include <iostream>
using namespace std;

const string dayType::daysOfWeek[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

        // Constructors
dayType::dayType() : currentDay(0) {}


dayType::dayType(string day) {
    setDay(day);
}

        // Sets the current day
void dayType::setDay(string day) {
    for (int i = 0; i < 7; ++i) {
        if (daysOfWeek[i] == day) {
            currentDay = i;
            return;
        }
    }
    currentDay = 0;         // Default to Sunday if input is invalid
}

        // Prints the current day
void dayType::printDay() const {
    cout << daysOfWeek[currentDay] << endl;
}

        // Returns the current day
string dayType::getDay() const {
    return daysOfWeek[currentDay];
}

        // Returns the next day
string dayType::getNextDay() const {
    return daysOfWeek[(currentDay + 1) % 7];
}

        // Returns the previous day
string dayType::getPreviousDay() const {
    return daysOfWeek[(currentDay + 6) % 7];
}

        // Adds days and returns the resulting day
string dayType::addDays(int days) const {
    return daysOfWeek[(currentDay + days) % 7];
}
