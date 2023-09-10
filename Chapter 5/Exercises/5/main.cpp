#include "std_lib_facilities.h"

void ctok(double c) // converts Celsius to Kelvin
{
    const double lowestCelsiusTemp{- 273.15};
    if(c <= lowestCelsiusTemp)
    {
        error("The lowest temperature Celsius can go is - 273.15.\n"
              "Please enter something higher than - 273.15C.\n"
              "Exception caught in ctok().\n");
    }

    const double addKelvin{273.15};
    cout << c << " degrees Celsius converts to " << c + addKelvin << " degrees Kelvin.\n";
    cout << "Please enter another temperature to convert. Enter 'q' as the temperature to quit.\n\n";
}

void ktoc(double k) // converts Kelvin to Celsius
{
    const double lowestKelvinTemp{0};
    if(k <= lowestKelvinTemp)
    {
        error("The lowest temperature Kelvin can go is 0.\n"
              "Please enter something higher than 0K.\n"
              "Exception caught in ktoc().\n");
    }

    const double LowestTempInCelsius{-273.15};
    cout << k << " degrees Kelvin converts to " << k + LowestTempInCelsius << " Celsius.\n";
    cout << "Please enter another temperature to convert. Enter 'q' as the temperature to quit.\n\n";
}

int main()
{
    cout << "Enter your temperature to convert.\n"
            "Enter a character after the temperature(c or k)\n"
            "e.g: -32.0 c - Will convert 32.0 Celsius to Kelvin\n"
            "e.g: 100.2 k - Will convert 100.2 Kelven to Celsius\n"
            "Lowest temperature you cna enter for Celsius is -273.15.\n"
            "Lowest temperature you can enter for Kelvin is 0.\n"
            "Entering 'q' for the temperature will exit out of the program:\n\n";

   while(true)
   {
       double degrees{0.0}; // declare input variable
       char temp{};
       cin >> degrees >> temp; // retrieve temperature to input variable

       if (temp == 'c' || temp == 'C')
       {
           ctok(degrees);
       }
       else if(temp == 'k' || temp == 'K')
       {
           ktoc(degrees);
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