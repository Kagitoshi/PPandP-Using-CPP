#include "std_lib_facilities.h"




int main() {
    vector<int> valuesFromDays(7);
    vector<int> rejectedValues{};

    string userDayOfTheWeek{};
    int userValues{};

    while (true)
    {
        cout << "Please enter a day of the week followed by a value. Enter '|' and a number to quit:\n";

        cin >> userDayOfTheWeek >> userValues;

        if(userDayOfTheWeek == "Sunday" || userDayOfTheWeek == "sunday" ||
           userDayOfTheWeek == "Sun" || userDayOfTheWeek == "sun")
        {
            valuesFromDays[0] += userValues;
        }
        else if(userDayOfTheWeek == "Monday" || userDayOfTheWeek == "monday" ||
                userDayOfTheWeek == "Mon" || userDayOfTheWeek == "mon")
        {
            valuesFromDays[1] += userValues;
        }
        else if(userDayOfTheWeek == "Tuesday" || userDayOfTheWeek == "tuesday" ||
                userDayOfTheWeek == "Tue" || userDayOfTheWeek == "tue")
        {
            valuesFromDays[2] += userValues;
        }
        else if(userDayOfTheWeek == "Wednesday" || userDayOfTheWeek == "wednesday" ||
                userDayOfTheWeek == "Wed" || userDayOfTheWeek == "wed")
        {
            valuesFromDays[3] += userValues;
        }
        else if(userDayOfTheWeek == "Thursday" || userDayOfTheWeek == "thursday" ||
                userDayOfTheWeek == "Thur" || userDayOfTheWeek == "thur")
        {
            valuesFromDays[4] += userValues;
        }
        else if(userDayOfTheWeek == "Friday" || userDayOfTheWeek == "friday" ||
                userDayOfTheWeek == "Fri" || userDayOfTheWeek == "fri")
        {
            valuesFromDays[5] += userValues;
        }
        else if(userDayOfTheWeek == "Sunday" || userDayOfTheWeek == "sunday" ||
                userDayOfTheWeek == "Sun" || userDayOfTheWeek == "sun")
        {
            valuesFromDays[6] += userValues;
        }
        else if(userDayOfTheWeek == "|")
        {
            break;
        }
        else
        {
            cout << userDayOfTheWeek << " is not a valid day of the week. Thus the value will be rejected\n";
            rejectedValues.push_back(userValues);
        }
    }



    cout << "Here is the data that has been collected:\n";
    cout << "Sunday: " << valuesFromDays[0] << '\n';
    cout << "Monday: " << valuesFromDays[1] << '\n';
    cout << "Tuesday: " << valuesFromDays[2] << '\n';
    cout << "Wednesday: " << valuesFromDays[3] << '\n';
    cout << "Thursday: " << valuesFromDays[4] << '\n';
    cout << "Friday: " << valuesFromDays[5] << '\n';
    cout << "Saturday: " << valuesFromDays[6] << '\n';

    cout << "Here are the rejected values.\n";

    for(int i : rejectedValues)
    {
        cout << i << ' ';
    }

    cout << "\nThanks for using this application!\n\n";

    return 0;
}
