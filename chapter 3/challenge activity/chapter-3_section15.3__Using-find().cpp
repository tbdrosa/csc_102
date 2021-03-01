#include <iostream>
#include <string>
using namespace std;
// the GOAL / OBJECTIVE of this lab is to
// Print "Censored" if userInput contains the word "darn",
// else print userInput. End with newline.
// Ex: If userInput is "That darn cat.", then output is: Censored
// Ex: If userInput is "Dang, that was scary!",
// then output is: Dang, that was scary!
// Note: If the submitted code has an out-of-range access,
// the system will stop running the code after a few seconds,
// and report "Program end never reached."
// The system doesn't print the test case that caused the reported message.

int main()
{
    string userInput;

    getline(cin, userInput);

    /* Your solution goes here  */

    if (userInput.find("darn") != string::npos)
    {
        cout << "Censored";
    }
    else
    {
        cout << userInput;
    }

    cout << endl;
    return 0;
}