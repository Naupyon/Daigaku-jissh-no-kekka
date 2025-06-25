#include <stdio.h>
int main(){
    int Nomor;
    scanf ("%d", &Nomor);
    if (Nomor > 0) printf("Positif");
    else if (Nomor < 0) printf ("Negatif");
    else printf ("Nol");
    return 0;
}
