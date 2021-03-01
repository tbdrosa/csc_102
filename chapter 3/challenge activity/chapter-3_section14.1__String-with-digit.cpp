#include <iostream>
#include <string>
#include <cctype>
using namespace std;
// the main GOAL / OBJECTIVE
// for this activity is to
// Set hasDigit to true if the
// 3-character passCode contains a digit.
int main()
{
    bool hasDigit;
    string passCode;

    hasDigit = false;
    cin >> passCode;

    /* Your solution goes here  */
    // Declare the position of 3 digits

    // passCode.at(hold the input position value)

    // It means passCode.at() find out the value form that position.

    // Assign the input value to digit1 from index 0

    int digit1 = passCode.at(0);

    // Assign the input value to digit2 from index 1

    int digit2 = passCode.at(1);

    // Assign the input value to digit3 from index 2

    int digit3 = passCode.at(2);

    // When anyone digits(digit1, digit2,digit3) contains a digit

    if (isdigit(digit1) || isdigit(digit2) || isdigit(digit3))

    {

        // Set hasDigit to true

        hasDigit = true;
    }
    if (hasDigit)
    {
        cout << "Has a digit." << endl;
    }
    else
    {
        cout << "Has no digit." << endl;
    }

    return 0;
}