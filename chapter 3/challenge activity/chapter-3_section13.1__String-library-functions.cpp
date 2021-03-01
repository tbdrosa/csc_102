#include <iostream>
#include <string>
using namespace std;
// the goal/ objective of this activity is to:
// Assign the size of userInput to stringSize.
// Ex: if userInput is "Hello", output is:
// Size of userInput: 5

{
    string userInput;
    int stringSize;

    getline(cin, userInput);
    /* Your solution goes here  */

    stringSize = userInput.size();
    cout << "Size of userInput: " << stringSize << endl;

    return 0;
}
