//  Numerous engineering and scientific applications require finding solutions to a set of equations.

// the goal of this lab is to write a program where
// we find solutions to a set of equations.
// Ex: 8x + 7y = 38 and 3x - 5y = -1 have a solution x = 3, y = 2.
// Given integer coefficients of two linear equations with variables x and y,
// use brute force to find an integer solution for x and y in the range -10 to 10.

// Ex: If the input is:
// 8 7 38
// 3 -5 -1

// the output is:
// x = 3, y = 2

// Note: Use this brute force approach:
// For every value of x from -10 to 10
//    For every value of y from -10 to 10
//       Check if the current x and y satisfy both equations. If so, output the solution, and finish.

// Ex: If no solution is found, output:
// There is no solution

// You can assume the two equations have no more than one solution.

// Note: Elegant mathematical techniques exist to solve such linear equations.
// However, for other kinds of equations or situations, brute force can be handy.

#include <iostream>
using namespace std;
int main()
{
    int coefX1; //Coefficient of x for first equation
    int coefY1; //Coefficient of y for first equation
    int rhs1;   //Right Hand Side of first equation

    cin >> coefX1 >> coefY1 >> rhs1; //Taking inputs for first equation

    int coefX2; //Coefficient of x for second equation
    int coefY2; //Coefficient of y for second equation
    int rhs2;   //Right Hand Side of second equation

    cin >> coefX2 >> coefY2 >> rhs2; //Taking inputs for second equation

    bool solutionFound = false; //Denotes whether there is solution or not
    for (int x = -10; x <= 10; x++)
    {
        for (int y = -10; y <= 10; y++)
        {
            int lhs1 = coefX1 * x + coefY1 * y; //Left hand side of first equation
            int lhs2 = coefX2 * x + coefY2 * y; //Left hand side of second equation
            if (lhs1 == rhs1 && lhs2 == rhs2)
            {
                cout << "x = " << x;           //Printing x
                cout << ", y = " << y << endl; //Printing y

                solutionFound = true; //We found a solution
            }
        }
    }

    //If no solution is found
    if (solutionFound == false)
        cout << "There is no solution" << endl; //Printing no solution
}