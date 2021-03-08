#include <iostream>
using namespace std;

// the GOAL / OBJECTIVE of this lab is to
//Write a program with total change amount as an integer input, and output the change using the fewest coins, one coin type per line. The coin types are Dollars, Quarters, Dimes, Nickels, and Pennies. Use singular and plural coin names as appropriate, like 1 Penny vs. 2 Pennies.

// Ex: If the input is: 0
// (or less than 0), the output is: No change

// Ex: If the input is: 45
// the output is: 1 Quarter 2 Dimes

int main()
{
    int num, res;
    cin >> num;
    if (num <= 0)
        cout << "No change\n";
    else
    {
        res = num / 100;
        num %= 100;
        if (res == 1)
            cout << res << " Dollar\n";
        else if (res > 1)
            cout << res << " Dollars\n";
        res = num / 25;
        if (res == 1)
            cout << res << " Quarter\n";
        else if (res > 1)
            cout << res << " Quarters\n";
        num = num % 25;
        res = num / 10;
        if (res == 1)
            cout << res << " Dime\n";
        else if (res > 1)
            cout << res << " Dimes\n";
        num = num % 10;
        res = num / 5;
        if (res == 1)
            cout << res << " Nickel\n";
        else if (res > 1)
            cout << res << " Nickels\n";
        num = num % 5;
        if (num == 1)
            cout << num << " Penny\n";
        else if (num > 1)
            cout << num << " Pennies\n";
    }
    return 0;
}