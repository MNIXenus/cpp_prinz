// // 1
// #include <iostream>
// using namespace std;

// int main()
// {
//     cout << 3/10 << endl;
//     cout << 11 % 4 << endl;
//     cout << 15 / 2.0 << endl;
//     cout << 3 + 4 % 5 << endl;
//     cout << 3 * 4 % 5 << endl;
//     cout << 7 % 4 * 3 << endl;
//     return 0;
// }

// //2
// #include <iostream>
// using namespace std;
// int main()
// {
//     int x, i = -2;
//     // x = ((-4) * i++) - (6 % 4); //Insert parentheses to form equivalent expressions.
//     x = -4 * i++ - 6 % 4;
//     cout << x << endl;
//     return 0;
// }

// 
#include <iostream>
using namespace std;
int main()
{
    cout << boolalpha;
    bool res = false;
    int y = 5;
    res = 7 || (y = 0);
    cout << "Result of (7 || (y = 0)): " << res << endl; //false
    cout << "Value of y: " << y << endl; // 0

    int a, b, c;

    a = b = c = 0;
    res = ++a || ++b && ++c; //true
    cout << '\n'
         << " res = " << res
         << ",  a = " << a
         << ",  b = " << b
         << ",  c = " << c << endl;

    a = b = c = 0;
    res = ++a && ++b || ++c; //true
    cout << " res = " << res
         << ",  a = " << a
         << ",  b = " << b
         << ",  c = " << c << endl;
    return 0;
}

