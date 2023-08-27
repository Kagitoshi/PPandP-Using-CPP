#include "std_lib_facilities.h"

int main()
{
    cout << "Time for the very, very, very simple calculator!\n";

    while (true)
    {
        cout << "Please enter 2 double numbers followed by an operator (+, -, *, /).\n"
             << "Enter '!' as the operator if you wish to quit:\n";
        double num1{};
        double num2{};
        char op{};

        cin >> num1 >> num2 >> op;

        switch (op)
        {
            case '+':
            {
                cout << num1 + num2 << "\n\n";
                break;
            }
            case '-':
            {
                cout << num1 - num2 << "\n\n";
                break;
            }
            case '*':
            {
                cout << num1 * num2 << "\n\n";
                break;
            }
            case '/':
            {
                cout << num1 / num2 << "\n\n";
                break;
            }
            case '!':
            {
                cout << "Thanks for using the very, very, very simple calculator!\n";
                return 0;
            }
            default:
            {
                cout << "What the heck is " << op << "! Please try again.\n";
            }
        }
    }
}
