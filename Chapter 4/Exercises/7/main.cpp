#include "std_lib_facilities.h"

int getInt(const string& userInput)
{
    vector<string> nums{"zero", "one", "two", "three", "four",
                        "five", "six", "seven", "eight", "nine"};

    for(int i{0}; i < nums.size(); ++i)
    {
        if (userInput == nums[i])
        {
            return i;
        }

        else if (to_string(i) == userInput) // If it reaches the end of the for-ranged loop.
        {
            return i;
        }
    }

    std::cout << "Couldn't match a number. Please try again!\n";
    return 0;
}


int main()
{
    cout << "Time for the very, very, very simple calculator!\n";

    while (true)
    {
        cout << "Please enter 2 single digit numbers followed by an operator (+, -, *, /).\n"
             << "Enter '!' as the operator if you wish to quit:\n";

        string userInput1{};
        string userInput2{};
        char op{};

        cin >> userInput1 >> op >> userInput2;

        switch (op)
        {
            case '+':
            {
                cout << getInt(userInput1) << " + "  << getInt(userInput2)  <<  " = "
                     << getInt(userInput1) + getInt(userInput2) << "\n\n";
                break;
            }
            case '-':
            {
                cout << getInt(userInput1) << " - "  << getInt(userInput2)  <<  " = "
                     << getInt(userInput1) - getInt(userInput2) << "\n\n";
                break;
            }
            case '*':
            {
                cout << getInt(userInput1) << " * "  << getInt(userInput2)  <<  " = "
                     << getInt(userInput1) * getInt(userInput2) << "\n\n";
                break;
            }
            case '/':
            {
                cout << getInt(userInput1) << " / "  << getInt(userInput2)  <<  " = "
                     << getInt(userInput1) / getInt(userInput2)
                     << " with a remainder of " << getInt(userInput1) % getInt(userInput2) << "\n\n";
                break;
            }
            case '!':
            {
                cout << "Thanks for using the very, very, very simple calculator!\n";
                return 0;
            }
            default:
            {
                cout << "What the heck is " << op << "! Please try again.\n";
            }
        }
    }
}