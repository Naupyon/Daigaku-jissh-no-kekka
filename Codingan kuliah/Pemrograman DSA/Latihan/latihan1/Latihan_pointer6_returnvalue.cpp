#include <iostream>
#include <string>

using namespace std;

string Nama_bulan(int n);

int main() {
    int bl;
    cout << "Masukkan Bulan (1..12): ";
    cin >> bl;

    cout << "Bulan ke-" << bl << " adalah " << Nama_bulan(bl) << endl;
    return 0;
}

string Nama_bulan(int n) {
    static string bulan[] = {
        "Kode bulan salah",
        "Januari", "Februari", "Maret", "April",
        "Mei", "Juni", "Juli", "Agustus",
        "September", "Oktober", "November", "Desember"
    };

    return (n < 1 || n > 12) ? bulan[0] : bulan[n];
}
