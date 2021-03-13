// The objective is to write code Given numRows and numColumns,
// print a list of all seats in a theater. Rows are numbered, columns lettered,
// as in 1A or 3E. Print a space after each seat, including after the last.

// Ex: numRows = 2 and numColumns = 3 prints:
// 1A 1B 1C 2A 2B 2C

#include <iostream>
using namespace std;

int main()
{
    int numRows;
    int numColumns;
    int currentRow;
    int currentColumn;
    char currentColumnLetter;

    cin >> numRows;
    cin >> numColumns;

    /* Your solution goes here  */
    for (currentRow = 1; currentRow <= numRows; currentRow++)

    {

        currentColumnLetter = 'A';

        for (currentColumn = 1; currentColumn <= numColumns; currentColumn++)

        {

            cout << currentRow << currentColumnLetter << " ";

            currentColumnLetter++;
        }
    }
    cout << endl;

    return 0;
}