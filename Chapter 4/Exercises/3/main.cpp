#include <numeric>
#include "std_lib_facilities.h"

int main()
{
    double distance{0.0};
    vector<double> cities{};

    while(true)
    {
        cout << "Enter a distance between two cities: ";
        cin >> distance;

        cities.push_back(distance);

        while(true) {
            cout << "Would you like to enter another distance? (y/n)";

            char answer{};
            cin >> answer;

            if (answer == 'y' || answer == 'Y')
            {
                cout << "\n\n\n";
                break;
            }
            else if (answer == 'n' || answer == 'N')
            {
                sort(cities.begin(), cities.end());
                cout << "The sum of those distances is "
                     << std::accumulate(cities.begin(),cities.end(), 0.0) << ".\n"
                     << "The shortest distance entered was " << cities[0] << ".\n"
                     << "The longest distance entered was " << cities[cities.size() - 1] << ".\n"
                     << "The average distance was "
                     << std::accumulate(cities.begin(),cities.end(), 0.0) / static_cast<double>(cities.size())
                     << ".\n" << "\n\n\nThanks for using this program.\n\nTake care!\n";
                return 0;
            } else {
                cout << "Please answer with only 'y' or 'n'.\n\n\n";
            }
        }
    }
}
