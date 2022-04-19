#include <iostream>
#include <string>
using namespace std;

string HEADER = " --- Demonstrates unformatted input ---";

int main()
{
    string word, rest;

    cout << HEADER
         << "\n\nPress <return> to go on" << endl;

    cin.get();

    cout << "\nPlease enter a sentence with several words!"
         << "\nEnd with <!> and <return>.";

    cin >> word;
    getline(cin, rest, '!');

    cout << "\nThe first word:  " << word
         << "\nRemaining text:  " << rest << endl;

    return 0;
    
}