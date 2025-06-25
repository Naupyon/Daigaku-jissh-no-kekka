#include <stdio.h>
int main (){
    int pilihan;
    float nilai_1, nilai_2, hasil;

    while (1)
    {
      printf("Pilih Program\n");
      printf("1. Penjumlahan\n2. pengurangan\n");
      printf("3. Perkalian\n4. Pembagian\n");

      printf("5. Exit\nMasukan pilihan  :");
      scanf("%d", &pilihan);

    if (pilihan== 5)
    {
     printf("Teimakasih, telah mengunakan Kalkulator MUHAMMAD NAUFAL ABDILLAH");
     break;
    }

    if (pilihan<1||pilihan>5)
    {
     printf("Input anda salah, silahkan mencoba lagi\n");
     continue;
    }

    if (pilihan>=1&&pilihan<=4)
    {
     printf("Masukan nilai kesatu :");
     scanf("%f", &nilai_1);
     printf("Masukan nilai kedua :");
     scanf("%f", &nilai_2);
    }

    switch (pilihan)
    {
    case 1:
       hasil=nilai_1=nilai_2;
       printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f \n \n", nilai_1, nilai_2, hasil);
        break;
    case 2:
        hasil=nilai_1-nilai_2;
        printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f \n \n", nilai_1, nilai_2, hasil); 
        break;
    case 3:
        hasil=nilai_1*nilai_2;
        printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f \n \n", nilai_1, nilai_2, hasil);
        break;
    case 4:
            if(nilai_2!=0 || nilai_1!=0){
        hasil=nilai_1/nilai_2;
        printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f \n \n", nilai_1, nilai_2, hasil);
       } else{printf("Pembagian nol tidak bisa\n\n");}
        break;
    }
    
    }
    return 0;
}