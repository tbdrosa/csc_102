#include <iostream>
#include <string>
using namespace std;
// the OBJECTIVE / GOAL of this activity
// is to Modify songVerse to play "The Name Game" (see OxfordDictionaries.com),
// by replacing "(Name)" with userName but without the first letter.
// Ex: If userName = "Kaitlin" and songVerse = "Banana-fana fo-f(Name)!",
// the program prints: Banana-fana fo-faitlin!
//Ex: If userName = "Kaitlin" and songVerse = "Fee fi mo-m(Name)", the program prints:
// Fee fi mo-maitlin
//Note: You may assume songVerse will always contain the substring "(Name)".

int main()
{
    string userName;
    string songVerse;

    getline(cin, userName);
    userName = userName.substr(1, userName.size() - 1); // Remove first character

    getline(cin, songVerse);

    // Modify songVerse to replace (Name) with userName without first character

    /* Your solution goes here  */

    songVerse.replace(songVerse.find("(Name)"), 6, userName);

    cout << songVerse << endl;

    return 0;
}