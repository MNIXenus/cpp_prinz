//circumference and area of a circle with radius 2.5

#include <iostream>
using namespace std;

const double PI = 3.141593;

int main()
{
    volatile double area, circuit, radius = 1.5;

    area = PI * radius * radius;
    circuit = 2 * PI * radius;

    cout << "Radius:            " << radius     << endl
         << "Circumference:     " << circuit    << endl
         << "Area:              " << area       << endl;

    return 0;

}