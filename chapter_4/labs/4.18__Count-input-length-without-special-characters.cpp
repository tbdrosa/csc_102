// the goal of this lab is to write a program where
// Given a line of text as input,
// output the number of characters excluding spaces, periods, exclamation points, or commas.

// Ex: If the input is:
// Listen, Mr. Jones, calm down.

//the output is:
// 21

// Note: Account for all characters that aren't spaces,
// periods, exclamation points, or commas
//(Ex: "r", "2", "?").

#include <iostream>
#include <string>
using namespace std;

int main()
{

    string userText;

    getline(cin, userText);

    int count = 0;
    for (int i = 0; i < userText.length(); ++i)
    {

        if (userText.at(i) == ' ' || userText.at(i) == '.' || userText.at(i) == '!' || userText.at(i) == ',')
        {
            // ignore this character
        }
        else
        {
            // increase the counter here.
            count++;
        }
    }

    cout << count << endl;

    return 0;
}