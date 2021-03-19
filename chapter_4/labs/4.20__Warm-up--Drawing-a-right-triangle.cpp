// the goal of this lab is to write a program where
// This program will output a right triangle based on user
// specified height triangleHeight and symbol triangleChar.

// Part 1: The given program outputs a fixed-height triangle
// using a * character. Modify the given program to output a right triangle that instead
// uses the user-specified triangleChar character

// Part 2: Modify the program to use a nested loop to output a right triangle
// of height triangleHeight. The first line will have one user-specified character,
// such as % or *. Each subsequent line will have one additional user-specified character
// until the number in the triangle's base reaches triangleHeight.

// Output a space after each user-specified character,
// including after the line's last user-specified character.

// Example output for triangleChar = % and triangleHeight = 5:

#include <iostream>
using namespace std;

int main()
{
    char ch;
    int n;
    //promtpt the user to enter a character
    cout << "Enter a character:\n";
    cin >> ch;
    //prompt the user to enter triangle height
    cout << "Enter triangle height:\n"
         << endl;
    cin >> n;
    //iterate until n
    for (int i = 1; i <= n; i++)
    {
        //for each value
        //print i number of character seperated by space
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
        }
        //print a newline
        cout << endl;
    }

    return 0;
}
