#include <stdio.h>
int main(){
    char Nama[50]; char Nim[50]; char kelas[50];
    char Ttl[50]; char alamat[50]; char hobi[50];
    char hp[50];

    printf("Nama :"); fgets(Nama,sizeof(Nama), stdin);
    printf("NIM :"); fgets(Nim,sizeof(Nim), stdin);
    printf("Kelas Paralel :"); fgets(kelas,sizeof(kelas), stdin);
    printf("Tempat/Tanggal Lahir :"); fgets(Ttl,sizeof(Ttl), stdin);
    printf("Alamat :"); fgets(alamat,sizeof(alamat), stdin);
    printf("hobi :"); fgets(hobi,sizeof(hobi), stdin);
    printf("No. Hp :");fgets(hp,sizeof(hp), stdin);
    
    printf("Nama : %s", Nama);
    printf("NIM : %s", Nim);
    printf("Kelas Paraler : %s", kelas);
    printf("Tempat/Tanggal Lahir : %s", Ttl);
    printf("Alamat : %s", alamat);
    printf("Hobi : %s", hobi);
    printf("No. Hp : %s", hp);
    return 0;
}