#include "std_lib_facilities.h"

int main()
{
    cout << "\nI will place three words of your choosing in alphabetical order\n"
         << "Maybe you have used my cousin's numerical service. I do the same but with words. I am that good.\n";

    cout << "Please enter your first word: ";
    string str1{0};
    cin >> str1;

    cout << "Please enter your second word: ";
    string str2{0};
    cin >> str2;

    cout << "Please enter your third word: ";
    string str3{0};
    cin >> str3;

    cout << "\nAnd just like Pokedex entries 63 and 64. We are done. \n";

    if (str1 > str2)
    {
        swap(str1, str2);
    }

    if (str1 > str3)
    {
        swap(str1, str3);
    }

    if (str2 > str3)
    {
        swap(str2, str3);
    }

    cout << str1 << ", " << str2 << ", " << str3 << '\n';
    cout << "Please. Please. No need to bow. Please stand proud and recommend me to others.\n";

    return 0;
}
