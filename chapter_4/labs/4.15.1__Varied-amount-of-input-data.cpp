// Statistics are often calculated with varying amounts of input data.

// the goal of this lab is to write a program that takes
// any number of non-negative integers as input,
// and outputs the max and average.
// A negative integer ends the input and is not included in the statistics.

// Ex: When the input is:

// 15 20 0 5 -1

// the output is:

// 20 10

#include <iostream>
using namespace std;

int main()
{

    int num;
    int sum = 0;

    cin >> num;

    int count = 0;
    int max = 0;

    max = num;

    while (num >= 0)
    {
        sum += num;
        cin >> num;
        count++;

        if (max < num)
        {
            max = num;
        }
    }

    cout << max << " " << (sum / count) << endl; /* Type your code here. */

    return 0;
}