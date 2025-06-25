#include <stdio.h>
#include <math.h>
int main(){
    float R, T, V, L, K;
    scanf("%f", &R); scanf("%f", &T);
    
    V=22*R*R*T/7;
    L=2*22*R*(R+T)/7;
    K=2*22*R/7;

    printf("Volume = %.2f \n", V);
    printf("Luas = %.2f \n", L);
    printf("Keliling = %.2f \n", K);
}