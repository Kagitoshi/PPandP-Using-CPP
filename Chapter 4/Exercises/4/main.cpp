#include "std_lib_facilities.h"

int main()
{
    int guess{50};
    int searchingNum{25};

    int tries{1};

    std::cout << "Let me try to guess a number you are thinking 1-100.\n"
              << "After 7 'yes or no' questions I will guess your number.\n\n";

    while (tries < 8)
    {
        cout << "Is your number less than " << guess << "? (y/n)\n";

        char answer{};
        cin >> answer;

        if (answer == 'y')
        {
            guess -= searchingNum;
            searchingNum += 1;
            searchingNum /= 2;
        }
        else
        {
            guess += searchingNum;
            searchingNum += 1;
            searchingNum /= 2;
        }

        ++tries;
    }

    cout << "Your number is " << guess << ".\n";

    return 0;
}
