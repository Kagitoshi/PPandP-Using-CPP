#include "std_lib_facilities.h"

int main()
{
    constexpr double cmPerInch{2.54};
    constexpr double cmPerMeter{100.0};
    constexpr double inPerFoot(12.0);

    double length{0};

    string unit{};

    while (true)
    {
        cout << "Please enter a length followed but a unit (c or in):\n";

        // loops until proper unit is typed in
        while (true)
        {
            cin >> length >> unit;

            if (unit != "in" && unit != "cm" && unit != "m" && unit != "ft")
            {
                cout << "Sorry, I don't know a unit called '" << unit <<"'\n";
            }
            else
            {
                break;
            }
        }

        if(unit == "in")
        {
            cout << length << "in == " << cmPerInch * length << "cm\n";
        }
        else if (unit == "cm")
        {
            cout << length << "cm == " << length/cmPerInch << "in\n";
        }
        
        //loops until accepted answer is inputted.
        while (true)
        {
            cout << "Would you like to input another length(y/n)?:";
            char answer{};
            cin >> answer;

            if (answer == 'y' || answer == 'Y')
            {
                break;
            }
            else if (answer == 'n'|| answer == 'N')
            {
                cout << "\n\n\nThanks for using this program.\n\nPEACE!\n";
                return 0;
            }
            else
            {
                cout << "Please answer with only 'y' or 'n'.\n\n\n";
            }

        }
    }
}