#include "std_lib_facilities.h"

int main()
{
    constexpr double eurosPerDollar{0.92};
    constexpr double yenPerDollar{145.42};
    constexpr double poundsPerDollar{0.79};

    double value{};

    char currency{};

    while(true)
    {
        cout << "Please enter the value then currency you wish to convert to dollars.(e.g: 54.24p)\n"
             << "y = yen   u = euros   p = pounds\n";

        // loops until proper unit is typed in
        while (true)
        {
            cin >> value >> currency;

            if (currency != 'y' && currency != 'u' && currency != 'p' &&
                currency != 'Y' && currency != 'U' && currency != 'P')
            {
                cout << "Sorry, I don't know a currency called '" << currency <<"'\n";
            }
            else
            {
                break;
            }
        }

        if(currency == 'u' || currency == 'U')
        {
            cout << "That equals $" << value / eurosPerDollar << ".\n";
        }
        else if(currency == 'y' || currency == 'Y')
        {
            cout << "That equals $" <<  value / yenPerDollar << ".\n";
        }
        else
        {
            cout << "That equals $" << value / poundsPerDollar << ".\n";
        }

        while(true)
        {
            cout << "Would you like to convert more currency into dollars?:";

            char answer{};
            cin >> answer;

            if (answer == 'y' || answer == 'Y')
            {
                cout << "\n\n\n";
                break;
            }
            else if (answer == 'n'|| answer == 'N')
            {
                cout << "\n\n\nThanks for using this program.\n\nTake care!\n";
                return 0;
            }
            else
            {
                cout << "Please answer with only 'y' or 'n'.\n\n\n";
            }
        }
    }
}
