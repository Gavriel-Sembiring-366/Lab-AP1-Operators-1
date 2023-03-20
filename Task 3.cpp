#include <iostream>
using namespace std;

int main()
{
    int detik = 7221;
    int jam = detik / 3600;
    int menit = (detik % 3600) / 60;

    cout << "jam : " << jam << "Menit : " << menit;
}