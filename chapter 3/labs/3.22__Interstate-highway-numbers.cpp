#include <iostream>

using namespace std;
// the GOAL / OBJECTIVE of this lab is to
//Primary U.S. interstate highways are numbered 1-99.
// Odd numbers (like the 5 or 95) go north/south,
// and evens (like the 10 or 90) go east/west.
// Auxiliary highways are numbered 100-999,
// and service the primary highway indicated by the rightmost two digits.
// Thus, I-405 services I-5, and I-290 services I-90.

//Given a highway number, indicate whether it is a primary or auxiliary highway.
// If auxiliary, indicate what primary highway it serves.
// Also indicate if the (primary) highway runs north/south or east/west.

// Ex: If the input is: 90
//the output is: I-90 is primary, going east/west.

// Ex: If the input is: 290
// the output is: I-290 is auxiliary, serving I-90, going east/west.

// Ex: If the input is: 0
// the output is: 0 is not a valid interstate highway number.

int main()
{
    int highwayNumber;
    cin >> highwayNumber;
    if (highwayNumber > 0 and highwayNumber < 1000)
    {
        if (highwayNumber >= 1 and highwayNumber <= 99)
        {
            if (highwayNumber % 2 == 0)
            {
                cout << "I-" << highwayNumber << " is primary, going east/west." << endl;
            }
            else
            {
                cout << "I-" << highwayNumber << " is primary, going north/south." << endl;
            }
        }
        else
        {
            if (highwayNumber % 2 == 0)
            {
                cout << "I-" << highwayNumber << " is auxiliary, serving I-" << (highwayNumber % 100) << ", going east/west." << endl;
            }
            else
            {
                cout << "I-" << highwayNumber << " is auxiliary, serving I-" << (highwayNumber % 100) << ", going north/south." << endl;
            }
        }
    }
    else
    {
        cout << highwayNumber << " is not a valid interstate highway number." << endl;
    }
    return 0;
}