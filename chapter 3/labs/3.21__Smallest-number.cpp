// 3.21 LAB : Smallest number
// The OBJECTIVE / GOAL of this lab is to
// Write a program whose inputs are three integers, and whose output is the smallest of the three values.
// Ex: If the input is: 7 15 3
// the output is: 3

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, min; //declare the variables
    cout << "";
    cin >> num1 >> num2 >> num3; //get input from user for num1, num2 and num3

    //Find the smallest
    if (num1 <= num2 && num1 <= num3)
    {
        min = num1;
    }
    else if (num2 <= num1 && num2 <= num3)
    {
        min = num2;
    }
    else
    {
        min = num3;
    }

    cout << "" << min << endl; //display the smallest number
    return 0;
}