// Write a for loop that prints: 1 2 ... userNum
// Ex: userNum = 4 prints:
// 1 2 3 4

#include <iostream>
using namespace std;

int main()
{
    int userNum;
    int i;

    cin >> userNum;

    for (int i = 1; i <= userNum; i++)
    {
        cout << i << " ";
    }

    return 0;
}