#include <cfloat>
#include <numeric>
#include "std_lib_facilities.h"

int main()
{
    constexpr double inchPerFeet{12};
    constexpr double cmPerMeter{100.0};
    constexpr double feetPerMeter(3.2808);

    double length{0};

    string unit{};

    double max{DBL_MIN};
    double min{DBL_MAX};

    vector<double> enteredLength{};


    while (true)
    {
        cout << "This is a tracker for lengths in meters.\n"
             << "While you can enter a different unit of measurement\n"
             << "it will be converted to meters. The units are case sensitive.\n\n";
        cout << "Please enter a length followed but a unit (c, in, ft, m):\n";

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

        //converting the unit to meters
        if (unit == "in")
        {
            length = (length / inchPerFeet) / feetPerMeter;
        }
        else if (unit == "cm")
        {
            length = (length / cmPerMeter);
        }
        else if (unit == "ft")
        {
            length = (length / feetPerMeter);
        }
        else
        {
        }


        // tracking the largest & smallest number entered so far
        if (length < min)
        {
            if(length < 1.0/100 )
            {
                cout << "Wow, that length is pretty close to the shortest length I have seen so far..\n";
            }
            cout << "You have entered " << length << " meters, which is the shortest length so far.\n";
            min = length;
        }
        else if(length > max)
        {
            if((length - max) < 1.0/100 )
            {
                cout << "Wow, that length is pretty close to the longest length I have seen so far.\n";
            }
            cout << "You have entered " << length << " meters, which is the longest length so far.\n";

            max = length;
        }

        //adding numbers to the vector
        enteredLength.push_back(length);

        //loops until accepted answer is inputted.
        while (true)
        {
            cout << "Would you like to input another length(y/n)?:";
            char answer{};
            cin >> answer;

            if (answer == 'y' || answer == 'Y')
            {
                cout << "\n\n\n";
                break;
            }
            else if (answer == 'n'|| answer == 'N')
            {
                cout << "The shortest length you entered was " << min << " meters.\n"
                     << "The longest length you entered was " << max << " meters.\n"
                     << "You have entered " << enteredLength.size() << " values.\n"
                     << "The sum of the values you entered was "
                     << accumulate(enteredLength.begin(), enteredLength.end(), 0.0)
                     << " meters.\n\n";

                cout << "The values you entered were, all in meters: \n";

                //sorting the vector then printing it
                sort(enteredLength.begin(), enteredLength.end());
                for(double i: enteredLength)
                {
                    cout << i << ", ";
                }

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