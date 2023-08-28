#include "std_lib_facilities.h"


void byRice()
{
    cout << "Please enter the amount of rice and I will calculate how approximately how many\n"
             << "squares there are.\n";

    long long rice{};
    cin >> rice;

    int squares{1};
    long long doubleTheNumber{1};

    for (long long i{1}; i < rice; i += doubleTheNumber)
    {

        cout << i << " grain(s) of rice will be approximately " << squares++ << " square(s).\n";

        doubleTheNumber *= 2;
    }

    cout << rice << " grains of rice amounts to approximately " << squares << " squares.\n\n";

    cout << "How would you like to calculate next, by rice or by squares?\n"
         << "Enter 1 to enter the amount of rice to see how many squares it would take.\n"
         << "Enter 2 to enter the amount of squares to see how much rice he will get.\n"
         << "Enter 3 to quit.\n";
}

void bySquares()
{
    cout << "Please enter the amount of squares and I will calculate how much rice to give.\n";

    int squares{};
    cin >> squares;

    long long rice{0};
    long long doubleTheNumber{1};

    for (int i{1}; i <= squares; ++i)
    {
        rice += doubleTheNumber;

        cout << i << " square(s) will equal " << rice << " grain(s) of rice. Which is "
             << doubleTheNumber << " more than before.\n";

        doubleTheNumber *= 2;
    }

    cout << "How would you like to calculate next, by rice or by squares?\n"
         << "Enter 1 to enter the amount of rice to see how many squares it would take.\n"
         << "Enter 2 to enter the amount of squares to see how much rice he will get.\n"
         << "Enter 3 to quit.\n";
}

int main()
{
    cout << "There is an old store that an emperor wanted to thank the inventor of\n"
         << "the game of chess and asked the inventor to name his reward.\n"
         << "The inventor asked for one grain of rice for the first square, 2 for the second,\n"
         << "4 for the third, and so on, doubling for each of the 64 squares. \n\n"
         << "Let's play around with this idea and see how many squares and or rice it will take\n"
         << "to reach certain amounts. \n\n"
         << "Would you like to calculate it by rice or by squares?\n"
         << "Enter 1 to enter the amount of rice to see how many squares it would take.\n"
         << "Enter 2 to enter the amount of squares to see how much rice he will get.\n"
         << "Enter 3 to quit.\n";

    int choice{};

    while (true)
    {    cin >> choice;

        switch (choice)
        {
            case 1:
                byRice();
                break;
            case 2:
                bySquares();
                break;
            case 3:
                cout << "Thanks for using this program.\n";
                return 0;
            default:
                cout << "You have 3 choices, 1, 2 , or 3. Please choice one of those.\n\n";
        }
    }
}
