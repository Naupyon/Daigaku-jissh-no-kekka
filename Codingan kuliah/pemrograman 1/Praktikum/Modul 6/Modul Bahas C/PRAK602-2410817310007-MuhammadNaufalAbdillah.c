#include<stdio.h>
int main(){
    int batas, isi , i;
    scanf("%d", &batas);
    int angka_matrik[batas];

for (i = 0; i < batas; i++){
    scanf("%d", &angka_matrik[i]);}

for (i = 0; i< batas; i++){
    printf("%d ", angka_matrik[i]*(i+1));}
    return 0;
}