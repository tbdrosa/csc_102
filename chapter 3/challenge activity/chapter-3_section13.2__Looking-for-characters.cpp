#include <iostream>
#include <string>
using namespace std;

// the goal/ objective of this activity is to:
// Write an expression
// to detect that the first character
// of userInput matches firstLetter.

int main()
{
    string userInput;
    char firstLetter;

    getline(cin, userInput);
    cin >> firstLetter;

    if (userInput.at(0) == firstLetter /* Your solution goes here  */)
    {
        cout << "Found match: " << firstLetter << endl;
    }
    else
    {
        cout << "No match: " << firstLetter << endl;
    }

    return 0;
}