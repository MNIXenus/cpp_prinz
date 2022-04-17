#include <iostream>
using namespace std;

int gVar1; // Global variables
int gVar2 = 2; // explicit initializtion

int main()
{
    char ch('A'); //local variable being intialized
                    // or: char ch = 'A';
    cout << "Value of gVar1:    " << gVar1 << endl;
    cout << "Value of gVar2:    " << gVar2 << endl;
    cout << "Character in ch:   " << ch    << endl;

    int sum, number = 3; // local variables with
                         // and without initialization

    sum = number + 5;
    cout << "value of sum:      " << sum << endl;

    return 0;
}