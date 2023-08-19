#include "std_lib_facilities.h"

int main()
{

    cout << "Time to print out the alphabet with their corresponding integers... YAAAYYY!\n";

    char alpha{'A'};

    while(alpha <= 'z')
    {
        cout << alpha << '\t' << static_cast<int>(alpha) << '\n';
        ++alpha;
    }

    return 0;
}
