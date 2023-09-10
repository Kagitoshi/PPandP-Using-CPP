#include "std_lib_facilities.h"

int main()
{
    cout << "Please enter the number of values you want to sum: \n";

    int firstNIntegers{0};

    try
    {
        cin >> firstNIntegers;
    }

    catch(out_of_range& e)
    {
        cout << "You entered an integer way too high.\n" << e.what()
             << "Exception caught during firstNIntegers variable's input.";
        return 1;
    }

    cout <<"Please enter some integers, seperated by space (enter '|' to stop):";

    vector<int> intsToSum{};

    int usersInput{};

    while(cin >> usersInput)
    {
        intsToSum.push_back(usersInput);
    }

    cout << "The sum of the first " << firstNIntegers << " numbers (";

    int summedUp{0};

    //Throwing Overflow and Underflow errors is not working. I will need to figure out how to get it to work.
    try
    {
        for (int i{0}; i < firstNIntegers; ++i)
        {
            if(intsToSum[i] >= 0 && (summedUp + intsToSum[i]) < summedUp)
            {
                throw overflow_error("The summedUp variable overflowed.\n"
                                     "Exception caught during loop to sum up Nth values from the vector.\n");
            }
            if(intsToSum[i] <= 0 && (summedUp + intsToSum[i]) > summedUp)
            {
                throw underflow_error("The summedUp variable underflowed.\n"
                                     "Exception caught during loop to sum up Nth values from the vector.\n");
            }
            cout << intsToSum[i] << ' ';
            summedUp += intsToSum[i];
        }
    }

    catch(out_of_range& e)
    {

        cerr<< "Out of Range Error: "
            << "Entered less integers than initially wanted.\n"
            << "Entered " << firstNIntegers << " as the amount integers you wished to sum up.\n"
            << e.what() << '\n'
            << "Exception caught during printing of the first Nth integers of the vector.\n";
        keep_window_open();
        return 2;
    }

    cout << ") is " << summedUp <<".\n";

    return 0;
}
