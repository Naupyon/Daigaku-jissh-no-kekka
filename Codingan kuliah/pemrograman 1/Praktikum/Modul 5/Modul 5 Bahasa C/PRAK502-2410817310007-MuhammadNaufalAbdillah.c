#include<stdio.h>
#include<math.h>
int hitungnilai (int nilai1, int nilai2){
    return sqrt((nilai2-nilai1) * (nilai2-nilai1));
}

int mutlak(int angka){
if (angka<0){
    return -angka;
}
return angka;
}

int main(){
    int a, b, c, d, hasil;
scanf("%d %d %d %d", &a, &c, &b, &d);

hasil= hitungnilai(a, b)+hitungnilai(c, d);

printf("%d", mutlak(hasil));
return 0;
}