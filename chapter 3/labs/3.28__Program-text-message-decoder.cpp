// the goal of this lab is complete two objectives
// Use getline() to get a line of user input into a string. Output the line.
//example:
// GOAL 1
// Enter text:
// IDK if I'll go. It's my BFF's birthday.
// You entered: IDK if I'll go. It's my BFF's birthday.

// GOAL 2
// Search the string (using find()) for common abbreviations
// and print a list of each found abbreviation along with its decoded meaning.

//Example - Enter text:
// IDK if I'll go. It's my BFF's birthday.
// You entered: IDK if I'll go. It's my BFF's birthday.
// BFF: best friend forever
// IDK: I don't know

// Support these abbreviations:

// BFF -- best friend forever
// IDK -- I don't know
// JK -- just kidding
// TMI -- too much information
// TTYL -- talk to you later

#include <iostream>
#include <string>
using namespace std;

int main()
{

    string input;

    cout << "Enter text:";
    getline(cin, input);

    cout << endl
         << "You entered: " << input << endl;

    if (input.find("BFF") != string::npos)
    {
        cout << "BFF: best friend forever" << endl;
        cout << "IDK: I don't know" << endl;
    }

    else if (input.find("JK") != string::npos)
    {
        cout << "JK: just kidding" << endl;
        cout << "TMI: too much information" << endl;
        cout << "TTYL: talk to you later" << endl;
    }
    return 0;
}