#include <stdio.h>
int main(){
    int i, j, angka, a;
    scanf("%d %d", &i, &j);
    if(i!=j){
        printf("jumlah tidak sama");
    } else{
        int baris_i[i]; int baris_j[j];
        for(a = 0; a<i; a++){
            scanf("%d", &baris_i[a]);}

        for(a = 0; a < j; a++){
            scanf("%d", &baris_j[a]);}

        for(a = 0; a < i; a++){
            angka = baris_i[a] * baris_j[a];
            printf("%d ", angka);}
    }
}