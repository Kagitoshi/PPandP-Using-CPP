#include "std_lib_facilities.h"

int main()
{

    cout << "Time to print out the alphabet with their corresponding integers... YAAAYYY!\n";

    for (char alpha{'A'}; alpha <= 'z'; ++alpha)
    {
        cout << alpha << '\t' << static_cast<int>(alpha) << '\n';
    }

    return 0;
}
