#include "std_lib_facilities.h"

int main()
{
    cout << "\nI will place three numbers of your choosing in numerical order\n"
         << "Just for you. No charge. Promise. SCOUTS HORNOR!!!\n";

    cout << "Please enter an integer: ";
    int val1{0};
    cin >> val1;

    cout << "Please enter a second integer: ";
    int val2{0};
    cin >> val2;

    cout << "Please enter a third integer: ";
    int val3{0};
    cin >> val3;

    cout << "\nHere you go.\n";

    if (val1 > val2)
    {
        swap(val1, val2);
    }

    if (val1 > val3)
    {
        swap(val1, val3);
    }

    if (val2 > val3)
    {
        swap(val2, val3);
    }

    cout << val1 << ", " << val2 << ", " << val3 << '\n';
    cout << "No thanks is necessary. Move along now. Have a nice day.\n";

    return 0;
}
