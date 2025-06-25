#include <stdio.h>
int main()
{
    int a, b, x, y;
    a = 9, b = 5, x = 8, y = 8;
    int Modulus_ab = a % b;
    int Modulus_xy = x % y;
    printf("Variabel a benilai %d\n", a);
    printf("Variabel b benilai %d\n", b);
    printf("Variabel x benilai %d\n", x);
    printf("Variabel y benilai %d\n", y);
    printf("Total a dibagi b dan x dibagi y adalah %d", Modulus_ab + Modulus_xy);
    return 0;
}