#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter an operator (+, -, *, /) followed by two numbers with spaces in between.\n"
         << "For example: * 2 4.5 \n";

    string operation{};
    double val1{};
    double val2{};

    cin >> operation;
    cin >> val1;
    cin >> val2;

    if (operation == "+")
    {
        cout << val1 << " + " << val2 << " = " << val1 + val2 << '\n';
    }

    else if (operation == "-")
    {
        cout << val1 << " - " << val2 << " = " << val1 - val2 << '\n';
    }

    else if (operation == "*")
    {
        cout << val1 << " * " << val2 << " = " << val1 * val2 << '\n';
    }

    else if (operation == "/" && val2 != 0)
    {
        cout << val1 << " / " << val2 << " = " << val1 / val2 << '\n';
    }

    else if (operation == "/" && val2 == 0)
    {
        cout << "Cannot divide by zero.\n";
    }
    else
    {
        cout << "What the heck are you typing?\n";
    }

    return 0;
}
