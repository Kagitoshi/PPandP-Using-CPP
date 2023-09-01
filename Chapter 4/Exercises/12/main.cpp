#include "std_lib_facilities.h"

int main()
{
    cout << "Please allow me to find all of your prime numbers\n"
         << "between 1 and a number of your choosing. Please enter the\n"
         << "max number I should look for primes to: ";

    int max{};
    cin >> max;

    vector<int> primes{};

    int primeNumCount{};

    for (int i {1}; i <= max; ++i)
    {
        for(int j{1}; j <= i; ++j)
        {
            if(i % j == 0 && i == j && j != 1)
            {
                primes.push_back(i);

                ++primeNumCount;
            }
            else if(i % j == 0 && j != i && j != 1)
            {
                break;
            }
        }
    }

    cout << "There are " << primeNumCount << " prime numbers found between 1 - "<< max << ".\n";

    for (int i: primes)
    {
        cout << i << ' ';
    }

    cout << '\n';

    return 0;
}
