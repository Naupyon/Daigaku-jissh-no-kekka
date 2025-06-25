#include <iostream>
using namespace std;

int main() {
    char nim[20];
    char nama[50];
    char alamat[80];
    int umur;
    int ipk;
    
    cout << "Profil Mahasiswa" << endl;
    cout << "Silahkan masukkan identitas diri Anda :" << endl;
    
    cout << "NIM : ";
    cin >> nim;
    
    cout << "Nama : ";
    cin >> nama;
    
    cout << "Alamat : ";
    cin >> alamat;
    
    cout << "Umur : ";
    cin >> umur;
    
    cout << "IPK Terakhir : ";
    cin >> ipk;
    
    cout << "==========================" << endl;
    cout << "Berikut identitas Anda:" << endl;
    cout << "NIM : " << nim << endl;
    cout << "Nama : " << nama << endl;
    cout << "Alamat : " << alamat << endl;
    cout << "Umur : " << umur << endl;
    cout << "IPK Terakhir : " << ipk << endl;
    cout << "==========================" << endl;
    
    return 0;
}