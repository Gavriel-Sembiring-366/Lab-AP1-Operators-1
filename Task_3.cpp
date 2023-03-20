#include <iostream>
using namespace std;

int main()
{
    int angka;
    int jumlah;

    cout << "Masukkan 4 digit angka : ";
    cin >> angka;

    jumlah = 0;

    for (int i = 1; i < 5; i++)
    {
        jumlah = jumlah + angka % 10; // mengambil angka terakhir
        angka = angka / 10;           //membagi dengan 10 agar angka terakhir berubah
    }
    cout << "Jumlahnya Adalah " << jumlah;
}