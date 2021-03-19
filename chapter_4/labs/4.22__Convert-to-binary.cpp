// the goal of this lab is to write a program where that it in a positive integer as input,
// and outputs a string of 1 's and 0' s representing the integer in binary.
// For an integer x, the algorithm is :

//     As long as x is greater than 0 Output x %
//     2(remainder is either 0 or 1) x = x / 2

// Note: The above algorithm outputs the 0's and 1's in reverse order.

// Ex: If the input is:
// 6

// the output is:
// 011

#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x; // read value of x from user

    while (x > 0)
    {                  // as long as x is greater than 0
        cout << x % 2; // output remainder when x is divided by 2
        x /= 2;        // change x
    }
    cout << endl; // print a newline at the end
    return 0;
}