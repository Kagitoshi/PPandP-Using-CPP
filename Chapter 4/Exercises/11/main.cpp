#include "std_lib_facilities.h"

int main()
{
    vector<int> primes{};

    int primeNumCount{};

    for (int i {1}; i <= 100; ++i)
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

    cout << "There are " << primeNumCount << " prime numbers found between 1 - 100.\n";

    for (int i: primes)
    {
        cout << i << ' ';
    }

    cout << '\n';

    return 0;
}
