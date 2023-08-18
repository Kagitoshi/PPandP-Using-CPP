#include <cfloat>
#include "std_lib_facilities.h"


int main()
{
    string userNum1{};
    double max{DBL_MIN};
    double min{DBL_MAX};


    while(true) {
        cout << "Please enter a double-float number (type '|' if you wish to quit): ";
        cin >> userNum1;
        if (userNum1 == "|")
        {
            break;
        }
        else
        {
        }

        if (stod(userNum1) < min)
        {
            if((max - stod(userNum1)) < 1.0/100 )
            {
                cout << "Wow, that number is pretty close to the smallest number I have seen so far..\n";
            }
            cout << "You have entered " << stod(userNum1) << ", which is the smallest number so far.\n";
            min = stod(userNum1);
        }
        else if(stod(userNum1) > max)
        {
            if((stod(userNum1) - max) < 1.0/100 )
            {
                cout << "Wow, those numbers are pretty close.\n";
            }
            cout << "You have entered " << stod(userNum1) << ", which is the largest number so far.\n";

            max = stod(userNum1);
        }
        else if (stod(userNum1) == max)
        {
            cout << "The number you entered is equal the largest number, which is " << max << ".\n";
        }
        else if (stod(userNum1) == min)
        {
            cout << "The number you entered is equal the lowest number, which is " << min << ".\n";
        }
        else
        {
            cout << "The number you have entered is " << stod(userNum1) << ".\n"
                 << "Which is " << stod(userNum1) - min << " more than the smallest number I have seen and is\n"
                 << max - stod(userNum1)  << " less than the largest number I have seen.\n";
        }

    }

    cout << "\nThanks for using \"Enter a Number\". See you next time!";

    return 0;
}