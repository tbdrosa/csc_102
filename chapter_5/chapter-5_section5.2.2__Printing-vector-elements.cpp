//Write a program that writes three statements to print the first three elements of vector runTimes.
// Follow each with a newline.

// Ex: If runTimes = {800, 775, 790, 805, 808}, print:
// 800
// 775
// 790

// Note: These activities may test code with different test values.
// This activity will perform two tests, both with a 5-element vector.
// See "How to Use zyBooks".

// Also note: If the submitted code tries to access an invalid vector element,
// such as runTimes.at(9) for a 5-element vector,
// the test may generate strange results.
// Or the test may crash and report "Program end never reached",
// in which case the system doesn't print the test case that caused the reported message.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    const int NUM_VALS = 5;
    vector<int> runTimes(NUM_VALS);
    unsigned int i;

    // Populate vector
    for (i = 0; i < runTimes.size(); ++i)
    {
        cin >> runTimes.at(i);
    }

    /* Your solution goes here  */

    return 0;
}