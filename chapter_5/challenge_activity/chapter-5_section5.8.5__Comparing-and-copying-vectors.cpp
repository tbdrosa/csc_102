// The goal of this challenge activity is If the vector oldData is the same as the vector newData,
// to print "Data matches!" ended with a newline.

// Otherwise, assign oldData with newData.

// Ex : If oldData = {10, 12, 18, 16} and

// newData = {25, 27, 29, 23},

// then oldData becomes{25, 27, 29, 23}.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    const int NUM_POINTS = 4;
    vector<int> oldData(NUM_POINTS);
    vector<int> newData(NUM_POINTS);
    unsigned int i;

    for (i = 0; i < oldData.size(); ++i)
    {
        cin >> oldData.at(i);
    }

    for (i = 0; i < newData.size(); ++i)
    {
        cin >> newData.at(i);
    }

    /* Your solution goes here  */
    int count = 0;
    for (i = 0; i < newData.size(); ++i)
    {
        if (oldData.at(i) != newData.at(i))
        {
            ++count;
            oldData.at(i) = newData.at(i);
        }
    }
    if (count == 0)
    {
        cout << "Data matches!" << endl;
    }
    for (i = 0; i < oldData.size(); ++i)
    {
        cout << oldData.at(i) << " ";
    }
    cout << endl;

    return 0;
}