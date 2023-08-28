#include "std_lib_facilities.h"

int main()
{
    cout << "Let's play Rock, Paper, Scissors!\n\n"
         << "First to 10, wins!\n"
         << "Please enter a random integer:";

    int userInt{};
    cin >> userInt;

    vector<string> choices{"rock", "paper", "scissors"};
    int randomizer{42};

    int userScore{0};
    int cpuScore{0};

    while(userScore < 10 && cpuScore < 10)
    {
        cout << "Player Score: " << userScore << '\n'
             << "CPU Score: " << cpuScore << "\n\n"
             << "Please choose:\n"
             << "1) Rock\n"
             << "2) Paper\n"
             << "3) Scissors\n\n"
             << "9) Quit\n";

        int userChoice{};
        cin >> userChoice;

        if (userChoice == 9)
        {
            cout << "Really? You gonna quit before we see who gets to 10 first?!\n"
                 << "Boooooo!\n";

            if (userScore > cpuScore)
            {
                cout << "and you quit while you were winning!? That's real cheap.\n"
                     << "I was only " << 10 - cpuScore << " away from winning.\n"
                     << "Take your cheap win... You victory was bad and you should feel bad.\n\n"
                     << "Final Score(Cause you quit):\n"
                     << "Your (cheap) Score: " << userScore << '\n'
                     << "My (not cheap) Score: " << cpuScore << "... plus a million, since you punked out.\n"
                     << "Come back when you want to try again... FAIRLY... You jerk.\n";
            }
            else if (userScore < cpuScore)
            {
                cout << "You quit because you were losing?!.\n"
                     << "You was only " << 10 - userScore << " away from winning.\n"
                     << "You letting me win wasn't fun.\n\n"
                     << "Final Score(Cause you quit):\n"
                     << "Your Score: " << userScore << '\n'
                     << "My Score: " << cpuScore << "... Doesn't matter since you let me win...\n"
                     << "Come back when you want to try again when you want to play till 10... Don't let me win.\n";
            }
            else
            {
                cout << "IT WAS A TIE TOO. YOU QUIT... ON A TIE!\n"
                     << "That's some bull...\n\n"
                     << "Final Score(Cause you quit):\n"
                     << "Your Score: " << userScore << '\n'
                     << "My Score: " << cpuScore << '\n'
                     << "They say getting a tie is like kissing your cousin... I don't like this analogy.\n"
                     << "Next time... Play all the way through...\n";
            }
            return 0;
        }


        randomizer = ((userInt + userChoice)  + randomizer) % 3;

        cout << "You chose: " << choices[userChoice - 1] << ".\n";
        cout << "I chose: " << choices[randomizer] << ".\n";

        if (choices[userChoice -1] == choices[randomizer] )
        {
            cout << "It was a draw. We both selected " << choices[randomizer] << ".\n";
        }
        else if (choices[userChoice -1] == "rock" && choices[randomizer] == "scissors")
        {
            cout << "You win. Rock beats paper all day.\n";
            ++userScore;
        }
        else if (choices[userChoice -1] == "scissors" && choices[randomizer] == "paper")
        {
            cout << "You win. Scissors cuts paper.\n";
            ++userScore;
        }
        else if (choices[userChoice -1] == "paper" && choices[randomizer] == "rock")
        {
            cout << "You win. Paper covers rock.\n";
            ++userScore;
        }
        else
        {
            cout << "I win. " << choices[randomizer] << " beats " << choices[userChoice - 1] << ".\n"
                 << "That's right... My win... All day... Everyday... Right now... In your face... \n";
            ++cpuScore;
        }

        randomizer += 6174;
    }

    if ( userScore > cpuScore )
    {
        cout << "Final Score:\n"
             << "Your Score: " << userScore << '\n'
             << "My Score: " << cpuScore << "\n\n"
             << "Ok... You won fair and square and didn't punk out... I look forward to playing with you again.\n";
    }
    else
    {
        cout << "Final Score:\n"
             << "Your Score: " << userScore << '\n'
             << "My Score: " << cpuScore << "\n\n"
             << "I rock... and roll... All day long, sweet Susie!\n"
             << "Better luck next time... Step your game up.\n";
    }


    return 0;
}
