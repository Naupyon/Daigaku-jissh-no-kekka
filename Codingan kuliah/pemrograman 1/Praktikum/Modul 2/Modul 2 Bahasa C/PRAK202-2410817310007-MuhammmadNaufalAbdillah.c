#include <stdio.h>
int main(){
    float P; float K;
    printf("Masukan NIlai Pertama : ");
    scanf("%f", &P);
    printf("Masukan Nilai Kedua : ");
    scanf("%f", &K);

    float Total1 =P+K;
    if (P==(int)P){
        printf("Hasil dari penjumlahan nilai pertama \"%d\" dan nilai kedua \"%.1f\" adalah \"%.2f\"\n\n",(int)P,K,Total1);
    }
    else{
        printf("Hasil dari penjumlahan nilai pertaama \"%.2f\" dan nilai kedua \"%.1f\" adlah \"%.2f\"\n\n",P,K,Total1);
    }
}