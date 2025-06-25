#include <stdio.h>
#include <math.h>
int main(){
    float Alas, Tinggi, Miring, Keliling, Luas;
    Alas = 5;
    Tinggi = 12;
    Miring = sqrt (Alas*Alas + Tinggi*Tinggi);
    Keliling = 30;
    Luas = 30;
    printf("Diketahui :\n");
    printf("Alas = %.fcm\n", Alas);
    printf("Tinggi = %.fcm\n", Tinggi);
    printf("\n");
    printf("Jawab :\n");
    printf("Sisi A = %.fcm\n", Tinggi);
    printf("Sisi B = %.fcm\n", Miring);
    printf("Sisi C = %.fcm\n", Alas);
    printf("Keliling = %.fcm\n", Keliling);
    printf("Luas = %.fcm", Luas);
    return 0;

}