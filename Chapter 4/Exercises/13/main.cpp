#include "std_lib_facilities.h"


int main()
{
    cout << "Please allow me to find all of your prime numbers\n"
         << "between 1 and a number of your choosing. Please enter the\n"
         << "max number I should look for primes to: ";

    int max{};
    cin >> max;

    bool primes[max + 1];

    for(int i{0}; i <= max; ++i)
    {
        primes[i] = true;
    }

    primes[0] = false;
    primes[1] = false;

    for (int i {2}; i <= max; ++i)
    {
        if(primes[i])
        {
            for(int j{i * i}; j <= max; j += i)
            {
                cout << j << " is not a prime number\n";
                primes[j] = false;
            }
        }
    }


    int primeNumCount{0};

    for (int i{0}; i <= max; ++i)
    {
        if(primes[i])
        {
            cout << i << ' ';
            ++primeNumCount;
        }
    }

    cout << "\nThere are " << primeNumCount << " prime numbers found between 1 - "<< max << ".\n";

    return 0;
}
