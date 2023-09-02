#include "std_lib_facilities.h"

int main()
{
    cout << "Let's enter some names and scores.\n";

    vector<string> names{};
    vector<int> scores{};

    cout << "Please enter a name followed by a space and score\n"
         << "e.g: Loki 98. Enter 'NoName 0' to stop inputting names.\n";

    string userName{};
    int userScore{};

    cin >> userName >> userScore;

    if(userName == "NoName" && userScore == 0)
    {
        cout << "Thanks for using this program, But you didn't actually use it.\n";

        cout << "Anyways... Thanks again and please use this program again.\n"
             << "And actually use it next time...\n";
        return 0;
    }

    names.push_back(userName);
    scores.push_back(userScore);

    while(true)
    {
        cout << "Please enter a name followed by a space and score\n"
             << "e.g: Loki 98. Enter 'NoName 0' to stop inputting names.\n";

        cin >> userName >> userScore;

        if(userName == "NoName" && userScore == 0)
        {
            cout << "Thanks for using this program. Here is what has been entered.\n";

            for(int i{0}; i < names.size(); ++i)
            {
                cout << names[i] << ' ' << scores[i] << '\n';
            }

            cout << "You can now enter names to check scores!\n";
            break;
        }

        for(int i{0}; i < names.size(); ++i)
        {
            if (names[i] == userName)
            {
                cout << "This name has already been entered.\n"
                     << "Please enter another name.\n\n";
                break;
            }
            else if(i == names.size() - 1)
            {
                names.push_back(userName);
                scores.push_back(userScore);
                break;
            }
        }
    }

    while(true)
    {
        cout << "Please enter a score to see all the people that got that score.\n"
             << "Enter '4242' to quit the program.\n";

        cin >> userScore;
        bool found{false};

        for (int i{0}; i < scores.size(); ++i)
        {
            if (userScore == 4242)
            {
                cout << "Thank you for using this application\n";
                return 0;
            }

            if (scores[i] == userScore)
            {
                cout << names[i] <<  ".\n";
                found = true;
            }
            else if (!found && i == scores.size() - 1)
            {
                cout << "No one has gotten the score of " << userScore << " within the database.\n"
                     << "Please try again.\n\n";
            }
        }
    }
}
