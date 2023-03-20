#include <iostream>
using namespace std;

main()
{
    int angka;
    int hasil;
    cout << "Masukkan 4 Digit Angka : ";
    cin >> angka;

    hasil = ((((angka + 8) / 3) % 5) * 5); // menambahkan 8 ke angka awal
                                           // membagi 3 angka awal
                                           // Mengabmbil modulus
                                           // Di kalikan dengan 5
    cout << "Hasil nya adalah : " << hasil;
}