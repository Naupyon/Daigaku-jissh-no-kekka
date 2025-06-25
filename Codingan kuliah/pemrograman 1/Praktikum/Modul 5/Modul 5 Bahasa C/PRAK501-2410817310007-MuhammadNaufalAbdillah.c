#include<stdio.h>

int bilMaximal(int a, int b, int c, int d ){
    int bil = a;
    if (b>bil) bil = b;
    if (c>bil) bil = c;
    if (d>bil) bil = d;
    return bil;
}
int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int hasil = bilMaximal(a,b,c,d);
    printf("%d", hasil);
    return 0;
}