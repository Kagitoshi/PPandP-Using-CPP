// read and write a first name
#include "std_lib_facilities.h"

int main() {
    cout << "Enter your first name (followed by 'enter'):\n";
    string userFirstName{};
    cin >> userFirstName;

    cout << "Enter the name of the person you want to write to (followed by 'enter'):\n";
    string firstName{};
    cin >> firstName;

    cout << "Enter the age of the addressee (followed by 'enter'):\n";
    int age{0};
    cin >> age;
    if (age <= 0 || age >= 110)
    {
        simple_error("You're kidding!"); // will ask for a character to exit and terminate the program
    }

    cout << "Enter the name of a friend you two have in common (followed by 'enter'):\n";
    string friendName{};
    cin >> friendName;

    cout << "Enter the gender of the mutual friend (m/f/n) (followed by 'enter'):\n";
    char gender{'0'};
    cin >> gender;



    cout << "Dear " << firstName << ",\n"
    << "    You need to know you are awesome!\n"
    << "You will have some bad days but keep being who you are.\n"
    << "I am sure others think you are awesome as well. For example, " <<  friendName << ".\n";

    if(gender == 'm')
    {
        cout << "Speaking of " << friendName << ", have you seen him recently. If so how is he?\n"
        << "If you see him please tell him to call me.\n";
    }
    else if(gender == 'f')
    {
        cout << "Speaking of " << friendName << ", have you seen her recently. If so how is she?\n"
        << "If you see her please tell her to call me.\n";
    }
    else if(gender == 'n')
    {
        cout << "Speaking of " << friendName << ", have you seen them recently. If so how are they?\n"
        << "If you see them please tell them to call me.\n";
    }
    else
    {
        cout << "I hope " << friendName << " is doing alright.";
    }

    cout << "\n    By the way, I heard you just had a birthday.\n"
    << "If my memory serves me correctly, you are " << age << " years old, right?\n";


    if (age < 12 && age != 1)
    {
        cout << "I can't believe you will be " << ++age << " next year. \n";
    }
    else if( age == 1)
    {
        cout << "You are 1! AND YOU CAN READ! SEE... You are awesome!\n";
    }
    else if (age == 17)
    {
        cout << "You'll be able to vote next year!\n";
    }
    else if (age > 70)
    {
        cout << "I hope you are enjoying retirement.\n";
    }
    else
    {
        cout << "The adult life and being in the real world sucks, huh. Like Bill Watterson said \n "
        << "\n\"So, what's it like in the real world? Well, the food is better,\n "
        << "but beyond that, I don't recommend it. \"\n\n"
        << "I have to agree with him.\n";
    }


    cout << "I'll keep this short and end this here, please stay in touch.\n\n"
    << "Yours sincerely.\n\n" << userFirstName;
}