/*
//1
// gets a number and calculates its square root
#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;


int main()
{
    string input;
    cout << "Insert a number: " << endl;
    cin >> input;
    cout << "square root of " << input << " is " << sqrt(atof(input.c_str()));

    return 0;
}
*/


/*
//2
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    string message("Learn from your mistakes!");
    cout << message << endl;

    int len = message.length();
    cout << "Length of the string: " << len << endl;

    int b;
    srand(12);
    b = rand();
    cout << "Random number: " << b << endl;

    return 0; 
}
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string mainStr("I have learned something new again!");
    string inpStr1, inpStr2;
    cout << "string \"" << mainStr << "\" contains " << mainStr << " symbols" << endl;
    cout << "insert first string" << endl;
    getline(cin, inpStr1);
    cout << "insert second string" << endl;
    getline(cin, inpStr2);
    cout << "concatenated strings are: " << endl << inpStr1 + " * " + inpStr2;

    return 0;
}