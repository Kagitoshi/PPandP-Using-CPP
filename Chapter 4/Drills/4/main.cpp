#include "std_lib_facilities.h"

int main()
{
    string userNum1{};
    string userNum2{};

    while(true) {
        cout << "Please enter your first integer (type '|' if you wish to quit): ";
        cin >> userNum1;
        if (userNum1 == "|")
        {
            break;
        }
        else
        {
        }

        cout << "Please enter your second integer(type '|' if you wish to quit): ";
        cin >> userNum2;
        if (userNum2 == "|")
        {
            break;
        }
        else
        {
        }

        if (stod(userNum1) < stod(userNum2))
        {
            cout << "You have entered " << stod(userNum1) << ", which is the smaller of the two, & "
                 << stod(userNum2) << ", which is larger.\n";
        }
        else if(stod(userNum1) > stod(userNum2))
        {
            cout << "You have entered " << stod(userNum2) << ", which is the smaller of the two & "
                 << stod(userNum1) << ", which is larger.\n";
        }
        else
        {
            cout << "The numbers are equal.\n";
        }

    }

    cout << "\nThanks for using \"Enter 2 Integers\". See you next time!";

    return 0;
}