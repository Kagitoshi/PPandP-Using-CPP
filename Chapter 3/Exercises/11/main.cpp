#include "std_lib_facilities.h"

int main()
{
    cout << "How many pennies do you have?\n";

    int pennies{0};
    cin >> pennies;

    cout << "How many nickles do you have?\n";

    int nickles{0};
    cin >> nickles;

    cout << "How many dimes do you have?\n";

    int dimes{0};
    cin >> dimes;

    cout << "How many quarters do you have?\n";

    int quarters{0};
    cin >> quarters;

    cout << "How many half dollars do you have?\n";

    int halfDollars{0};
    cin >> halfDollars;

    if (pennies == 1)
    {
        cout << "You have one penny.\n";
    }
    else
    {
        cout << "You have " << pennies << " pennies.\n";
    }

    if(nickles == 1)
    {
        cout << "You have one nickle.\n";
    }
    else
    {
        cout << "You have " << nickles<< " nickles.\n";
    }

    if( dimes == 1)
    {
        cout << "You have one dime.\n";
    }
    else
    {
        cout << "You have " << dimes << " dimes.\n";
    }

    if( quarters == 1)
    {
        cout << "You have one quarter.\n";
    }
    else
    {
        cout << "You have " << quarters << " quarters.\n";
    }

    if( halfDollars == 1)
    {
        cout << "You have one half dollar.\n";
    }
    else
    {
        cout << "You have " << halfDollars << " half dollars.\n";
    }

    int total{pennies + (nickles * 5) + (dimes * 10) + (quarters * 25) + (halfDollars * 50)};
    int dollars{total / 100};
    int cents {total - (dollars * 100)};

    cout << "You have a total value, in cents, is " << total << " cents.\n"
         << "In dollars, the value comes out to $" << dollars << '.' << cents << ".\n";

    return 0;
}
