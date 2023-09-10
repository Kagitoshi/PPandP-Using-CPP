#include "std_lib_facilities.h"

void sumItUp(double num, const vector<double>& nums)
{
    cout << "The sum of the first " << num << " numbers (";

    double summedUp{0};

    try
    {
        for (int i{0}; i < num; ++i)
        {
            cout << nums[i] << ' ';
            summedUp += nums[i];
        }
    }

    catch(out_of_range& e)
    {

        cerr<< "Out of Range Error: "
            << "Entered less integers than initially wanted.\n"
            << "Entered " << num << " as the amount integers you wished to sum up.\n"
            << e.what() << '\n'
            << "Exception caught during printing of the first Nth integers of the vector.\n";
        error("Out Of Range Error.");
        keep_window_open();
    }

    cout << ") is " << summedUp <<".\n";
}

void differences(int num, vector<double>& nums)
{
    if (num > int(nums.size()))
    {
        throw runtime_error("Not enough numbers were entered into the array.\n"
                            "Exception caught during differences() function.\n");
    }
    if (num < 2)
    {
        throw runtime_error("Checking the differences of less than 2 integers isn't possible.\n"
                            "Exception caught during differences() function.\n");
    }

    vector<double> chigai;
    chigai.reserve(num - 1);

    for (int i{0}; i < num - 1; ++i)
    {
        chigai.push_back(nums[i + 1] - nums[i]);
    }

    cout << "The difference found between elements is (" ;

    for (double i : chigai)
    {
        cout << i << ' ';
    }

    cout << "). \n";
}

int main()
{
    cout << "Please enter the number of values you want to sum: \n";

    int firstNIntegers{0};

    cin >> firstNIntegers;
    if(!cin) throw runtime_error("An non-integer or a too large of a number has been inputted.\n");
    if(firstNIntegers < 1) throw runtime_error("An Integer less than 1 has been entered.\n");

    cout <<"Please enter some integers, seperated by space (enter '|' to stop):";

    vector<double> intsToSum{};

    int usersInput{};

    while(cin >> usersInput)
    {
        intsToSum.push_back(usersInput);
    }

    sumItUp(firstNIntegers, intsToSum);
    differences(firstNIntegers, intsToSum);

    return 0;
}