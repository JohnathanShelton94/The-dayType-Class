// This is the header file of The dayType Class project

#ifndef DAYTYPE_H
#define DAYTYPE_H

#include <string>
using namespace std;

class dayType {
private:
    int currentDay;
    static const string daysOfWeek[7];

public:
        // Constructors
    dayType();

    dayType(string day);

        // Sets the current day to the specified day
    void setDay(string day);

        // Prints the current day
    void printDay() const;

        // Returns the current day as a string
    string getDay() const;

        // Returns the next day as a string
    string getNextDay() const;

        // Returns the previous day as a string
    string getPreviousDay() const;

        // Returns the day after adding a certain number of days to current day
    string addDays(int days) const;
};

#endif
