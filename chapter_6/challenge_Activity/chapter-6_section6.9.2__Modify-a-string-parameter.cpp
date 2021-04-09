// The goal of this challenge activity is to
// Complete the function to replace any period by an exclamation point.

// Ex: "Hello. I'm Miley. Nice to meet you." becomes:
// "Hello! I'm Miley! Nice to meet you!"

#include <iostream>
#include <string>
using namespace std;

void MakeSentenceExcited(string &sentenceText)
{

    /* Your solution goes here  */
    for (int i = 0; i < sentenceText.length(); i++)
    {
        if (sentenceText[i] == '.')
        {
            sentenceText = sentenceText.substr(0, i) + "!" + sentenceText.substr(i + 1, sentenceText.length());
        }
    }
}

int main()
{
    string testStr;

    getline(cin, testStr);
    MakeSentenceExcited(testStr);
    cout << testStr;

    return 0;
}
