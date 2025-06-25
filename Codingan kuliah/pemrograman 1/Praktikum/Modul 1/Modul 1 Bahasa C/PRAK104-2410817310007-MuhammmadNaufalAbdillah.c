#include <stdio.h>
int main(){
    int Sepatu_A = 400000;
    int Sepatu_B = 350000;
    printf("Harga sepatu A adalah %d\n", Sepatu_A);
    printf("Harga sepatu A adalah %d\n", Sepatu_B);
    printf("Sepatu A mendapatkan diskon sebesar 13%% hingga harganya menjadi %d\n", Sepatu_A - (Sepatu_A * 13/100));
    printf("Sepatu B mendapatkan diskon sebesar 21%% hingga harganya menjadi %d\n", Sepatu_B - (Sepatu_B * 21/100));
    return 0;
}