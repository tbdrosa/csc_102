// The goal of this challenge activity is to
// Append newValue to the end of vector tempReadings.

// Ex: If newValue = 67,
// then tempReadings = {53, 57, 60} becomes {53, 57, 60, 67}.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    const int NUM_ELEMENTS = 3;
    vector<int> tempReadings(NUM_ELEMENTS);
    int newValue;
    unsigned int i;

    for (i = 0; i < tempReadings.size(); ++i)
    {
        cin >> tempReadings.at(i);
    }

    cin >> newValue;

    /* Your solution goes here  */
    tempReadings.push_back(newValue);

    for (i = 0; i < tempReadings.size(); ++i)
    {
        cout << tempReadings.at(i) << " ";
    }
    cout << endl;

    return 0;
}