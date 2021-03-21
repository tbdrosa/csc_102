
// The goal of this challenge activity is to
// Write a loop that sets newScores to oldScores shifted once left,
// with element 0 copied to the end.

// Ex: If oldScores = {10, 20, 30, 40},
// then newScores = {20, 30, 40, 10}.

// Note: These activities may test code with different test values.
// This activity will perform two tests, both with a 4-element array. See "How to Use zyBooks".

// Also note: If the submitted code tries to access an invalid array element,
// such as newScores[9] for a 4-element array,
// the test may generate strange results.

// Or the test may crash and report "Program end never reached",
// in which case the system doesn't print the test case that caused the reported message.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    const int SCORES_SIZE = 4;
    vector<int> oldScores(SCORES_SIZE);
    vector<int> newScores(SCORES_SIZE);
    unsigned int i;

    for (i = 0; i < oldScores.size(); ++i)
    {
        cin >> oldScores.at(i);
    }

    /* Your solution goes here  */
    for (i = 1; i < oldScores.size(); i++)
    {
        newScores.at(i - 1) = oldScores[i];
    }
    newScores.at(i - 1) = oldScores[0];
    for (i = 0; i < newScores.size(); ++i)
    {
        cout << newScores.at(i) << " ";
    }
    cout << endl;

    return 0;
}