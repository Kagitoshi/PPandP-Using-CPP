#include "std_lib_facilities.h"
//------------------------------------------------------------------------------

// deal with nouns
bool nounCheck()
{
    string word{};
    cin >> word;

    if (word == "birds" ||
        word == "fish"  ||
        word == "c++")
    {
        cout << "check " << word << " in nounCheck() return true\n";
        return true;
    }
    else
    {
        cout << "check " << word << " in nounCheck() return false\n";
        return false;
    }

}

//------------------------------------------------------------------------------

// deal with verbs
bool verbCheck()
{
    bool left = nounCheck();      // read and evaluate a Term

    string verb{};
    cin >> verb;

    if(left && verb == "rules" ||
       left && verb == "fly"   ||
       left && verb == "swim")
    {
        cout << "check " << verb << " in verbCheck() return true\n";
        return true;
    }
    else
    {
        cout << "check " << verb << " in verbCheck() return false\n";
        return false;
    }
}

//------------------------------------------------------------------------------

bool conjunctionCheck()
{
    bool left = verbCheck();

    string word{};
    cin >> word;

    if (left && word == "and" ||
        left && word == "or"  ||
        left && word == "but")
    {
        cout << "check " << word << " in conjunctionCheck() return true\n";
        bool checkForNoun{verbCheck()};
        return checkForNoun;
    }

    else if (left && word == ".")
    {
        cout << "check " << word << " in conjunctionCheck() return true\n";
        return true;
    }

    else
    {
        cout << "check " << word << " in conjunctionCheck() return false\n";
        return false;
    }


}

//------------------------------------------------------------------------------

int main()
try
{
    cout << "Enter the sentence.\n\n"
            "When you wish to quit, please enter ';'\n\n";


    while (cin) {

        bool sentenceCheck{conjunctionCheck()};

        string word{};
        cin >> word;

        if (sentenceCheck && word == ".")
        {
            cout << "OK\n\n";
        }
        else
        {
            cout << "Not OK\n\n";
        }

        cin.clear();
    }

    cout << "Thank you for using out grammar checker.\n";
    keep_window_open();
}
catch (exception& e) {
    cerr << "error: " << e.what() << '\n';
    keep_window_open();
    return 1;
}
catch (...) {
    cerr << "Oops: unknown exception!\n";
    keep_window_open();
    return 2;
}

//------------------------------------------------------------------------------