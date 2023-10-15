#include "std_lib_facilities.h"

int permutation(int a, int b)
{
    int numerator{1};
    int denominator{1};

    for (int i{2}; i <= a; ++i)
    {
        numerator *= i;
    }

    for (int i{2}; i <= a - b; ++i)
    {
        denominator *= i;
    }

    return numerator / denominator;
}

int combo(int a, int b)
{
    int numerator{permutation(a, b)};
    int denominator{1};

    for (int i{2}; i <= b; ++i)
    {
        denominator *= i;
    }

    return numerator / denominator;
}

int main()
{
    std::cout << "Welcome to the Permutation and Combo calculator!\n";

while(true)
{
    std::cout << "Choose from the following that you would like to calculate:\n"
              << "For permutation: Press 1\n"
              << "For combination: Press 2\n"
              << "To quit        : Press 3\n";

    int usersChoice{0};
    cin >> usersChoice;

    if(usersChoice == 1)
    {
        while(true)
        {
            int possibleNumbers{};
            int neededQuantityOfNumbers{};

            cout << "Enter how many possible numbers there are:\n";
            cin >> possibleNumbers;

            cout << "Enter how many numbers are needed:\n";
            cin >> neededQuantityOfNumbers;

            if(possibleNumbers < neededQuantityOfNumbers)
            {
                cout << "Your possible number needs to be equal to greater than the numbers you need.\n"
                     << "Please try again!\n\n";
            }

            else if (!cin)
            {
                cout << "Please enter only valid positive integers.\n"
                     << "Please try again!\n\n";
            }

            else
            {
                cout << "There are " << permutation(possibleNumbers, neededQuantityOfNumbers) << " permutations.\n";
                break;
            }

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

    }

    else if (usersChoice == 2)
    {
        while(true)
        {
            int possibleNumbers{};
            int neededQuantityOfNumbers{};

            cout << "Enter how many possible numbers there are:\n";
            cin >> possibleNumbers;

            cout << "Enter how many numbers are needed:\n";
            cin >> neededQuantityOfNumbers;

            if(possibleNumbers < neededQuantityOfNumbers)
            {
                cout << "Your possible number needs to be equal to greater than the numbers you need.\n"
                     << "Please try again!\n\n";
            }

            else if (!cin)
            {
                cout << "Please enter only valid positive integers.\n"
                     << "Please try again!\n\n";
            }

            else
            {
                cout << "There are " << combo(possibleNumbers, neededQuantityOfNumbers) << " combinations.\n";
                break;
            }

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    else if(usersChoice == 3)
    {
        cout << "Thank you for using my calculator!\n";
        return 0;
    }

    else
    {
        cout << "That choice was invalid.\n"
             << "Please enter a choice form the menu.\n\n";
    }

    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

}