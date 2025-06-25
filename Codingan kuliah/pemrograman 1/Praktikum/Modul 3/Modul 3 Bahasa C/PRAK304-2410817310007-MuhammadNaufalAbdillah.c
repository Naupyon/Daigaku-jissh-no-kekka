#include <stdio.h>
int main(){
    int Nomor;
    printf("Masukan angka: ");
    scanf ("%d", &Nomor);

if ( Nomor >= 100)
    { printf("Anda meginput melebihi limit bilangan");}
else if (Nomor == 0)
    { printf("Nol");}
else if ( Nomor == 10)
    { printf("Puluhan");}
else if (Nomor >= 11 && Nomor <= 19)
{ printf("Belasan");}
else if (Nomor >= 20 && Nomor <= 99)
{ printf("Puluhan");}

else{printf("Satuan");}
return 0;
}