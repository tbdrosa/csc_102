// The goal of this challenge activity is to use the CelsiusToKelvin function as a guide,
// create a new function, changing the name to KelvinToCelsius,
// and modify the function accordingly.

#include <iostream>
using namespace std;

double CelsiusToKelvin(double valueCelsius)
{
    double valueKelvin;

    valueKelvin = valueCelsius + 273.15;

    return valueKelvin;
}
double KelvinToCelsius(double valueKelvin)
{
    double valueCelsius = 0.0;

    valueCelsius = valueKelvin - 273.15;
}
/* Your solution goes here  */

int main()
{
    double valueC;
    double valueK;

    valueC = 10.0;
    cout << valueC << " C is " << CelsiusToKelvin(valueC) << " K" << endl;

    cin >> valueK;
    cout << valueK << "  is " << KelvinToCelsius(valueK) << " C" << endl;

    return 0;
}