// The goal of this challenge activity is to define a function CoordTransform()
// that transforms the function's first two input parameters
// xVal and yVal

// into two output parameters xValNew and yValNew.

// The function returns void.

// The transformation is new = (old + 1) * 2. Ex: If xVal = 3 and yVal = 4, then xValNew is 8 and yValNew is 10.

#include <iostream>
using namespace std;

/* Your solution goes here  */
void CoordTransform(int i, int j, int &a, int &b)
{
    a = (i + 1) * 2;
    b = (j + 1) * 2;
}
int main()
{
    int xValNew;
    int yValNew;
    int xValUser;
    int yValUser;

    cin >> xValUser;
    cin >> yValUser;

    CoordTransform(xValUser, yValUser, xValNew, yValNew);
    cout << "(" << xValUser << ", " << yValUser << ") becomes (" << xValNew << ", " << yValNew << ")" << endl;

    return 0;
}