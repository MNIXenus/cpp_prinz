#include <iostream>
using namespace std;
void line(), message(); //protoptypes

int main()
{
    cout << "Hello! The program starts in main()." << endl;
    line();
    message();
    line();
    cout << "At the and of main()." << endl;

    return 0;
}

void line() // to draw a line.
{
    cout << "-a" << endl;
}

void message() // to display a message.
{
    cout << "In function message()." << endl;
}