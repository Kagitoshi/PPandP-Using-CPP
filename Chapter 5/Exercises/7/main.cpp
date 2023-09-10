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

        if ( pow(b, 2)-((4 * a) *c) < 0 )
        {
            cout << "The discriminant was below 0.\n"
                 << "Discriminant: "<< pow(b, 2)-((4 * a) *c) << '\n';

            error("How do you know that your results are plausible?\n"
                     "Can you please check that they are correct?\n"
                     "From the variables you gave us the discriminant was below 0.\n" );
        }

        double x1{ (-b + sqrt(pow(b, 2)-((4 * a) *c))) / (2*a)};
        double x2{ (-b - sqrt(pow(b, 2)-((4 * a) *c))) / (2*a)};

        cout << "OK, we calculated your answers.\n"
             << "x1 is: " << x1 << '\n'
             << "x2 is: " << x2 << "\n"
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