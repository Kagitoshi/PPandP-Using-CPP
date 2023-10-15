#include "std_lib_facilities.h"

const string duplicateLettersFound{"There have been duplicate letters found in your entry.\n"
                                 "Please use each letter just one time.\n"};

const string tooManyLetters{"You have entered more than 4 letters.\n"
                           "Please enter only 4 letters.\n"};

const string tooFewLetters{"You have entered less than 4 letters.\n"
                            "Please enter 4 letters.\n"};

const string nonLettersFound{"You have entered a non-letter character.\n"
                                  "Please only enter letters.\n"};

const string capitalLettersEntered{"Please only enter 4 lower case letters with no duplicates.\n"};

string createTheBullpen()
{
    string bullpen{};
    cin >> bullpen;


    // Checks to see if 4 letters have been entered.
    if(bullpen.size() < 4)
    {
        throw runtime_error(tooFewLetters +
                            "Exception found in createTheBullpen() function.\n");
    }
    else if (bullpen.size() > 4)
    {
        throw runtime_error(tooManyLetters +
                            "Exception found in createTheBullpen() function.\n");
    }
    else
    {
    }

    // Checks to see if characters are lowercase letters.
    for (char i : bullpen)
    {
        if(i >= 'A' && i <= 'Z' )
        {
            throw runtime_error(capitalLettersEntered +
                                "Exception found in createTheBullpen() function.\n");
        }
        else if(i < 'a' || i > 'z')
        {
            throw runtime_error(nonLettersFound +
                                "Exception found in createTheBullpen() function.\n");
        }
        else
        {
        }
    }

//Checks to see if no duplicates have been entered.
    for(int i{0}; i < 3; ++i)
    {
        for (int j{1+i}; j < 4; ++j)
        {
            if(bullpen[i] == bullpen[j])
            {
                throw runtime_error(duplicateLettersFound +
                                    "Exception found in createTheBullpen() function.\n");
            }
        }
    }

    return bullpen;
}

string guess()
{
    cout << "Please guess your combination:\n";

    string userGuess{};
    cin >> userGuess;


    // Checks to see if 4 letters have been entered.
    if(userGuess.size() < 4)
    {
        throw runtime_error(tooFewLetters +
                            "Exception found in guess() function.\n");
    }
    else if (userGuess.size() > 4)
    {
        throw runtime_error(tooManyLetters +
                            "Exception found in guess() function.\n");
    }
    else
    {
    }

    // Checks to see if characters are lowercase letters.
    for (char i : userGuess)
    {
        if(i >= 'A' && i <= 'Z' )
        {
            throw runtime_error(capitalLettersEntered +
                                "Exception found in guess() function.\n");
        }
        else if(i < 'a' || i > 'z')
        {
            throw runtime_error(nonLettersFound +
                                "Exception found in guess() function.\n");
        }
        else
        {
        }
    }

//Checks to see if no duplicates have been entered.
    for(int i{0}; i < 3; ++i)
    {
        for (int j{1+i}; j < 4; ++j)
        {
            if(userGuess[i] == userGuess[j])
            {
                throw runtime_error(duplicateLettersFound +
                                    "Exception found in guess() function.\n");
            }
        }
    }

    return userGuess;
}

int main()
{
    cout << "Let's play Bulls and Cows. Here are the rules:\n"
         << "Tell a friend to enter 4 different lower case letters (a-z).\n"
         << "No duplicates or upper case letters (A-Z) or non-letter characters.\n "
         << "After they enter 4 different letters, you have to guess\n"
         << "which letters are in which spot.\n"
         << "If you guess the spot and letter correctly it will count as a bull."
         << "If you guess the letter right but the incorrect spot, it will count as a cow."
         << "For example if your friend inputs \"abcd\"\n"
         << "Then you guess \"acfg\" it will count as 1 bull and 1 cow.\n"
         << "\n\n With the rules explained, please have your friend enter 4 lower-case letters.\n\n";

    string bullpen{createTheBullpen()};

    int bulls{0};
    int cows{0};

    while(bulls != 4)
    {
        bulls = 0;
        cows = 0;

       string userGuess{guess()};

        for(int i{0}; i < 4; ++i)
        {

            for(int j{3}; j >= 0; --j)
            {
                if( i == j && userGuess[i] == bullpen[j])
                {
                    ++bulls;
                    break;
                }
                else if (userGuess[i] == bullpen[j])
                {
                    ++cows;
                    break;
                }

            }
        }

        cout << "You found " << bulls << " bulls and " << cows << " cows.\n";
    }

    cout << "Congrats! You found all of the bulls! The answer was ";

    for(char i : bullpen)
    {
        cout << i;
    }

    cout << ". \nPlease play again!\n\n";

    return 0;
}