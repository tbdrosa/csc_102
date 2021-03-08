// Write an if-else statement to describe an object.
//Print "Balloon" if isBalloon is true and isRed is false.
//Print "Red balloon" if isBalloon and isRed are both true.
//Print "Not a balloon" otherwise. End with newline.

#include <iostream>
using namespace std;

int main()
{
    bool isRed;
    bool isBalloon;

    cin >> isRed;
    cin >> isBalloon;
    /* Your solution goes here  */
    if ((isBalloon == true) && (isRed == false))
    {
        cout << "Balloon" << endl;
    }
    else if ((isBalloon) && (isRed))
    {
        cout << "Red balloon" << endl;
    }
    else if ((isBalloon == false) && (isRed == false))
    {
        cout << "Not a balloon" << endl;
    }

    else if ((isBalloon == false) && (isRed == true))
    {
        cout << "Not a balloon" << endl;
    }
    else
    {
        isBalloon = "Not a balloon";
    }

    return 0;
}