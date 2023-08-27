#include "std_lib_facilities.h"


int main()
{
    vector<string> nums{"zero", "one", "two", "three", "four",
                        "five", "six", "seven", "eight", "nine"};

    string userInput{};

    while (true) {
        cout << "Which enter a number 0 - 9 and I will spell it out for you.\n"
             << "Enter 'quit' if you wish to quit.:\n";

        cin >> userInput;

        for(int i{0}; i < nums.size(); ++i)
        {
            if (userInput == nums[i])
            {
                cout << i << '\n';
            }
            else if (userInput == "quit")
            {
                cout << "Thanks for using the spell a number out program... What kind of name is that!?\n";
                return 0;
            }
            else if (to_string(i) == userInput) // If it reaches the end of the for-ranged loop.
            {
                cout << nums[i] << '\n';
            }
        }
    }
}
