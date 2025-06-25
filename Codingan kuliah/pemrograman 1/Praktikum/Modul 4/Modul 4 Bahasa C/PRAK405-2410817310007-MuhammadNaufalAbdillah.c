#include <stdio.h>
int main()
{
    int baris1,baris2;
int total=0;
scanf("%d %d",&baris1, &baris2);
for(int i=1; i<=baris1; i++){
    int hasilbaris=0;

    for(int j=i;j>=1; j--)
    {
        hasilbaris+=j*baris2;
        printf("(%d*%d)",j,baris2);
        if(j>1)
        {
         printf("+");
        }
    }
printf("= %d\n",hasilbaris);
total+=hasilbaris;}
printf("%d",total);

    return 0; 
}