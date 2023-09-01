
#include "std_lib_facilities.h"

int main()
{
    string userWord{0};

    unsigned long long max{0};
    unsigned long long min{ULLONG_MAX};

    string longestWord{};
    string shortestWord{};

    vector<string> listOfWords{};

    while (true)
    {
        cout << "This is a tracker for lengths of words.\n"
             << "Please enter a word followed by the 'Enter' key:\n";

        cin >> userWord;

        // tracking the longest & shortest word entered so far
        if (userWord.size() < min)
        {
            if(userWord.size() < 1/100 )
            {
                cout << "Wow, that length is pretty close to the shortest length I have seen so far..\n";
            }
            cout << "You have entered " << userWord << ", which is the shortest word so far.\n";
            min = userWord.size();
            shortestWord = userWord;
        }
        else if(userWord.size() > max)
        {
            if((userWord.size() - max) < 1/100 )
            {
                cout << "Wow, that length is pretty close to the longest length I have seen so far.\n";
            }
            cout << "You have entered " << userWord << ", which is the longest word so far.\n";

            max = userWord.size();
            longestWord = userWord;
        }

        //pushing the numbers to the vector
        listOfWords.push_back(userWord);

        //loops until accepted answer is inputted.
        while (true)
        {
            cout << "Would you like to input another length(y/n)?:";
            char answer{};
            cin >> answer;

            if (answer == 'y' || answer == 'Y')
            {
                cout << "\n\n\n";
                break;
            }
            else if (answer == 'n'|| answer == 'N')
            {

                //sorting the array
                sort(listOfWords.begin(), listOfWords.end());

                //finding the mode
                int currentModeCount{1};
                int highestModeCount{1};
                string modeWord{};

                for(int i{1}; i < listOfWords.size(); ++i)
                {
                    if(listOfWords[i] == listOfWords[i - 1])
                    {
                        ++currentModeCount;
                    }
                    else
                    {
                        if(currentModeCount > highestModeCount)
                        {
                            highestModeCount = currentModeCount;
                            modeWord = listOfWords[i - 1];
                        }

                        currentModeCount = 1;
                    }
                }

                cout << "The shortest word you entered was " << min << " characters long.\n"
                     << "The shortest word was " << shortestWord << ".\n"
                     << "The longest word you entered was " << max << " characters long.\n"
                     << "The longest word was " << longestWord << ".\n"
                     << "You have entered " << listOfWords.size() << " words.\n"
                     << "The mode was " << modeWord << " and it was entered " << highestModeCount
                     << " times.\n\n";


                cout << "The words you entered were: \n";

                //printing the vector

                for(const string& i: listOfWords)
                {
                    cout << i << " ";
                }

                cout << "\n\n\nThanks for using this program.\n\nPEACE!\n";
                return 0;
            }
            else
            {
                cout << "Please answer with only 'y' or 'n'.\n\n\n";
            }

        }
    }
}