// the goal of this lab is to write a program where
// This program outputs a downwards facing arrow composed of a rectangle and a right triangle.
// The arrow dimensions are defined by user specified arrow base height, arrow base width, and arrow head width.

// Part 1: Modify the given program to use a loop to output an arrow base of height arrowBaseHeight.

// Part 2: Modify the given program to use a loop to output an arrow base of width arrowBaseWidth.
// Use a nested loop in which the inner loop draws the *’s,
// and the outer loop iterates a number of times equal to the height of the arrow base.

// Part 3: Modify the given program to use a loop to output an arrow head of width arrowHeadWidth.
// Use a nested loop in which the inner loop draws the *’s,
// and the outer loop iterates a number of times equal to the height of the arrow head.

// Part 4: Modify the given program to only accept an arrow head width that is larger than the arrow base width.
// Use a loop to continue prompting the user for an arrow head width until the value is larger than the arrow base width.

// while (arrowHeadWidth <= arrowBaseWidth) {
//     Prompt user for a valid arrow head value
// }

// Example output for arrowBaseHeight = 5, arrowBaseWidth = 2, and arrowHeadWidth = 4:

#include <bits/stdc++.h>

using namespace std;

int main()

{

    int arrowBaseHeight, arrowBaseWidth, arrowHeadWidth;

    cout << "Enter arrow base height:\n";

    cin >> arrowBaseHeight;

    cout << "Enter arrow base width:\n";

    cin >> arrowBaseWidth;

    cout << "Enter arrow head width:\n";

    cin >> arrowHeadWidth;

    while (arrowHeadWidth <= arrowBaseWidth)

    {

        cout << "Enter arrow head width:\n";

        cin >> arrowHeadWidth;
    }
    cout << endl;
    // Display the arrow base.
    for (int i = 0; i < arrowBaseHeight; i++)
    {
        for (int j = 0; j < arrowBaseWidth; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Display the arrow head.
    for (int i = 0; i < arrowHeadWidth; i++)
    {
        for (int j = (arrowHeadWidth - i); j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}