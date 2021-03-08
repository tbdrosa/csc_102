#include <iostream>
using namespace std;

int main()
{
    bool isTeenager;
    int kidAge;

    cin >> kidAge;
    /* Your solution goes here  */
    if ((kidAge > 12) && (kidAge < 20))
    {
        isTeenager = true;
    }
    else
    {
        isTeenager = false;
    }

    if (isTeenager)
    {
        cout << "Teen" << endl;
    }
    else
    {
        cout << "Not teen" << endl;
    }

    return 0;
}
// GOAL:
// the objective is to Assign isTeenager with true if kidAge is 13 to 19 inclusive. Otherwise, assign isTeenager with false.
