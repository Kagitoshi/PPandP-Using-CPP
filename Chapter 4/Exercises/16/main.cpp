#include "std_lib_facilities.h"

int main()
{
    cout << "Please allow me to find X number of prime numbers\n"
         << "starting from 1 Please enter the\n"
         << "number of prime numbers I should find: ";

    int numOfPrimesToFind{};
    cin >> numOfPrimesToFind;

    vector<int> primes{};

    int primeNumCount{0};
    int primeCheck{2};

    while(primeNumCount < numOfPrimesToFind)
    {

        for(int j{1}; j <= primeCheck; ++j)
        {
            if(primeCheck % j == 0 && primeCheck == j && j != 1)
            {
                primes.push_back(primeCheck);

                ++primeNumCount;
            }
            else if(primeCheck % j == 0 && j != primeCheck && j != 1)
            {
                break;
            }
        }
        primeCheck++;
    }

    cout << "We found the first " << primeNumCount << " prime numbers starting from 1.\n";

    for (int i: primes)
    {
        cout << i << ' ';
    }

    cout << '\n';

    return 0;
}