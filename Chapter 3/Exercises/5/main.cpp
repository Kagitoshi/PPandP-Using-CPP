// number comparison program with floating doubles
#include "std_lib_facilities.h"


int main()
{
    cout << "Please enter an integer: ";
    double val1{0};
    cin >> val1;

    cout << "Please enter a second integer: ";
    double val2{0};
    cin >> val2;

    if(val1 > val2)
    {
        cout << val1 << " is the larger number.\n"
             << val2 << " is the smaller number.\n"
             << "The sum of the two is " << val1 + val2 << ".\n"
             << "The difference between the two numbers is " << val1 - val2 << ".\n"
             << "The product of the two is " << val1 * val2 << ".\n"
             << "The ratio of the two is " << val1 / val2 << ".\n";
    }
    else if (val1 < val2)
    {
        cout << val2 << " is the larger number.\n"
             << val1 << " is the smaller number.\n"
             << "The sum of the two is " << val1 + val2 << ".\n"
             << "The difference between the two numbers is " << val2 - val1 << ".\n"
             << "The product of the two is " << val1 * val2 << ".\n"
             << "The ratio of the two is " << val2 / val1 << ".\n";
    }
    else
    {
        cout << "You entered equal numbers.\n"
             << "The sum of the two is " << val1 + val2 << ".\n"
             << "The difference between the two numbers is zero.\n"
             << "The product of the two is " << val1 * val2 << ".\n"
             << "The ratio of the two is one.\n";
    }


    return 0;
}
