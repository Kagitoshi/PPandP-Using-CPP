#include "std_lib_facilities.h"

void ctof(double& c) // converts Celsius to Fahrenheit
{
    const double lowestCelsiusTemp{-273.15};
    if(c < lowestCelsiusTemp)
    {
        error("The lowest temperature Celsius can go is - 273.15.\n"
              "Please enter something higher or equal to -273.15C.\n"
              "Exception caught in ctof().\n");
    }

    const double celsiusToFahrenheit{(c * (9.0/5.0)  + 32.0)};
    cout << c << " degrees Celsius converts to " << celsiusToFahrenheit << " degrees Fahrenheit.\n";
    cout << "Please enter another temperature to convert. Enter 'q' as the temperature to quit.\n\n";
}

void ftoc(double& f) // converts Fahrenheit to Celsius
{
    const double lowestFahrenheitTemp{-459.67};
    if(f < lowestFahrenheitTemp)
    {
        error("The lowest temperature Fahrenheit can go is -459.67.\n"
              "Please enter something higher or equal to -459.67f.\n"
              "Exception caught in ftoc().\n");
    }

    const double fahrenheitToCelsius{5.0/9.0 * (f - 32.0)};
    cout << f << " degrees Fahrenheit converts to " << fahrenheitToCelsius << " Celsius.\n";
    cout << "Please enter another temperature to convert. Enter 'q' as the temperature to quit.\n\n";
}

int main()
{
    cout << "Enter your temperature to convert.\n"
            "Enter a character after the temperature(c or k)\n"
            "e.g: -32.0 c - Will convert 32.0 Celsius to Fahrenheit\n"
            "e.g: 100.2 f - Will convert 100.2 Fahrenheit to Celsius\n"
            "Lowest temperature you cna enter for Celsius is -273.15.\n"
            "Lowest temperature you can enter for Fahrenheit is -459.67.\n"
            "Entering 'q' for the temperature will exit out of the program:\n\n";

    while(true)
    {
        double degrees{0.0}; // declare input variable
        char temp{};
        cin >> degrees >> temp; // retrieve temperature to input variable

        if (temp == 'c' || temp == 'C')
        {
            ctof(degrees);
        }
        else if(temp == 'f' || temp == 'F')
        {
            ftoc(degrees);
        }
        else if (temp == 'q' || temp == 'Q' )
        {
            cout << "Thanks for using this converter. See you next time.\n";
            return 0;
        }
        else
        {
            cout << "Please only enter 'c' or 'f'.\n Please try again.\n\n";
        }
    }
}