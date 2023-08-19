#include "std_lib_facilities.h"

int main()
{
    constexpr double eurosPerDollar{0.92};
    constexpr double yenPerDollar{145.42};
    constexpr double poundsPerDollar{0.79};
    constexpr double yuanPerDollar{7.28};
    constexpr double kronerPerDollar{6.85};

    double value{};

    char currency{};

    while(true)
    {
        cout << "Please enter the value then currency you wish to convert to dollars.(e.g: 54.24p)\n"
             << "y = yen   u = euros   p = pounds   a = yuan   k = kroner\n";

        // loops until proper unit is typed in
        while (true)
        {
            cin >> value >> currency;

            if (currency != 'y' && currency != 'u' && currency != 'p' && currency != 'a' && currency != 'k' &&
                currency != 'Y' && currency != 'U' && currency != 'P' && currency != 'A' && currency != 'K')
            {
                cout << "Sorry, I don't know a currency called '" << currency <<"'\n";
            }
            else
            {
                break;
            }
        }


        switch (currency)
        {
            // yen
            case 'y':
            case 'Y':

                cout << "That equals $" <<  value / yenPerDollar << ".\n";
                break;


                // euro
            case 'u':
            case 'U':
            {
                cout << "That equals $" << value / eurosPerDollar << ".\n";
                break;
            }

                //pounds
            case 'p':
            case 'P':
            {
                cout << "That equals $" << value / poundsPerDollar << ".\n";
                break;
            }

                //yuan
            case 'a':
            case 'A':
            {
                cout << "That equals $" << value / yuanPerDollar << ".\n";
                break;
            }

                // kroner
            case 'k':
            case 'K':
            {
                cout << "That equals $" << value / kronerPerDollar << ".\n";
                break;
            }

            default:
            {
                cout << "????";
                break;
            }
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