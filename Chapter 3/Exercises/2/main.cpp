// Miles to Kilometer convertor
#include "std_lib_facilities.h"

int main()
{
    int miles{};
    const double kmToTheMile{1.609};

    cout << "There are 1.609 Kilometers to the mile.\n"
    << "Allow me to convert your miles to kilometers\n\n";

    while (true)
    {
        cout << "Please enter the number of miles to convert to kilometers (type 0 to quit): ";

        cin >> miles;
        if (miles == 0)
        {
            cout << "Thanks for using this program. Bye.\n\n";
            break;
        }
        else
        {
            cout << "There are " << miles * kmToTheMile << " kilometers in " << miles << " miles.\n\n";
        }
    }


    return 0;
}
