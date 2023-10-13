#include "std_lib_facilities.h"

class Name_value
{
public:
    string name;
    int score;
};

int main()
{
    cout << "Let's enter some names and scores.\n";

    cout << "Please enter a name followed by a space and score\n"
         << "e.g: Loki 98. Enter 'NoName 0' to quit.\n";

    vector<Name_value> namesAndScores{};

    Name_value temp{};

    cin >> temp.name >> temp.score;

    namesAndScores.push_back(temp);

    if(temp.name == "NoName" && temp.score == 0)
    {
        cout << "Thanks for using this program, But you didn't actually use it.\n";

        cout << "Anyways... Thanks again and please use this program again.\n"
             << "And actually use it next time...\n";
        return 0;
    }



    while(true)
    {
        cout << "Please enter a name followed by a space and score\n"
             << "e.g: Loki 98\n";

        cin >> temp.name >> temp.score;

        if(temp.name == "NoName" && temp.score == 0)
        {
            cout << "Thanks for using this program. Here is what has been entered.\n";

            for(int i{0}; i < namesAndScores.size(); ++i)
            {
                cout << namesAndScores[i].name << ' ' << namesAndScores[i].score << '\n';
            }

            cout << "Thanks again and please use this program again.\n";
            return 0;
        }

        for(int i{0}; i < namesAndScores.size(); ++i)
        {
            if (namesAndScores[i].name == temp.name)
            {
                cout << "This name has already been entered.\n"
                     << "Please enter another name.\n\n";
                break;
            }
            else if(i == namesAndScores.size() - 1)
            {
                namesAndScores.push_back(temp);
                break;
            }
        }
    }
}