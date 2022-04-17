#include <iostream>
using namespace std;

int main()
{
    double x = 12.0;
    cout.precision(4);
    cout << " By deault: "                      << x << endl;
    cout << " showpoint: "      << showpoint    << x << endl;
    cout << " fixed:     "      << fixed        << x << endl;
    cout << " scientific:"      << scientific   << x << endl;
    return 0;
}