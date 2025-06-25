#include <stdio.h>

int main() {
    int anak_ayam = 10;
    const char *nama[11] = {
        "induknya", "satu", "dua", "tiga", "empat",
        "lima", "enam", "tujuh", "delapan", "sembilan", "sepuluh"
    };

    printf("----------LAGU ANAK AYAM---------------\n");
    printf("Tek kotek, kotek kotek\nAnak ayam turun berkotek\n");

    for (int i = anak_ayam; i > 0; i--) {
        printf("Anak ayam ada %s, mati 1 tinggal %s\n", nama[i], nama[i - 1]);
    }

    printf("--------- Program by : 2410817310007 - Muhammad Naufal Abdillah ----------\n");
    return 0;
}
