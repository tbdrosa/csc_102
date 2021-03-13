// the goal of this lab is to write  a program
// whose input is a character and a string,
// and whose output indicates the number of times the character appears in the string.
// The output should include the input character and use the plural form, n's,
// if the number of times the characters appears is not exactly 1.

// Ex: If the input is:
// n Monday

// the output is:
// 1 n

// Ex: If the input is:
// z Today is Monday

// the output is:
// 0 z's

// Ex: If the input is:
// n It's a sunny day

// the output is:
//2 n's

// Case matters.

// Ex: If the input is:
//n Nobody

//the output is:
//0 n's
// NOTE: n is different than N

#include <iostream>
#include <string>

using namespace std;

// function to print number of times a char appears in a string
void charCount(char c, string s)
{
    // local variables
    int index = 0;
    int count = 0;

    // iterate throught the string and count char appearence
    while (s[index])
    {
        if (c == s[index])
        {            // if character found in string
            count++; // increase the count by 1
        }
        index++; // increase the index by 1
    }

    // if the character appears once
    if (count == 1)
    {
        cout << count << " " << c << endl;
    }
    else
    {
        cout << count << " " << c << "'s" << endl;
    }
}

int main()
{
    char c;
    string s;

    // read the char
    cin >> c;
    // read the string using getline
    // as string may contain spaces
    getline(cin, s);

    // call the charCount function
    charCount(c, s);
    return 0;
}