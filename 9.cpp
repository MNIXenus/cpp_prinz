// outputs three random numbers
#include <iostream> // cin, cout
#include <cstdlib>  // srand(), rand():
                    // void srand( unsigned int seed) ;
                    // int rand (void)

using namespace std;

int main()
{
    unsigned int seed;
    char prcdQRes;
    int z1, z2, z3;

    cout << "Random Numbers\n" << endl;
    cout << "To initialize the random number generator,\n"
         << "please enter an integer value: ";
    cin  >> seed;

    srand(seed);
    z1 = rand();
    z2 = rand();
    z3 = rand();

    cout << "\nThree random numbers: "
         << z1 << "     " << z2  << "       " << z3 << endl;

    cout << "Proceed? y/n";
    cin >> prcdQRes;
    if (prcdQRes == 'y') 
        {
            main();
        }
    else 
        {
            return 0;
        };
}