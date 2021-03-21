// The goal of this challenge activity is to Subtract 4 from any element's value
// that is greater than maxVal.

// Ex: If maxVal = 10,
// then dataPoints = {2, 12, 9, 20} becomes {2, 8, 9, 16}.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int maxVal;
    const int NUM_POINTS = 4;
    vector<int> dataPoints(NUM_POINTS);
    unsigned int i;

    cin >> maxVal;

    for (i = 0; i < dataPoints.size(); ++i)
    {
        cin >> dataPoints.at(i);
    }

    /* Your solution goes here  */
    for (i = 0; i < dataPoints.size(); ++i)
    {
        if (dataPoints.at(i) > maxVal)
        {
            dataPoints.at(i) = dataPoints.at(i) - 4;
        }
    }

    for (i = 0; i < dataPoints.size(); ++i)
    {
        cout << dataPoints.at(i) << " ";
    }
    cout << endl;

    return 0;
}