#include <iostream>
using namespace std;
// the GOAL / OBJECTIVE of this activity is to
// Using a conditional expression,
// write a statement that increments numUsers if updateDirection is 1,
// otherwise decrements numUsers. Ex: if numUsers is 8 and updateDirection is 1,
// numUsers becomes 9; if updateDirection is 0, numUsers becomes 7.

//Hint: Start with "numUsers = ..."

int main()
{
    int numUsers;
    int updateDirection;

    cin >> numUsers;
    cin >> updateDirection;

    /* Your solution goes here  */
    if (updateDirection == 1)
    {
        numUsers++;
    }
    else
    {
        numUsers--;
    }

    //Display the message and updated value of numUsers.

    cout << "New value is: " << numUsers << endl;

    return 0;
}