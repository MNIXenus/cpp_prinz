// calculating powers with
// the standart function pow()

#include <iostream> // declaration of cout
#include <cmath> // Prototype of pow(), thus:
                 // double pow( double, double);

using namespace std;

int main()
{
    double y;
    // by means of a prototype, the compiler generates
    // the correct call or an error message

    // computes x raised to the power 3:

    // y = pow("x", 3.0);
    // y = pow(x+3.0);
    y = pow(2.5, 3);
    y = pow(2.5, 3.0);

    cout << "2.5 raised to 3 yields: "
         << y << endl;

    // calculating with pow() is possible:
    cout << "2 + (5 raised to the power 2.5) yields: "
         << 2.0 + pow(5.0, 2.5) << endl;
    
    return 0;
}