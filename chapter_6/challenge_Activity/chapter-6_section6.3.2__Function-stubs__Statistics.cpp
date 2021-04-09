// The goal of this lab is to Define stubs for the functions called by the below main().

// Each stub should print "FIXME: Finish FunctionName()" followed by a newline, and should return -1.

// Example output:
// FIXME: Finish GetUserNum()
// FIXME: Finish GetUserNum()
// FIXME: Finish ComputeAvg()
// Avg: -1

#include <iostream>
using namespace std;

/* Your solution goes here  */

//function to get a number from user
int GetUserNum()
{
    cout << "FIXME: Finish GetUserNum()" << endl;
}

//function to calculate an average of two numbers
int ComputeAvg(int num1, int num2)
{
    cout << "FIXME: Finish ComputeAvg()" << endl;
    return -1;
}

//given test function
int main()
{
    int userNum1;
    int userNum2;
    int avgResult;

    userNum1 = GetUserNum();
    userNum2 = GetUserNum();

    avgResult = ComputeAvg(userNum1, userNum2);

    cout << "Avg: " << avgResult << endl;

    return 0;
}