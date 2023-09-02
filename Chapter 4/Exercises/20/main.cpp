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
        cout << "Please enter the name of the person's score you wish to check.\n"
             << "Enter 'NoName' to quit the program.\n";

        cin >> userName;

        for (int i{0}; i < names.size(); ++i)
        {
            if (userName == "NoName")
            {
                cout << "Thank you for using this application\n";
                return 0;
            }

            if (names[i] == userName)
            {
                cout << names[i] << " has a score of " << scores[i] << ".\n";
            }
            else
            {
                cout << "The name " << userName << " was not entered into the database.\n"
                     << "Please try again.\n\n";
            }
        }
    }
}
