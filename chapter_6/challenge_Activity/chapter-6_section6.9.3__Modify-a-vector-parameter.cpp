// The goal of this challenge activity is to write a function SwapVectorEnds()
// that swaps the first and last elements of its vector parameter.

// Ex: sortVector = {10, 20, 30, 40} becomes {40, 20, 30, 10}.

#include <iostream>
#include <vector>
using namespace std;

/* Your solution goes here  */
// Swap vector ends

void SwapVectorEnds(vector<int> &v)

{

    int temp = v[0];

    v[0] = v[v.size() - 1];

    v[v.size() - 1] = temp;
}
int main()
{
    vector<int> sortVector(4);
    unsigned int i;
    int userNum;

    for (i = 0; i < sortVector.size(); ++i)
    {
        cin >> userNum;
        sortVector.at(i) = userNum;
    }

    SwapVectorEnds(sortVector);

    for (i = 0; i < sortVector.size(); ++i)
    {
        cout << sortVector.at(i) << " ";
    }
    cout << endl;

    return 0;
}