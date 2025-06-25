#include <stdio.h>
int main(){
    int mulai, henti, i, j;
    scanf("%d %d", &mulai, &henti);

    for (i=mulai, j=henti; i<=henti&&j>=mulai; i++, j-- )
    {
    printf("%d %d",     i, j);
    if (i<henti||j>mulai)
        { printf(" - ");}
    }

    for (i=mulai, j=henti; i>=henti && j<=mulai; i--, j++ )
    {
       printf("%d %d", i, j);
       if (i>henti||j<mulai)
       {printf(" - ");}
       
    }
    return 0;
}