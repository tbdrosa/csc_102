// the goal of this lab is complete a Mad Libs
// Mad Libs are activities that have a person provide various words,
// which are then used to complete a short story in unexpected (and hopefully funny) ways.

// Write a program that takes a string and integer as input,
// and outputs a sentence using those items as below.
// The program repeats until the input is quit.

// Ex: If the input is:
// apples 5
// shoes 2
// quit 0

// the output is:

// Eating 5 apples a day keeps you happy and healthy.
// Eating 2 shoes a day keeps you happy and healthy.
// Note: This is a lab from a previous chapter that now requires the use of a loop.

//c++ code

#include <iostream>

#include <string>

using namespace std;

int main()

{

    string s;
    int n;

    cin >> s >> n; //input string and integer

    while (s != "quit")
    { //while string is not quit

        //output

        cout << "Eating " << n << " " << s << " a day keeps you happy and healthy." << endl;

        cin >> s >> n; //take input
    }

    return 0;
}