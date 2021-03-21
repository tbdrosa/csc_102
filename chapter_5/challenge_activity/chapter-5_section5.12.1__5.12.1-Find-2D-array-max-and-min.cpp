
// The goal of this challenge activity is to find the maximum value and minimum value in milesTracker.
// Assign the maximum value to maxMiles, and the minimum value to minMiles.

//Sample output for the given program:
// Min miles: -10
// Max miles: 40

#include <iostream>
using namespace std;

int main()
{
    const int NUM_ROWS = 2;
    const int NUM_COLS = 2;
    int milesTracker[NUM_ROWS][NUM_COLS];
    int i;
    int j;
    int maxMiles = 0; // Assign with first element in milesTracker before loop
    int minMiles = 0; // Assign with first element in milesTracker before loop
    int value;

    for (i = 0; i < NUM_ROWS; i++)
    {
        for (j = 0; j < NUM_COLS; j++)
        {
            cin >> value;
            milesTracker[i][j] = value;
        }
    }

    /* Your solution goes here  */
    maxMiles = milesTracker[0][0]; //Assign first element to maxMiles
    minMiles = milesTracker[0][0]; //Assign first element to minMiles

    for (int i = 0; i < NUM_ROWS; i++)
    {
        for (int j = 0; j < NUM_COLS; j++)
        {

            if (minMiles > milesTracker[i][j]) //check if current element of milesTracker is less
                                               //than minMiles
                minMiles = milesTracker[i][j]; //update minMiles

            if (maxMiles < milesTracker[i][j]) //check if current element of milesTracker is greater
                                               //than maxMiles
                maxMiles = milesTracker[i][j]; //update maxMiles
        }
    }
    cout << "Min miles: " << minMiles << endl;
    cout << "Max miles: " << maxMiles << endl;

    return 0;
}