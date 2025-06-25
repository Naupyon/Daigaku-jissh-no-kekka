#include <iostream>
using namespace std;

int main() {
    struct Mahasiswa {
        char nim[20];
        char nama[50];
        char alamat[100];
        int umur;
        int ipk;
    };

    Mahasiswa mhs;
    
    cout << "Profil Mahasiswa" << endl;
    cout << "Silahkan masukkan identitas diri Anda :" << endl;
    
    cout << "NIM : ";
    cin >> mhs.nim;
    
    cout << "Nama : ";
    cin >> mhs.nama;
    
    cout << "Alamat : ";
    cin >> mhs.alamat;
    
    cout << "Umur : ";
    cin >> mhs.umur;
    
    cout << "IPK Terakhir : ";
    cin >> mhs.ipk;
    
    cout << "==========================" << endl;
    cout << "Berikut identitas Anda:" << endl;
    cout << "NIM : " << mhs.nim << endl;
    cout << "Nama : " << mhs.nama << endl;
    cout << "Alamat : " << mhs.alamat << endl;
    cout << "Umur : " << mhs.umur << endl;
    cout << "IPK Terakhir : " << mhs.ipk << endl;
    cout << "==========================";
    
    return 0;
}
