#include <iostream>
using namespace std;


//1 - Write a C++ program that displays the memory space required by each
// fundamental type on screen.

int main()
{
    const bool boolVar                      = false;
    const char charVar                      = 'A'; 
    const signed char signedCharVar         = -12;
    const unsigned char unsignedCharVar     = 12;
    const wchar_t wchar_tVar                = "S";
    const short shortVar                    = 32767;
    const unsigned short unsignedShortVar   = 65535;
    const int intVar                        = 2147483647;
    const unsigned int unsignedIntVar       = 4294496295;
    const long longVar                      = 2147483647;
    const unsigned long unsignedLong        = 4294496295;
    const float floatVar                    = 3.4E+38;
    const double doubleVar                  = 1.7E+308;
    const long double longDoubleVar         = 1.1E+4932;

    cout << "type           size      " << endl
         << "bool                     "     << sizeof(boolVar) << endl
         << "char                     "     << sizeof(charVar) << endl
         << "signed char              "     << sizeof(signedCharVar) << endl
         << "unsigned char            "     << sizeof(unsignedCharVar) << endl
         << "wchar_t                  "     << sizeof(wchar_tVar) << endl
         << "short                    "     << sizeof(shortVar) << endl
         << "unsigned short           "     << sizeof(unsignedShortVar) << endl
         << "int                      "     << sizeof(intVar) << endl
         << "unsigned int             "     << sizeof(unsignedIntVar) << endl
         << "long                     "     << sizeof(longVar) << endl
         << "unsigned long            "     << sizeof(unsignedLong) << endl
         << "float                    "     << sizeof(floatVar) << endl
         << "double                   "     << sizeof(doubleVar) << endl
         << "long double              "     << sizeof(longDoubleVar) << endl;
    
    return 0;
}

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