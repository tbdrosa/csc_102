// The objective is to Print either "Fruit", "Drink", or "Unknown"
// (followed by a newline) depending on the value of userItem.
// Print "Unknown" (followed by a newline)
// if the value of userItem does not match any of the defined options.

// For example, if userItem is GR_APPLES,

// output should be:
// Fruit

#include <iostream>
using namespace std;

int main()
{
    enum GroceryItem
    {
        GR_APPLES,
        GR_BANANAS,
        GR_JUICE,
        GR_WATER
    };
    GroceryItem userItem;

    userItem = GR_APPLES;

    /* Your solution goes here  */
    if (userItem == GR_APPLES || userItem == GR_BANANAS)
    {
        cout << "Fruit";
    }
    else if (userItem == GR_WATER || userItem == GR_JUICE)
    {
        cout << "Drink";
    }
    else
    {
        cout << "Unknown";
    }
    cout << endl;
    return 0;
}