// the goal of this challenge activity is to
// Write a for loop to populate vector userGuesses with NUM_GUESSES integers.

// Read integers using cin.

// Ex: If NUM_GUESSES is 3 and user enters 9 5 2,

// then userGuesses is {9, 5, 2}.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    const int NUM_GUESSES = 3;
    vector<int> userGuesses(NUM_GUESSES);
    unsigned int i;

    /* Your solution goes here  */

    for (i = 0; i < NUM_GUESSES; i++)

    {

        cin >> userGuesses[i]; // Here I am using loop from 0 to length of array and every value user enter is storing at adjacent locations in array using userGuesses[i].
    }
    for (i = 0; i < userGuesses.size(); ++i)
    {
        cout << userGuesses.at(i) << " ";
    }

    return 0;
}