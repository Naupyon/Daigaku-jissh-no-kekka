#include <stdio.h>
#include <math.h>
int main(){
    float a, b, c, K, L;
    scanf("%f", &a);
    scanf("%f", &b);
    c=sqrt((b*b)-(a*a));
    K=a+b+c;            
    L=0.5*c*a;

    printf("Alas = %.f cm\n", c);
    printf("Tinggi = %.f cm\n", a);
    printf("Keliling = %.f cm\n", K);
    printf("Luas = %.f cm^2\n", L);
    return 0;
}