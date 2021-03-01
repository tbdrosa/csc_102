#include <iostream>
#include <string>
using namespace std;
// The GOAL / OBJECTIVE of this activity is to
// Create a conditional expression that evaluates to string "negative"
// if userVal is less than 0, and "non-negative" otherwise.
//Ex: If userVal is -9, output is: -9 is negative.

int main()
{
    string condStr;
    int userVal;

    cin >> userVal;

    condStr =
        /* Your solution goes here  */
        condStr = (userVal < 0) ? ("negative") : ("non-negative");

    cout << userVal << " is " << condStr << "." << endl;

    return 0;
}