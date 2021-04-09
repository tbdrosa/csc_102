// The goal of this LAB is to:

// Auto-graded programming assignments may use a Unit test to test small parts of a program.
// Unlike a Compare output test, which evaluates your program's output for specific input values,
// a Unit test evaluates individual functions to determines if each function:

// --> is named correctly and has the correct parameters and return type
// --> calculates and returns the correct value (or prints the correct output)

// This example lab uses multiple unit tests to test the KiloToPounds() function.

// Complete a program that takes a weight in kilograms as input, c
// onverts the weight to pounds, and then outputs the weight in pounds.

// 1 kilogram = 2.204 pounds (lbs).

// Ex: If the input is:
// 10

// the output is:
// 22.04 lbs

// --> Note: Your program must define the function
// double KiloToPounds(double kilos)

// The program below has an error in the KiloToPounds() function.
// Try submitting the program for grading (click "Submit mode", then "Submit for grading").

// Notice that the first two test cases fail, but the third test case passes.
// The first test case fails because the program outputs the result from the KiloToPounds() function, which has an error.
// The second test case uses a Unit test to test the KiloToPounds() function, which fails.

// Change the KiloToPounds() function to multiply the variable kilos by 2.204, instead of dividing.
// The return statement should be: return (kilos * 2.204); Submit again.
// Now the test cases should all pass.

// Note: A common error is to mistype a function name with the incorrect capitalization.
// Function names are case sensitive, so if a lab program asks for a KiloToPounds() function,
// a kiloToPounds() function that works for you in develop mode will result in a failed unit test
// (the unit test will not be able to find KiloToPounds()).

#include <iostream>
using namespace std;

double KiloToPounds(double kilos)
{
    //change this statement such that kilos * 2.204 is returned instead of kilos/2.204
    return (kilos * 2.204);
}

int main()
{
    double kilos;
    double pounds;

    cin >> kilos;

    pounds = KiloToPounds(kilos);
    cout << pounds << " lbs" << endl;

    return 0;
}