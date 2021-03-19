// Forms often allow a user to enter an integer.
// the goal of this lab is to write a program that takes in a string
// representing an integer as input, and outputs Yes if every character is a digit 0-9.

// Ex: If the input is:
// 1995

// the output is:
// Yes

// Ex: If the input is:
// 42,000

// Ex: 1995!
// the output is:

// No

// Hint: Use a loop and the isdigit() function
// (don't forget to include the cctype library)

#include <stdio.h>

int main(void)
{
    char userString[50];
    int isValid = 1, i;

    scanf("%s", userString);

    for (i = 0; userString[i] != '\0'; i++)
    {
        if (!(userString[i] >= '0' && userString[i] <= '9'))
        {
            isValid = 0;
            break;
        }
    }

    if (isValid == 1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}