// The goal of this challenge activity is to
// Define a function PyramidVolume with double parameters baseLength, baseWidth, and pyramidHeight,

// that returns as a double the volume of a pyramid with a rectangular base.

// Relevant geometry equations:

// Volume = base area x height x 1/3
// Base area = base length x base width.
// (Watch out for integer division).

#include <iostream>
using namespace std;

/* Your solution goes here  */
//function to calculate volume of the Pyramid
double PyramidVolume(double userLength, double userWidth, double userHeight)
{

    // calculating base area as, Base area = base length x base width.
    double Base_area = userLength * userWidth;

    //calculating Volume as, Volume = base area x height x 1/3
    double Volume = Base_area * userHeight / 3;

    //returning Volume
    return Volume;
}

int main()
{
    double userLength;
    double userWidth;
    double userHeight;

    cin >> userLength;
    cin >> userWidth;
    cin >> userHeight;

    cout << "Volume: " << PyramidVolume(userLength, userWidth, userHeight) << endl;

    return 0;
}