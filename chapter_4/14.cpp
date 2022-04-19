#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{

    int number = ' ';
    cout << "The whitespace code is as follows: "
         << number << endl;
    char ch;
    string prompt = "Plieas enter a character followed by <return>: ";

    cout << prompt;

    cin >> ch;

    number = ch;

    cout << "The character " << ch
         << " has code " << number << endl;

    cout << uppercase
         << "       octal   decimal hexadecimal" << endl
         << oct << setw(8) << number
         << dec << setw(8) << number
         << hex << setw(8) << number << endl;
    
    return 0;
 }