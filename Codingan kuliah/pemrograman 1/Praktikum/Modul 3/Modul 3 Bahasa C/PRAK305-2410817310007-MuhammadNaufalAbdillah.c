#include <stdio.h>
int main (){
    int Total_detik;
   
printf("Masukan detik : ");
scanf("%d", &Total_detik);
    int hari = Total_detik/ 86400;
    Total_detik %= 86400;
    int jam = Total_detik/ 3600;
    Total_detik %= 3600;
    int menit = Total_detik/ 60;
    Total_detik %= 60;

if (hari > 0) {printf("%d hari %02d:%02d:%02d\n", hari, jam, menit, Total_detik);}
 else {printf("%02d:%02d:%02d\n", jam, menit, Total_detik);}
return 0;
}