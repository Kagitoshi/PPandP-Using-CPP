#include "std_lib_facilities.h"

const string duplicatesNumsFound{"There have been duplicate numbers found in your entry.\n"
                                 "Please use each number just one time.\n"};

const string tooManyDigits{"You have entered more than 4 numbers.\n"
                           "Please enter only 4 numbers.\n"};

const string negativeNumbersFound{"You have entered a negative number.\n"
                                  "Please do not enter any negative numbers.\n"};

const string nonIntegersEntered{"Please only enter 4 integers 0-9 with no duplicates.\n"};

vector<int> createTheBullpen()
{
    vector<int> bullpen(4);

    int userInput{};
    cin >> userInput;

    if(userInput < 0)
    {
        throw runtime_error(negativeNumbersFound +
                            "Exception found in createTheBullpen() function.\n");
    }
    else if(userInput > 10000)
    {
        throw runtime_error(tooManyDigits +
                            "Exception found in createTheBullpen() function.\n");
    }
    else if (!cin)
    {
        throw runtime_error(nonIntegersEntered +
                            "Exception found in createTheBullpen() function.\n");
    }

    for(int i{3}; i >= 0 ; --i)
    {

        bullpen[i] = (userInput % 10);
        userInput /= 10;
    }

    for(int i{0}; i < 3; ++i)
    {
        for (int j{1+i}; j < 4; ++j)
        {
            if(bullpen[i] == bullpen[j])
            {
                throw runtime_error(duplicatesNumsFound + "Or you too few of digits have been entered.\n"
                                     "Or a non-integer value was entered.\n"
                                     "Exception found in createTheBullpen() function.\n");
            }
        }
    }

    return bullpen;
}

vector<int> guess()
{
    cout << "Please guess your combination:\n";
    int userGuess{};

    cin >> userGuess;

    if(userGuess < 0)
    {
        throw runtime_error(negativeNumbersFound +
                            "Exception found in guess() function.\n");
    }
    else if(userGuess > 10000)
    {
        throw runtime_error(tooManyDigits +
                            "Exception found in guess() function.\n");
    }
    else if (!cin)
    {
        throw runtime_error(nonIntegersEntered +
                            "Exception found in guess() function.\n");
    }

    vector<int> userGuessVector(4);

    for(int i{3}; i >= 0 ; --i)
    {

        userGuessVector[i] = (userGuess % 10);
        userGuess /= 10;
    }

    for(int i{0}; i < 3; ++i)
    {
        for (int j{1+i}; j < 4; ++j)
        {
            if(userGuessVector[i] == userGuessVector[j])
            {
                throw runtime_error(duplicatesNumsFound + "Or you too few of digits have been entered.\n"
                                    "Or a non-integer value was entered.\n"
                                    "Exception found in guess() function.\n");
            }
        }
    }

    return userGuessVector;
}

int main()
{
    cout << "Let's play Bulls and Cows. Here are the rules:\n"
         << "Tell a friend to enter 4 different numbers(0-9).\n"
         << "No duplicates or negative or "
         << "After they enter 4 different numbers, you have to guess\n"
         << "which numbers are in which spots.\n"
         << "If you guess the spot and number correctly it will count as a bull."
         << "If you guess the number right but incorrect spot, it will count as a cow."
         << "For example if your friend inputs \"1234\"\n"
         << "Then you guess \"1356\" it will count as 1 bull and 1 cow.\n"
         << "\n\n With the rules explained, please have your friend enter the 4 numbers.\n\n";

    vector<int> bullpen{createTheBullpen()};

    int bulls{0};
    int cows{0};

    while(bulls != 4)
    {
        bulls = 0;
        cows = 0;

        vector<int> userGuess{guess()};

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

    for(int i : bullpen)
    {
        cout << i;
    }

    cout << ". \nPlease play again!\n\n";

    return 0;
}
