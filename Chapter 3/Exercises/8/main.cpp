#include "std_lib_facilities.h"

int main()
{
    cout << "Hello and welcome to \"Even or Odd\".\n"
         << "My services are simple we check if your number is even or odd.\n"
         << "No need to think about it. We will do it for you.\n\n"
         << "Please tell me your number.\n";

    int userNum{};
    cin >> userNum;

    if (userNum % 2 == 0 )
    {
        cout << "This number is totally even... I mean just look at it...\n"
             << "You are so even. Yes. You. Are...\n"
             << "Don't look me like that. We talk to our numbers. You got you answer\n"
             << "Please come again.\n";

    }
    else
    {
        cout << "This number is soooo odd. Not that is is bad or anything.\n"
             << "Sometimes being odd just means you stand out or different.\n"
             << "And different things are special and unique. Be odd... Have fun\n"
             << "I am talking to the number, but you have fun too and... be odd.\n";
    }

    return 0;
}
