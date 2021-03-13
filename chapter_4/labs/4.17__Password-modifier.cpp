// Many user-created passwords are simple and easy to guess.

// the goal of this lab is to write a program that takes a simple password
// and makes it stronger by replacing characters using the key below,
// and by appending "!" to the end of the input string.

// i becomes 1
// a becomes @
// m becomes M
// B becomes 8
// s becomes $

// Ex: If the input is:
// mypassword

// the output is:
// Myp@$$word!

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    getline(cin, str);

    for (int i = 0; i < str.size(); ++i)
    {
        char ch = str[i];
        if (str[i] == 'i')
        {
            ch = '1';
        }
        else if (str[i] == 'a')
        {
            ch = '@';
        }
        else if (str[i] == 'm')
        {
            ch = 'M';
        }
        else if (str[i] == 'B')
        {
            ch = '8';
        }
        else if (str[i] == 's')
        {
            ch = '$';
        }
        cout << ch;
    }
    cout << "!" << endl;
    return 0;
}