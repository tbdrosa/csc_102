// Vector iteration :

//     chapter -
//     5_section5.4.4__Sum - of - excess.cpp

//    Vector testGrades contains NUM_VALS test scores.
//     The goal of this challenge activity is to Write a for loop that sets sumExtra to the total extra credit received.

//     Full credit is 100, so anything over 100 is extra credit.

//     Ex: If testGrades = {101, 83, 107, 90},
//     then sumExtra = 8, because 1 + 0 + 7 + 0 is 8.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    const int NUM_VALS = 4;
    vector<int> testGrades(NUM_VALS);
    unsigned int i;
    int sumExtra = -9999; // Assign sumExtra with 0 before your for loop

    for (i = 0; i < testGrades.size(); ++i)
    {
        cin >> testGrades.at(i);
    }

    /* Your solution goes here  */
    sumExtra = 0;
    for (i = 0; i <= testGrades.size() - 1; i++)
    {
        if (testGrades.at(i) > 100)
        {
            sumExtra = sumExtra + (testGrades.at(i) - 100);
        }
    }
    cout << "sumExtra: " << sumExtra << endl;
    return 0;
}