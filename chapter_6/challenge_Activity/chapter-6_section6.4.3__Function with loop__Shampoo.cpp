// The goal of this challenge activity is to write a function PrintShampooInstructions(),
// with int parameter numCycles, and void return type.

// If numCycles is less than 1, print "Too few.".

// If more than 4, print "Too many.".

// Else, print "N: Lather and rinse." numCycles times, where N is the cycle number, followed by "Done.".

// End with a newline. Example output with input 2:
// 1: Lather and rinse.
// 2: Lather and rinse.
// Done.

// Hint: Declare and use a loop variable.

#include <iostream>
using namespace std;

/* Your solution goes here  */

void PrintShampooInstructions(int numCycles)
{
    int i;
    if (numCycles < 1)
    {
        cout << "Too few.\n";
    }
    else if (numCycles > 4)
    {
        cout << "Too many.\n";
    }
    else
    {
        for (i = 0; i < numCycles; i++)
        {
            cout << (i + 1) << ": Lather and rinse.\n";
        }
        cout << "Done.\n";
    }
}

int main()
{
    int userCycles;

    cin >> userCycles;
    PrintShampooInstructions(userCycles);

    return 0;
}