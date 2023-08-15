#include "std_lib_facilities.h"

int main()
{
    cout << "Hey you... I can change spelled out numbers into arabic numbers.\n"
         << "Give it a shot. When you want to stop just say 'stop'.\n"
         << "Just remember to press 'enter' after you are done typing.\n"
         << "Also please enter numbers zero to nine. So if you want 10, type 'one zero'\n";

    string userNum{};

    int tries{0};

    while (cin >> userNum)
    {
        if (userNum == "zero" || userNum == "Zero")
        {
            std::cout << 0 << ' ';
        }

        else if (userNum == "one" || userNum == "One")
        {
            std::cout << 1 << ' ';
        }

        else if (userNum == "two" || userNum == "Two")
        {
            std::cout << 2 << ' ';
        }

        else if (userNum == "three" || userNum == "Three")
        {
            std::cout << 3 << ' ';
        }

        else if (userNum == "four" || userNum == "Four")
        {
            std::cout << 4 << ' ';
        }

        else if (userNum == "five" || userNum == "Five")
        {
            std::cout << 5 << ' ';
        }

        else if (userNum == "six" || userNum == "Six")
        {
            std::cout << 6 << ' ';
        }

        else if (userNum == "seven" || userNum == "Seven")
        {
            std::cout << 7 << ' ';
        }

        else if (userNum == "eight" || userNum == "Eight")
        {
            std::cout << 8 << ' ';
        }

        else if (userNum == "nine" || userNum == "Nine")
        {
            std::cout << 9 << ' ';
        }

        else if (userNum == "stop" || userNum == "Stop")
        {
            cout << "Thanks for using my services. Come again. \n";
            break;
        }

        else
        {
            if (tries == 0)
            {
                cout << "Please only type numbers from zero to nine. I can't handle anything else.\n"
                     << "Please forgive me.\n";
                tries++;
            }
            else if (tries == 1)
            {
                cout << "I will ask again, please only type numbers zero to nine.\n";
                tries++;
            }
            else if (tries == 2)
            {
                cout << "Maybe you need help spelling the numbers. Here I will help.\n"
                     << "zero, one, two, three, four, five, six, seven, eight, nine\n"
                     << "I hope that helps.\n\n";
                tries++;
            }
            else if (tries == 3)
            {
                cout << "\n\n\n\n\n\n\n...\n\n\n\n";
                tries++;
            }
            else if (tries == 4)
            {
                cout << "Fine... If you don't need my services. You can look else where. Good day sir...\n\n";
                return 0;
            }

        }
    }

    return 0;
}
