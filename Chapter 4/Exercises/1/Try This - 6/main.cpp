#include "std_lib_facilities.h"

int main()
{
    vector<string> words{};
    for(string temp; cin >> temp; )
    {
        words.push_back(temp);
    }

    sort(words);

    cout << "Number of words: " << words.size()<< '\n';

    string disliked1 {"broccoli"};
    string disliked2 {"mayo"};
    string disliked3 {"pain"};

    for(int i{0}; i < words.size(); ++i)
    {
        if (i == 0 || words[i -1] != words[i])
        {
            if (words[i] == disliked1 || words[i] == disliked2 || words[i] == disliked3)
            {
                cout << "BLEEP" << '\n';
            }
            else
            {
                cout << words[i] << '\n';
            }
        }
    }

    keep_window_open();

    return 0;
}
