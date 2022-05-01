#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/* //2
int main()
{
    float num_1 = 0.123456;
    float num_2 = 23.987;
    float num_3 = -123.456;
    cout << left << setw(15) << num_1 << endl;
    cout << right << fixed << setw(12) << setprecision(2) << num_2 << endl;
    cout << scientific << setprecision(4) << num_3 << endl;
    return 0;
} */

// //3
// int main()
// {
//     int articleNumber, numberOfPieces;
//     float PricePerPiece;

//     cout << "\nInsert Article Number" << endl;
//     cin >> articleNumber;
//     cin.sync();
//     cin.clear();
//     cout << "\nInsert Number of Pieces" << endl;
//     cin >> numberOfPieces;
//     cin.sync();
//     cin.clear();
//     cout << "\nPrice per piece" << endl;
//     cin >> PricePerPiece;
//     cin.sync();
//     cin.clear();

//     cout << "\nArtice Number    Number of pieces    Proce per piece" << endl;
//     cout << articleNumber << "  " << numberOfPieces << "    " << PricePerPiece << " Dollar";

//     return 0;
// }

/* //4
int main()
{
    int ch_code;
    cin >> ch_code;
    cin.sync();
    cin.clear();

    cout << "char:" << (char)ch_code << endl;
    cout << "dec: " << dec << ch_code << endl;
    cout << "oct: " << oct << ch_code << endl;
    cout << "hex: " << hex << ch_code << endl;

    return 0;
    
} */


/* //5
int main()
{
    char ch;

    cout << "Let's go! Press the <return> key" << endl;
    cout << "Enter a word containing three characters at most: ";
    
    
    for (int i = 0; i < 3; i++)
    {

        cin >> ch;
        if (i==0)
        {
            cout << "Your input: ";
        }
        cout << ch;
    }

    return 0;
}
 */

