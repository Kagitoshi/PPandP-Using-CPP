#include "std_lib_facilities.h"

int main()
{
    cout << "\"Try This\" exercise 1 - Display name and convert age into months\n\n";

    cout << "Please enter your name (followed by 'enter'):\n";
    string firstName{};
    cin >> firstName;

    cout << "Please enter your age (followed by 'enter'):\n";
    double age{};
    cin >> age;

    cout << "Hello, " << firstName <<" (age "<< age << ")\n"
    << "Your age converted into months is " << age * 12 <<".\n\n\n";

    cout << "\"Try This\" exercise 2 - Floating point exercise\n\n";

    cout << "Please enter a floating-point value: ";
    int n{};
    cin >> n;

    double x = n;

    cout << "n == " << n
         << "\nn+1 == " << n+1
         << "\nthree times n == " << 3*n
         << "\ntwice n == " << n+n
         << "\nn squared  == " << n*n
         << "\nhalf of n == "<< x/2
         << "\nsquare root of n == " << sqrt(x)
         << "\nmodulus of n/2 == " << n%2
         << "\n\n\n";

    cout << "\"Try This\" exercise 3.5 - Repeated work detection program\n\n";
    cout << "Type \"quitexit\" to quit the program\n";
    string previous{" "};

    string current{};
    while(cin >> current)
    {
        if (previous == current)
        {
            cout << "repeated word: " << current << '\n';
        }
        else if ( current == "quitexit")
        {
            break;
        }
        previous = current;
    }

    cout << "\"Try This\" exercise 4 - Fix the \"Goodbye, cruel world!\" program\n\n";

    string s {"Goodbye, cruel world!"};
    cout << s << '\n';

    cout << "\"Try This\" exercise 5 - Integer conversions\n\n";

    cout << "Enter a double number followed by 'enter'):\n";
    double d{0};

    while( cin >> d)
    {
        int i = d;
        char c = i;
        int i2 = c;
        cout << " d==" << d
        << " i==" << i
        << " i2==" << i2
        << " char(" << c << ")\n";
        break;
    }

    cout << "End of the program, will try to separate these in the future.\n";
    return 0;
}
