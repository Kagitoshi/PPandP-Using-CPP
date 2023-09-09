#include <limits>
#include "std_lib_facilities.h"

int main()
{
    vector<double> temps{};

    for(double temp; cin >> temp;)
    {
        temps.push_back(temp);
    }

    double sum{0};
    // - std::numeric_limits<double>::max() gives the most negative number
    double highTemp{- std::numeric_limits<double>::max()};
    double lowTemp{std::numeric_limits<double>::max()};

    for(double x: temps)
    {
        if(x > highTemp)
        {
            highTemp = x;
        }
        if(x < lowTemp)
        {
            lowTemp = x;
        }

        sum += x;
    }

    cout << "High temperature   : " << highTemp << '\n';
    cout << "Low temperature    : " << lowTemp << '\n';
    cout << "Average temperature: " << sum / temps.size() << '\n';

}

