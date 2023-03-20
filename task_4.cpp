#include <iostream>
using namespace std;

int main()
{
    int detik;

    cout << "Masukkan Jumlah Detik Yang Akan Dihitung : ";
    cin >> detik;

    int jam = detik / 3600;          // Jumlah Jam
    int menit = (detik % 3600) / 60; //Jumlah Menit
    int sisa = (detik % 3600) % 60;  //Jumlah Detik
    string menits;

    if (jam >= 1 && jam <= 9) // menampilkan 0 diawal jika jam 1-9
    {
        cout << "0" << jam << ":";
    }
    else
    {
        cout << jam << ":";
    }

    if (menit >= 1 && menit <= 9) // menampilkan 0 diawal jika menit 1-9
    {
        cout << "0" << menit << ":";
    }
    else
    {
        cout << menit << ":";
    }

    if (sisa >= 1 && sisa <= 9) // menampilkan 0 diawal jika detik 1-9
    {
        cout << "0" << sisa;
    }
    else
    {
        cout << sisa;
    }
}