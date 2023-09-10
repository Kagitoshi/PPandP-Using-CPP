#include "std_lib_facilities.h"

int main()
{
    cout << "Pizza Mozzarella. Pizza Mozzarella. ELLA ELLA ELLA ELLA!\n"
         << "It is golden ratio time! GO GO, ZEPPELI!\n"
         << "Enter a number and will get you the first Nth of the Fibonacci series.\n";

    int userNum{0};
    cin >> userNum;
    if(!cin)
    {
        throw runtime_error("You entered a non-integer.\n"
                      "Exception caught during user input.\n");
    }

    int num1{1};
    int temp1{0};
    int temp2{0};
    int loop{1};
    while(loop <= userNum)
    {
        cout << num1 << ' ';

        temp2 = num1;
        num1 = (num1 + temp1);
        temp1 = temp2;

        ++loop;
    }

    return 0;
}
