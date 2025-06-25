#include <stdio.h>

int main(){
    int baris, kolom, isi, i, j;
    scanf("%d %d", &baris, &kolom);
    int angka_matrik[baris][kolom];

    for(i = 0; i < baris; i++){
        for (j = 0; j < kolom; j++){
            scanf("%d", &angka_matrik[i][j]);
        }}
    
    for (i = 0; i < baris; i++){
        for(j = 0; j < kolom; j++){
            printf("%d ", angka_matrik[i][j]);}
            printf("\n");}
}