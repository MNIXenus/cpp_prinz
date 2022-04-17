#include <iostream>
using namespace std;

/*
//1 - Write a C++ program that displays the memory space required by each
// fundamental type on screen.

int main()
{
    cout << endl
         << "type           size" << endl << endl
         << "bool           "     << sizeof(bool) << endl
         << "char           "     << sizeof(char) << endl
         << "signed char    "     << sizeof(signed char) << endl
         << "unsigned char  "     << sizeof(unsigned char) << endl
         << "wchar_t        "     << sizeof(wchar_t) << endl
         << "short          "     << sizeof(short) << endl
         << "unsigned short "     << sizeof(unsigned short) << endl
         << "int            "     << sizeof(int) << endl
         << "unsigned int   "     << sizeof(unsigned int) << endl
         << "long           "     << sizeof(long) << endl
         << "unsigned long  "     << sizeof(unsigned long) << endl
         << "float          "     << sizeof(float) << endl
         << "double         "     << sizeof(double) << endl
         << "long double    "     << sizeof(long double) << endl
         << endl;
    
    return 0;
}
*/

/*
// 2
int main()
{
    cout << "       I"                          << endl
         << "               \"RUSH\""           << endl
         << "                           \"TO\"" << endl
         << "       /FRO/"                      << endl;

    return 0;
}
*/

/*
// 3
const long LARGE = 5;

int main()
{
    int a(2.5);
    int b = '?';
    // char z(500);
    int big = 4e+5;
    // double he's(1.2e+5);
    char c('\'');
    unsigned size(4e+5);
    float val = 12345.12345;

    cout << LARGE << a << b << big << c << size << val;

    return 0;
}
*/

// 4
int main()
{
    const float var1 = 123.456, var2 = 76.543;
    cout << "sum:   " << var1 + var2  << endl
         << "diff:  " << var1 - var2  << endl;

    return 0; 
}