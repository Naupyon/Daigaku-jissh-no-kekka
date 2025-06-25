#include<stdio.h>
int maxim(int a, int b){
    if (a>b)
        return a;
    else
        return b;   
}

int minim(int a, int b){
    if (a<b)
        return a;
    else  
        return b;    
}

int main(){
    int batas=0;
    int maks = -100000;
    int mins = 100000;
    int bilangan;
    scanf("%d", &bilangan);

    while (batas<bilangan)
    {
        int nilai;
        scanf("%d", &nilai);
        maks=maxim(maks,nilai);
        mins=minim(mins, nilai);
        batas++;
    }
    printf("%d %d", maks, mins);
}