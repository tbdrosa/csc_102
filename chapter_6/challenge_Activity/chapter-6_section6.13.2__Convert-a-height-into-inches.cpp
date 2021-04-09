// The goal of this challenge activity is to Write a second ConvertToInches() with two double parameters,
// numFeet and numInches,
// that returns the total number of inches.

// Ex: ConvertToInches(4.0, 6.0) returns 54.0 (from 4.0 * 12 + 6.0).

#include <iostream>
using namespace std;

double ConvertToInches(double numFeet)
{
    return numFeet * 12.0;
}

/* Your solution goes here  */
//Just returns the parameter multiplied by 12, as 1 foot = 12 inches.
double ConvertToInches(double numFeet, double numInches) //It takes two parameters.
{
    return numFeet * 12.0 + numInches; //Just returns the summation of first parameter multiplied by 12, and the second parameter.
}
int main()
{
    double totInches;

    totInches = ConvertToInches(4.0, 6.0);
    cout << "4.0, 6.0 yields " << totInches << endl;

    totInches = ConvertToInches(5.8);
    cout << "5.8 yields " << totInches << endl;
    return 0;
}