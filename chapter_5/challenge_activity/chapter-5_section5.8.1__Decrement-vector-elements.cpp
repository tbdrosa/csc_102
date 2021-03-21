// The goal of this challenge activity is to
// Write a loop that subtracts 1 from each element in lowerScores
// if the original element was greater than 0, and otherwise just assigns the element with 0.

// Ex: lowerScores = {5, 0, 2, -3}
// becomes {4, 0, 1, 0}.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    const int SCORES_SIZE = 4;
    vector<int> lowerScores(SCORES_SIZE);
    unsigned int i;

    for (i = 0; i < lowerScores.size(); ++i)
    {
        cin >> lowerScores.at(i);
    }

    /* Your solution goes here  */
    for (i = 0; i < SCORES_SIZE; ++i)
    {
        if (lowerScores.at(i) > 0)
            lowerScores.at(i) = lowerScores.at(i) - 1;
        else
            lowerScores.at(i) = 0;
    }
    for (i = 0; i < lowerScores.size(); ++i)
    {
        cout << lowerScores.at(i) << " ";
    }
    cout << endl;

    return 0;
}