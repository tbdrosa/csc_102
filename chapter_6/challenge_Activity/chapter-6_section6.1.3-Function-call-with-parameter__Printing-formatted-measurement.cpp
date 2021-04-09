// The goal of this challenge activity is to
// Define a function PrintFeetInchShort(), with int parameters numFeet and numInches,

// that prints using ' and " shorthand. End with a newline.

// Remember that outputting ' endl' outputs a newline.

// Ex: PrintFeetInchShort(5, 8) prints:

// 5' 8" Hint : Use \" to print a double quote.

#include <iostream>
using namespace std;

/* Your solution goes here  */
void PrintFeetInchShort(int x, int y) //function definition with two arguments
{
    cout << x << "'"
         << " " << y << "\"" << endl; //it prints x' y'' format
}
int main()
{
    int userFeet;
    int userInches;

    cin >> userFeet;
    cin >> userInches;

    PrintFeetInchShort(userFeet, userInches); // Will be run with (5, 8), then (4, 11)

    return 0;
}
