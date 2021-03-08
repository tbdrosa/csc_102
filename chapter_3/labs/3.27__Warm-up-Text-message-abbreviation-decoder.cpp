// the goal of this lab is complete two objectives
// GOAL 1
// If a user's input string matches a known text message abbreviation,
// output the unabbreviated form, else output: Unknown.
// Support two abbreviations: LOL -- laughing out loud, and IDK -- I don't know.

// Sample input/output example -
// where user Inputs an abbreviation: LOL will return laughing out loud

// GOAL 2
// Expand to also decode these abbreviations. (3 pts)

// BFF -- best friends forever
// IMHO -- in my humble opinion
// TMI -- too much information

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cout << "Input an abbreviation:" << endl;
    cin >> str;
    if (str == "LOL")
    {
        cout << "laughing out loud" << endl;
    }
    else if (str == "IDK")
    {
        cout << "I don't know" << endl;
    }
    else if (str == "BFF")
    {
        cout << "best friends forever" << endl;
    }
    else if (str == "IMHO")
    {
        cout << "in my humble opinion" << endl;
    }
    else if (str == "TMI")
    {
        cout << "too much information" << endl;
    }
    else
    {
        cout << "Unknown" << endl;
    }
    return 0;
}