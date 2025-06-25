#include <iostream>

using namespace std;

struct smr
{
    char plat[10], jenis[10], nama[20],
    alamat[20], kota[15];
};

int main()
{
    smr Kendaraan = {"DA1234MK", "RUSH", "Andika Hartanto", "Jl.Kayu Tangi 1", "Banjarmsin"};

    cout << "Plat Nomor kendaraan : " << Kendaraan.plat << endl;
    cout << "Jenis kendaraan : " << Kendaraan.jenis << endl;
    cout << "Nama Pemilik : " << Kendaraan.nama << endl;
    cout << "Alamat : " << Kendaraan.alamat << endl;
    cout << "Kota : " << Kendaraan.kota << endl;
}