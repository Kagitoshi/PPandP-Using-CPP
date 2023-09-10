#include "std_lib_facilities.h"

double ctok(double c) // converts Celsius to Kelvin
{
    const double addKelvin{273.15};
    double k = c + addKelvin;
    return k;
}

int main()
{
    const double lowestCTemp{- 273.15};

    double c{0.0}; // declare input variable
    cin >> c; // retrieve temperature to input variable

    if(c <= lowestCTemp)
    {
       error("The lowest temperature Celsius can go is - 273.15.\n"
                "Please enter something higher than - 273.15C.\n");
    }
    double k = ctok(c); // convert temperature
    cout << k << '\n' ; // print out temperature

    return 0;
}