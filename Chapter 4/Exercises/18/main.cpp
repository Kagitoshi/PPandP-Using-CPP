#include "std_lib_facilities.h"

int main()
{
    cout << "Let's work with the quadratic equation. Please enter your a, b, and c variables.\n";

    while (true)
    {
        cout << "Enter a: ";
        double a{};
        cin >> a;

        cout << '\n';

        cout << "Enter b: ";
        double b{};
        cin >> b;

        cout << '\n';

        cout << "Enter c: ";
        double c{};
        cin >> c;

        cout << '\n';

        double x1{ (-b + sqrt(pow(b, 2)-((4 * a) *c))) / (2*a)};
        double x2{ (-b - sqrt(pow(b, 2)-((4 * a) *c))) / (2*a)};

        cout << "OK, we calculated your answers.\n"
             << "x1 is: " << x1 << '\n'
             << "x2 is: " << x2 << "\n"
             // The below isn't working correctly. Even though I get the correct answers. Double checking it
             // gets varied results.
//             << "To double-check our work let's plug in those answers into the equation to see if we get zero.\n"
//             << "Using x1 we get: \n"
//             << (a * pow(x1, 2)) + (b * x1) + c << '\n'
//             << "Using x2 we get: \n"
//             << (a * pow(x2, 2)) + (b * x2) + c << "\n\n\n"
             << "Would you like to calculate another equation (y/n)?\n";

        char answer{};

        while(true)
        {

            cin >> answer;
            if (answer == 'y' || answer == 'Y')
            {
                break;
            }
            else if (answer == 'n' || answer == 'N')
            {
                cout << "Thanks for using my quadratic formula application.\n";
                return 0;
            }
            else
            {
                cout << "\n\n\nPlease enter only y or n.\n\n";
                cin.clear();
            }
        }

    }
}
