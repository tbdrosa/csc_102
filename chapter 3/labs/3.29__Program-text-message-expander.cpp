// the FIRST OBJECTIVE of this lab is to
// Get a line of text from the user. Output that line.

//Example -
// Enter text:
// IDK how that happened. TTYL.
// You entered: IDK how that happened. TTYL.

// SECOND OBJECTIVE
// Output the line again,
// this time expanding common text message abbreviations.

// Example:
// Enter text:
// IDK how that happened. TTYL.
// You entered: IDK how that happened. TTYL.
// Expanded: I don't know how that happened. talk to you later.

// Support these abbreviations:

// BFF -- best friend forever
// IDK -- I don't know
// JK -- just kidding
// TMI -- too much information
// TTYL -- talk to you later
// Note: If an abbreviation appears twice, only expand its first instance.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Txt_Input;
    cout << "Enter text:" << endl;
    getline(cin, Txt_Input);
    int I_BFF;
    int I_IDK;
    int I_TMI;
    int I_TTYL;
    int I_JK;

    cout << "You entered: " << Txt_Input << endl;

    if (!(Txt_Input.find("BFF") == string::npos))
    {
        I_BFF = Txt_Input.find("BFF");
        Txt_Input.replace(I_BFF, 3, "best friend forever");
    }
    if (!(Txt_Input.find("IDK") == string::npos))
    {
        I_IDK = Txt_Input.find("IDK");
        Txt_Input.replace(I_IDK, 3, "I don’t know");
    }
    if (!(Txt_Input.find("JK") == string::npos))
    {
        I_JK = Txt_Input.find("JK");
        Txt_Input.replace(I_JK, 2, "just kidding");
    }
    if (!(Txt_Input.find("TMI") == string::npos))
    {
        I_TMI = Txt_Input.find("TMI");
        Txt_Input.replace(I_TMI, 3, "too much information");
    }
    if (!(Txt_Input.find("TTYL") == string::npos))
    {
        I_TTYL = Txt_Input.find("TTYL");
        Txt_Input.replace(I_TTYL, 4, "talk to you later");
    }
    cout << "Expanded: " << Txt_Input << endl;

    return 0;
}