#include <iostream>
using namespace std;

int main()
{
    int angka, bagi, pows = 1;

    cout << "Masukkan 6 Digit Angka : ";
    cin >> angka;

    for (int i = 1; i < 7; i++)
    {
        bagi = 1000000 / pows;
        cout << (angka / bagi + 2) % 10;
        pows *= 10;
    }
    return 0;
}