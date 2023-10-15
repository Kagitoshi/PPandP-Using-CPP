#include "std_lib_facilities.h"

//idea stolen from user Chrinkus on GitHub.
string pluralize(int num, string word)
{
    if(num != 1)
    {
        return word + 's';
    }
    else
    {
        return word;
    }

}

int main()
{
    cout << "Please enter up to 4 numbers.\n";

    string userInput{};
    cin >> userInput;

    cout << userInput << " has ";

    switch (userInput.size() - 1)
    {
        case 3:
            cout << userInput[userInput.size() - 4 ]
                 << pluralize(userInput[userInput.size() - 4 ] - '0', " thousand") << " and ";
        case 2:
            cout << userInput[userInput.size() - 3]
                 <<  pluralize(userInput[userInput.size() - 3 ] - '0', " hundred") << " and ";
        case 1:
            cout << userInput[userInput.size() - 2]
                 <<  pluralize(userInput[userInput.size() - 2] - '0', " ten") << " and ";
        case 0:
            cout << userInput[userInput.size() - 1]
                 <<  pluralize(userInput[userInput.size() - 1] - '0', " one") << ".\n";
    }

    return 0;
}
