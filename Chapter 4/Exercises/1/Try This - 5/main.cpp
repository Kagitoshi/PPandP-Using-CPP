#include "std_lib_facilities.h"

int square(int x)
{
    int square{0};

    for(int i{1}; i <= x; ++i )
    {
        square += x;
    }

    return square;
}


int main()
{
    cout << "Let's re-make the world's first program to run on a stored-program computer.\n\n";
    
    for (int x{0}; x < 100; ++x)
    {
        cout << x << '\t' << square(x) << '\n';
    }

    return 0;
}
