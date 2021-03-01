// the GOAL / OBJECTIVE of this lab is to
//Many documents use a specific format for a person's name. Write a program whose input is:
// firstName middleName lastName and whose output is:
// lastName, firstInitial.middleInitial.

//Ex: If the input is: Pat Silly Doe

//the output is: Doe, P.S.

// If the input has the form: firstName lastName

//the output is: lastName, firstInitial.

// Ex: If the input is: Julia Clark
// the output is: Clark, J.

#include <iostream>
using namespace std;
// main function
int main()
{
    // declare variables
    string s1 = "", s2 = "", s3 = "";
    // input firstName, middleName and lastName
    cin >> s1 >> s2 >> s3;
    // if the size of s3 is 0 it means only two words are entered then the s2 is the lastName
    if (s3.size() == 0)
    {
        // print the lastName and first character of the first name
        cout << s2 << ", " << s1[0] << "." << endl;
    }
    // otherwise the name has all 3 i.e firstname, middlename and lastname
    else
    {
        cout << s3 << ", " << s1[0] << "." << s2[0] << "." << endl;
    }
    return 0;
}