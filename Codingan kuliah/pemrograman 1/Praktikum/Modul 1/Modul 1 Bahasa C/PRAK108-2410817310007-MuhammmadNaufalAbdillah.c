#include <stdio.h>
int main(){
    float putaran = 5;
    float jarak_Total = 14;
    float Jarijari = jarak_Total / ( 2 * 3.14 * 5);
    printf("Diketahui : \n");
    printf("Pak Dengklek mengelilingi taman = %.f putaran\n", putaran);
    printf("Jarak tempuh pak Dangklek = %.f Kilometer\n", jarak_Total);
    printf("\n");
    printf("Jawaban :\n");
    printf("Jari-jari taman yamg dikelilingi Pak Dangklek adalah %.2f Kilometer", Jarijari);
    return 0;
}