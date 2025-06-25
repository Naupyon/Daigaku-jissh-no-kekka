#include <stdio.h>
int main (){
    int sisi1 = 4;
    int sisi2 = 5;
    int sisi3 = 7;
    int Biaya_per_meter = 85000;
    int Keliling = sisi1 + sisi2 + sisi3;
    int Biaya_Total = Keliling * Biaya_per_meter;
     printf("Diketahui :\n");
     printf("Panjang Sisi Segitiga Berturut-turut adalah %d,", sisi1);
     printf("%d,", sisi2 );
     printf("%d\n", sisi3 );
     printf("Keliling tanah Pak Denglek adalah %d\n", Keliling);
     printf("Harga tanah per meter adalah %d\n", Biaya_per_meter);
     printf("Jawabannya : \n");
     printf("Biaya yang di perlukan Pak Danglek adalah : RP %d", Biaya_Total);
     return 0;
}