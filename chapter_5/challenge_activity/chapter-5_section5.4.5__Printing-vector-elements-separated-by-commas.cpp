// The goal of the challenge activity is to write a for loop
// to print all NUM_VALS elements of vector hourlyTemp.

// Separate elements with a comma and space.

// Ex: If hourlyTemp = {90, 92, 94, 95},
// print:
// 90, 92, 94, 95
// Y
// our code's output should end with the last element, without a subsequent comma, space, or newline.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    const int NUM_VALS = 4;
    unsigned int i;
    vector<int> hourlyTemp(NUM_VALS);

    for (i = 0; i < hourlyTemp.size(); ++i)
    {
        cin >> hourlyTemp.at(i);
    }

    /* Your solution goes here  */
    for (i = 0; i <= hourlyTemp.size() - 1; i++)
    {
        if (i < hourlyTemp.size() - 1)
        {
            cout << hourlyTemp.at(i) << ", ";
        }
        else
        {
            cout << hourlyTemp.at(i);
        }
    }
    cout << endl;

    return 0;
}