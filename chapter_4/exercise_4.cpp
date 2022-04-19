#include <iostream>
#include <iomanip>
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

int main()
{
    int articleNumber, numberOfPieces;
    float PricePerPiece;

    cout << "\nInsert Article Number" << endl;
    cin >> articleNumber;
    cin.sync();
    cin.clear();
    cout << "\nInsert Number of Pieces" << endl;
    cin >> numberOfPieces;
    cin.sync();
    cin.clear();
    cout << "\nPrice per piece" << endl;
    cin >> PricePerPiece;
    cin.sync();
    cin.clear();

    cout << "\nArtice Number    Number of pieces    Proce per piece" << endl;
    cout << articleNumber << "  " << numberOfPieces << "    " << PricePerPiece << " Dollar";

    return 0;
}


